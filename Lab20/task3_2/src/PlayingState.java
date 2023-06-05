public class PlayingState implements State {
    private final MediaPlayer player;

    public PlayingState(MediaPlayer player) {
        this.player = player;
    }

    @Override
    public void play() {
        System.out.println("Already playing the current track: " + player.getCurrentTrack());
    }

    @Override
    public void pause() {
        System.out.println("Pausing the current track: " + player.getCurrentTrack());
        player.setState(new PausedState(player));
    }

    @Override
    public void next() {
        int nextTrack = player.getCurrentTrackNum() + 1;
        if (nextTrack < player.getTracks().size()) {
            System.out.println("Playing next track: " + player.getTracks().get(nextTrack));
            player.setTrackNum(nextTrack);
        } else {
            System.out.println("Already at the last track");
        }
    }

    @Override
    public void prev() {
        int prevTrack = player.getCurrentTrackNum() - 1;
        if (prevTrack >= 0) {
            System.out.println("Playing previous track: " + player.getTracks().get(prevTrack));
            player.setTrackNum(prevTrack);
        } else {
            System.out.println("Already at the first track");
        }
    }

    @Override
    public void stop() {
        System.out.println("Stopping the current track: " + player.getCurrentTrack());
        player.setState(new StoppedState(player));
    }
}
