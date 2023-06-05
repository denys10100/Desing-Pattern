import java.util.ArrayList;
import java.util.List;

public class AirTrafficControlMediator {
    private Runway runway;
    private List<Plane> planes;

    public AirTrafficControlMediator() {
        runway = new Runway();
        planes = new ArrayList<>();
    }

    public void registerPlane(Plane plane) {
        planes.add(plane);
    }

    public void requestTakeOff(Plane plane) {
        if (!plane.getIsInTheAir() && runway.getIsAvailable()) {
            System.out.println("Plane " + plane.getId() + " is taking off...");
            runway.setIsAvailable(false);
            plane.setIsInTheAir(true);
            planes.remove(plane);
        }
    }
}
