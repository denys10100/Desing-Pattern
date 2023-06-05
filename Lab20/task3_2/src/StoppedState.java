public class StoppedState implements State {
    private final MediaPlayer player;

    public StoppedState(MediaPlayer player) {
        this.player = player;
    }

    @Override
    public void play() {
        System.out.println("Playing the first track: " + player.getTracks().get(0));
        player.setTrackNum(0);
        player.setState(new PlayingState(player));
    }

    @Override
    public void pause() {
        System.out.println("Cannot pause, player is stopped");
    }

    @Override
    public void next() {
        System.out.println("Cannot play next track, player is stopped");
    }

    @Override
    public void prev() {
        System.out.println("Cannot play previous track, player is stopped");
    }

    @Override
    public void stop() {
        System.out.println("Player is already stopped");
    }
}
