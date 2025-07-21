public class Person
{
    private string firstName;
    private string lastName;
    private int age;
    private string gender;

    public string FirstName
    {
        get { return firstName; }
        set { this.firstName = value; }
    }

    public string LastName
    {
        get { return lastName; }
        set { this.lastName = value; }
    }

    public int Age
    {
        get { return age; }
        set { this.age = value; }
    }
    public string Gender
    {
        get { return gender; }
        set { this.gender = value; }
    }


    public Person()
    {
        this.FirstName = "John";
        this.LastName = "Doe";
        this.Age = 0;
        this.Gender = "Male";

    }
    public Person(string fn, string ln, int a, string g)
    {
        this.FirstName = fn;
        this.LastName = ln;
        this.Age = a;
        this.Gender = g;
    }
    // TODO

    public string SayFullName()
    {
        return $"{FirstName} {LastName}";
    }

    public string GreetExtraTerrestrials(string raceName)
    {
        return $"Welcome to Planet Earth {raceName}";
    }
}

    class Program
    {
    static void Main(string[] args)
    {
        Person person = new Person();

        Console.WriteLine($"{person.SayFullName()}");
        Console.WriteLine($"{person.Age}");
        Console.WriteLine($"{person.GreetExtraTerrestrials("Martian")}");
        }
    }