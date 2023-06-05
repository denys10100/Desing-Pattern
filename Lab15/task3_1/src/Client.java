public class Client {
    public static void main(String[] args) {

        Lamp kitchenLamp = new Lamp("Kitchen");
        Lamp hallLamp = new Lamp("Hall");
        Lamp bedroomLamp = new Lamp("Bedroom");
        Lamp bathroomLamp = new Lamp("Bathroom");

        Controller controllerKitchenLamp = new Controller(kitchenLamp);
        Controller controllerHallLamp = new Controller(hallLamp);
        Controller controllerBedroomLamp = new Controller(bedroomLamp);
        Controller controllerBathroomLamp = new Controller(bathroomLamp);
        Controller controllerUniversal = new Controller();

        // Simulation
        controllerKitchenLamp.turnOn();
        controllerHallLamp.turnOn();
        controllerBedroomLamp.turnOn();

        controllerKitchenLamp.turnOff();
        controllerHallLamp.turnOff();
        controllerBedroomLamp.turnOff();

        controllerBedroomLamp.turnOn();
        controllerBathroomLamp.turnOn();

        controllerUniversal.turnOff();

    }
}