using System;

public class Person
{
    private string? name;
    private int age;

    public Person()
    {
        this.name = "";
        this.age = 0;
    }
    public Person(string n, int a)
    {
        SetName(n);
        SetAge(a);
    }

    public string? GetName()
    {
        return name;
    }
    public void SetName(string n)
    {
        this.name = n;
    }

    public int GetAge()
    {
        return age;
    }
    public void SetAge(int a)
    {
        this.age = a;
    }

    public string Info()
    {
        return $"{name}s age is {age}";
    }
}

    class Program
    {
    static void Main(string[] args)
    {
        Person pessoa = new Person("john", 34);

        Console.WriteLine(pessoa.Info());
        }
    }