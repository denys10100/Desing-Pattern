public class PausedState implements State {
    private final MediaPlayer player;

    public PausedState(MediaPlayer player) {
        this.player = player;
    }

    @Override
    public void play() {
        System.out.println("Resuming the current track: " + player.getCurrentTrack());
        player.setState(new PlayingState(player));
    }

    @Override
    public void pause() {
        System.out.println("Already paused the current track: " + player.getCurrentTrack());
    }

    @Override
    public void next() {
        int nextTrack = player.getCurrentTrackNum() + 1;
        if (nextTrack < player.getTracks().size()) {
            System.out.println("Playing next track: " + player.getTracks().get(nextTrack));
            player.setTrackNum(nextTrack);
            player.setState(new PlayingState(player));
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
            player.setState(new PlayingState(player));
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
