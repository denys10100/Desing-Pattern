public class Client {

    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        calculator.setOperationStrategy(new SubtractionStrategy());
        calculator.calculate(12, 13);

        calculator.setOperationStrategy(new AdditionStrategy());
        calculator.calculate(5, 7);

        calculator.setOperationStrategy(new MultiplicationStrategy());
        calculator.calculate(3, 4);
    }
}