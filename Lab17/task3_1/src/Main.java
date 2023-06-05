public class Main {
    public static void main(String[] args) {
        AirTrafficControlMediator mediator = new AirTrafficControlMediator();

        Plane plane = new Plane(123, mediator);
        mediator.registerPlane(plane);

        plane.takeOff();
    }
}
