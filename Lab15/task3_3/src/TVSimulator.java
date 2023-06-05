public class TVSimulator {
    public static void main(String[] args) {
        Device tv = new Television();

        Command onCommand = new DeviceOnCommand(tv);
        Command offCommand = new DeviceOffCommand(tv);
        Command volumeUpCommand = new VolumeUpCommand(tv);
        Command volumeDownCommand = new VolumeDownCommand(tv);
        Command nextChannelCommand = new NextChannelCommand(tv);
        Command prevChannelCommand = new PrevChannelCommand(tv);

        RemoteController controller = new RemoteController(onCommand, offCommand,
                volumeUpCommand, volumeDownCommand,
                nextChannelCommand, prevChannelCommand);

        controller.deviceOn();

        for (int i = 0; i < 30; i++) {
            controller.deviceNextChanel();
        }
        controller.deviceVolumeUp();

        controller.deviceVolumeUp();
        controller.deviceVolumeUp();

        controller.devicePrevChanel();

        controller.deviceVolumeDown();

        controller.deviceOff();
    }
}
