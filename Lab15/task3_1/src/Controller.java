
public class Controller {

    private Lamp lamp;

    public Controller(Lamp lamp) {
        this.lamp = lamp;
    }

    public Controller() {
        this.lamp = null;
    }

    public void setLamp(Lamp lamp) {
        this.lamp = lamp;
    }

    public void turnOn() {
        if (lamp != null) {
            lamp.lightOn();
        }
    }

    public void turnOff() {
        if (lamp != null) {
            lamp.lightOff();
        }
    }
}