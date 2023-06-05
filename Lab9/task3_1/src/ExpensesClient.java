public class ExpensesClient {

    public static void main(String[] args) {
        Manager jane = new Manager("Jane", 100);
        Salesperson bob = new Salesperson("Bob", 300, jane);
        Salesperson sue = new Salesperson("Sue", 200, jane);

        SalesTeam team = new SalesTeam();
        team.addEmployee(jane);
        team.addEmployee(bob);
        team.addEmployee(sue);

        payEmployee(jane);
        payEmployee(bob);
        payEmployee(team);
    }

    private static void payEmployee(Payable employee) {
        System.out.println("Expenses have been requested");
        employee.payExpenses();
        System.out.println("Expenses have been paid\n");
    }

}