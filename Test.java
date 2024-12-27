// Animal class
class Animal 
{
    private int height;
    private float weight;

    // Default walk method
    void walk() 
    {
        System.out.println("I walk on the street");
    }

    // Getter and setter for height
    public int getHeight() 
    {
        return height;
    }

    public void setHeight(int height) 
    {
        this.height = height;
    }

    // Getter and setter for weight
    public float getWeight() 
    {
        return weight;
    }

    public void setWeight(float weight) 
    {
        this.weight = weight;
    }
}

// Bird class inheriting from Animal
class Bird extends Animal 
{
    // Constructor for Bird class
    public Bird(int height, float weight) 
    {
        setHeight(height);
        setWeight(weight);
    }
}

// FlyingBird interface
interface FlyingBird 
{
    // Method signature (interfaces do not allow default method bodies in Java before Java 8)
    void fly();
}

// Parrot class inheriting Bird and implementing FlyingBird interface
class Parrot extends Bird implements FlyingBird 
{
    // Constructor for Parrot class
    public Parrot(int height, float weight) 
    {
        super(height, weight);
    }

    // Implementation of the fly method from FlyingBird interface
    @Override
    public void fly() 
    {
        System.out.println("I fly in the sky");
    }

    // Static display method
    public static void display() 
    {
        System.out.println("I am Mithu!");
    }
}

// Test class
public class Test 
{
    public static void main(String[] args) 
    {
        // Create an object of Parrot
        Parrot parrot = new Parrot(10, 2.5f);

        // Call the display method
        Parrot.display();

        // Call the walk and fly methods
        parrot.walk();
        parrot.fly();

        // Set and get height and weight using setter and getter
        parrot.setHeight(12);
        parrot.setWeight(3.0f);
        System.out.println("Parrot's Height: " + parrot.getHeight() + " inches");
        System.out.println("Parrot's Weight: " + parrot.getWeight() + " kg");
    }
}
