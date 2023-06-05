public class RemoteController {
    private final Command onCommand;
    private final Command offCommand;
    private final Command volumeUpCommand;
    private final Command volumeDownCommand;
    private final Command nextChannelCommand;
    private final Command prevChannelCommand;

    public RemoteController(Command onCommand, Command offCommand,
                            Command volumeUpCommand, Command volumeDownCommand,
                            Command nextChannelCommand, Command prevChannelCommand) {
        this.onCommand = onCommand;
        this.offCommand = offCommand;
        this.volumeUpCommand = volumeUpCommand;
        this.volumeDownCommand = volumeDownCommand;
        this.nextChannelCommand = nextChannelCommand;
        this.prevChannelCommand = prevChannelCommand;
    }

    public void deviceOn() {
        onCommand.execute();
    }

    public void deviceOff() {
        offCommand.execute();
    }

    public void deviceVolumeUp() {
        volumeUpCommand.execute();
    }

    public void deviceVolumeDown() {
        volumeDownCommand.execute();
    }

    public void deviceNextChanel() {
        nextChannelCommand.execute();
    }

    public void devicePrevChanel() {
        prevChannelCommand.execute();
    }
}
