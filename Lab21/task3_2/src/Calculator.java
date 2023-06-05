public class Calculator {
    private OperationStrategy operationStrategy;

    public void setOperationStrategy(OperationStrategy operationStrategy) {
        this.operationStrategy = operationStrategy;
    }

    public int calculate(int a, int b) {
        if (operationStrategy != null) {
            return operationStrategy.execute(a, b);
        } else {
            throw new UnsupportedOperationException("No operation strategy set.");
        }
    }
}