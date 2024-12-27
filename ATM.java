import java.util.Scanner;

public class ATM 
{
    private double balance;

    public ATM(double initialBalance) 
    {
        this.balance = initialBalance;
    }

    public void withdraw(double amount) 
    {
        if (amount <= 0) 
        {
            System.out.println("Invalid withdrawal amount.");
            return;
        }

        if (amount > balance) 
        {
            System.out.println("Insufficient funds.");
            return;
        }

        // Ensure withdrawal amount is divisible by 500
        double adjustedAmount = amount - (amount % 500); 

        // Ensure minimum balance after withdrawal
        if (balance - adjustedAmount < 500) 
        {
            System.out.println("Withdrawal would result in insufficient balance.");
            return;
        }

        balance -= adjustedAmount;
        System.out.println("Withdrawal successful. Amount withdrawn: " + adjustedAmount);
    }

    public void checkBalance() 
    {
        System.out.println("Current balance: " + balance);
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        ATM atm = new ATM(10000); // Initial balance

        int choice;

        do 
        {
            System.out.println("\nATM Menu:");
            System.out.println("1. Withdraw");
            System.out.println("2. Check Balance");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
/
            switch (choice) 
            {
                case 1:
                    System.out.print("Enter withdrawal amount: ");
                    double amount = scanner.nextDouble();
                    atm.withdraw(amount);
                    break;
                case 2:
                    atm.checkBalance();
                    break;
                case 3:
                    System.out.println("Exiting ATM.");
                    break;
                default:
                    System.out.println("Invalid choice.");
            }
        } 
        while (choice != 3);

        scanner.close();
    }
}