public class Kata
{
    public Kata(){}
    public static string Smash(string[] words)
    {
        string result = "";
        for (int i = 0; i < words.Length; i++)
        {
            result += words[i];
            if (i < words.Length - 1)
            {
                result += " ";
            }
        }
        return result;

        // return string.Join(" ",words );
    }
}

class Program
{
    static void Main(string[] args)
    {
        string print = Kata.Smash(new string[] { "HELLO", "world" });
        Console.WriteLine(print);

    }
}