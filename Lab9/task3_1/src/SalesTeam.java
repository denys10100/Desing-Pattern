import java.util.ArrayList;
import java.util.List;

public class SalesTeam implements Payable {

    private final List<Payable> employees = new ArrayList<>();

    public void addEmployee(Payable employee) {
        employees.add(employee);
    }

    @Override
    public void payExpenses() {
        for (Payable employee : employees) {
            employee.payExpenses();
        }
    }

}