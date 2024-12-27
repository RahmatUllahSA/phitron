// Abstract class representing an Employee
abstract class Employee {
    protected String name;
    protected double baseSalary;

    public Employee(String name, double baseSalary) {
        this.name = name;
        this.baseSalary = baseSalary;
    }

    // Abstract method to calculate salary
    public abstract double calculateSalary();

    // Method to display job responsibilities
    public abstract void displayResponsibilities();

    // Display employee details
    public void displayDetails() {
        System.out.println("Name: " + name);
        System.out.println("Base Salary: " + baseSalary);
    }
}

// Manager class extending Employee
class Manager extends Employee {
    private double bonus;

    public Manager(String name, double baseSalary, double bonus) {
        super(name, baseSalary);
        this.bonus = bonus;
    }

    @Override
    public double calculateSalary() {
        return baseSalary + bonus;
    }

    @Override
    public void displayResponsibilities() {
        System.out.println("Responsibilities: Oversee team operations, manage projects, and coordinate with stakeholders.");
    }
}

// Programmer class extending Employee
class Programmer extends Employee {
    private double projectAllowance;

    public Programmer(String name, double baseSalary, double projectAllowance) {
        super(name, baseSalary);
        this.projectAllowance = projectAllowance;
    }

    @Override
    public double calculateSalary() {
        return baseSalary + projectAllowance;
    }

    @Override
    public void displayResponsibilities() {
        System.out.println("Responsibilities: Write, test, and maintain code, debug software, and implement features.");
    }
}

// Main class
public class ABCCompany {
    public static void main(String[] args) {
        // Create a Manager object
        Manager manager = new Manager("Alice", 80000, 20000);
        
        // Create a Programmer object
        Programmer programmer = new Programmer("Bob", 60000, 10000);

        // Display Manager details and salary
        System.out.println("Manager Details:");
        manager.displayDetails();
        manager.displayResponsibilities();
        System.out.println("Total Salary: " + manager.calculateSalary());

        System.out.println();

        // Display Programmer details and salary
        System.out.println("Programmer Details:");
        programmer.displayDetails();
        programmer.displayResponsibilities();
        System.out.println("Total Salary: " + programmer.calculateSalary());
    }
}
