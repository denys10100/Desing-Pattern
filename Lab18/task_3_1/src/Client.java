public class Client {
    public static void main(String[] args) {
        Triangle triangle = new Triangle(3, 3, 3);
        TriangleCommandManager commandManager = new TriangleCommandManager(triangle);

        System.out.println("Initial Square = " + triangle.square());

        commandManager.doubleSides();
        System.out.println("Square after doubling sides = " + triangle.square());

        commandManager.halveSides();
        System.out.println("Square after halving sides = " + triangle.square());

        commandManager.undoLastCommand();
        System.out.println("Square after undoing halving sides = " + triangle.square());

        commandManager.undoLastCommand();
        System.out.println("Square after undoing doubling sides = " + triangle.square());

        commandManager.undoLastCommand();
        System.out.println("Square after undoing initial state = " + triangle.square());
    }
}
