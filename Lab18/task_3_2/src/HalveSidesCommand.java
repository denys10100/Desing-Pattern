public class HalveSidesCommand implements Command {
    private Triangle triangle;

    public HalveSidesCommand(Triangle triangle) {
        this.triangle = triangle;
    }

    @Override
    public void execute() {
        triangle.halveSides();
    }
}
