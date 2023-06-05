import java.util.ArrayList;
import java.util.List;

public class TriangleCommandManager {
    private Triangle triangle;
    private List<Memento> mementos;
    private List<Command> commands;

    public TriangleCommandManager(Triangle triangle) {
        this.triangle = triangle;
        this.mementos = new ArrayList<>();
        this.commands = new ArrayList<>();
    }

    public void doubleSides() {
        Command command = new DoubleSidesCommand(triangle);
        executeCommand(command);
    }

    public void halveSides() {
        Command command = new HalveSidesCommand(triangle);
        executeCommand(command);
    }

    private void executeCommand(Command command) {
        Memento memento = triangle.createMemento();
        command.execute();
        mementos.add(memento);
        commands.add(command);
    }

    public void undoLastCommand() {
        if (!mementos.isEmpty() && !commands.isEmpty()) {
            Memento memento = mementos.remove(mementos.size() - 1);
            Command command = commands.remove(commands.size() - 1);
            command.execute();
            triangle.restoreFromMemento((TriangleMemento) memento);
        }
    }
}
