public class Counter
{
    private int value;

    //metodo get e set
    public int Value
    {
        get { return value; }
        set { this.value = value; }
    }

    public Counter()
    {
        Value = 0;
    }

    public Counter(int v)
    {
        this.Value = v;
    }

    public void Increase()
    {
        ++Value;
    }

    public void Reset()
    {
        Value = 0;
    }
}

public class Program()
{
    public static void Main(string[] args)
    {
        Counter cont = new Counter();

        Console.WriteLine($"{cont.Value}");
        cont.Increase();
        Console.WriteLine($"{cont.Value}");
    }
}