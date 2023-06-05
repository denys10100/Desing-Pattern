public class Plane {
    private boolean isInTheAir;
    private int id;
    private AirTrafficControlMediator mediator;

    public Plane(int id, AirTrafficControlMediator mediator) {
        this.id = id;
        this.isInTheAir = false;
        this.mediator = mediator;
    }

    public void takeOff() {
        mediator.requestTakeOff(this);
    }

    public void setIsInTheAir(boolean isInTheAir) {
        this.isInTheAir = isInTheAir;
    }

    public boolean getIsInTheAir() {
        return isInTheAir;
    }

    public int getId() {
        return id;
    }
}
