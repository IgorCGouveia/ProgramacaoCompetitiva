using System;

public class Ghost
{
    public string color { get; }
    public Ghost()
    {
        string[] array = { "white", "yellow", "purple", "red" };
        Random random = new Random();
        int aleatorio = random.Next(4);
        this.color = array[aleatorio];

    }

}

public class Program
{

    public static void Main(string[] args)
    {
       Ghost ghost = new Ghost();

        Console.WriteLine(ghost.color);
    }
}