public class HighState implements FanState {
    @Override
    public void turnUp(Fan fan) {
        // No action in the high state
    }

    @Override
    public void turnDown(Fan fan) {
        fan.setState(new MediumState());
        System.out.println("Fan is on medium");
    }
}
