public class Cube
{
    private int Side;

    public Cube()
    {
        this.Side = 0;
    }
    //This cube needs your help. 
    //Define a constructor which takes one integer and assignes its value to 'Side'
    public Cube(int s)
    {
        SetSide(s);
     }
    
    public int GetSide()
    {
        return this.Side;
    }

    public void SetSide(int s)
    {
          if (s < 0)
        {
            this.Side = s - 2 * s;
        }
        else
        {
            this.Side = s;
     }
    }
}

class Program
{
    public static void Main(string[] args)
    {
        Cube cubo = new Cube(-9);
        Console.WriteLine(cubo.GetSide());

     }
}