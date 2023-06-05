public class Main {

    public static void main(String[] args) {
        Customer customer = new Customer();
        customer.setPaymentStrategy(new BankAccountPaymentStrategy());
        customer.makePayment(100);
    }

}
