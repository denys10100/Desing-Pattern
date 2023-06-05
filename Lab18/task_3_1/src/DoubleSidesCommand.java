public class DoubleSidesCommand implements Command {
    private Triangle triangle;

    public DoubleSidesCommand(Triangle triangle) {
        this.triangle = triangle;
    }

    @Override
    public void execute() {
        triangle.doubleSides();
    }
}
