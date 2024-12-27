import java.util.Scanner;

abstract class Employee {
    protected String name;
    protected double basicSalary;

    public Employee(String name, double basicSalary) {
        this.name = name;
        this.basicSalary = basicSalary;
    }

    public abstract double calculateSalary();
}

class Manager extends Employee {
    private double bonus;

    public Manager(String name, double basicSalary, double bonus) {
        super(name, basicSalary);
        this.bonus = bonus;
    }

    @Override
    public double calculateSalary() {
        return basicSalary + bonus;
    }
}

class Programmer extends Employee {
    private int projectsCompleted;

    public Programmer(String name, double basicSalary, int projectsCompleted) {
        super(name, basicSalary);
        this.projectsCompleted = projectsCompleted;
    }

    @Override
    public double calculateSalary() {
        return basicSalary + (projectsCompleted * 5000); // Example bonus per project
    }
}

public class EmployeeSalaryCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter employee name: ");
        String name = scanner.nextLine();
        System.out.print("Enter basic salary: ");
        double basicSalary = scanner.nextDouble();
        System.out.print("Enter employee type (Manager/Programmer): ");
        String employeeType = scanner.next();

        Employee employee;

        if (employeeType.equalsIgnoreCase("Manager")) {
            System.out.print("Enter bonus amount: ");
            double bonus = scanner.nextDouble();
            employee = new Manager(name, basicSalary, bonus);
        } else if (employeeType.equalsIgnoreCase("Programmer")) {
            System.out.print("Enter number of projects completed: ");
            int projectsCompleted = scanner.nextInt();
            employee = new Programmer(name, basicSalary, projectsCompleted);
        } else {
            System.out.println("Invalid employee type.");
            return;
        }

        double salary = employee.calculateSalary();
        System.out.println("Employee Name: " + employee.name);
        System.out.println("Salary: " + salary);

        scanner.close();
    }
}