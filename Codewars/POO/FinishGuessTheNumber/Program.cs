using System;

public class Guesser
{
    private int number;
    private int lives;


    public Guesser(int number, int lives)
    {
        this.number = number;
        this.lives = lives;
    }

    public bool Guess(int n)
    {
        if (lives == 0)
        {
            throw new InvalidOperationException("No lives left. Cannot guess anymore.");
        }
        if (n != number)
        {
            this.lives -= 1;
            return false;
        }
        else
        {
            return true;
        }
    }

    
}


    class Program
    {
    static void Main(string[] args)
    {
        Guesser guesser = new Guesser(10, 2);
        guesser.Guess(1);
        guesser.Guess(1);
        guesser.Guess(1);
        
        }
    }
// Imagine you are creating a game where the user has to guess the correct number. But there is a limit of how many guesses the user can do.

// If the user tries to guess more than the limit, the function should throw an error.
// If the user guess is right it should return true.
// If the user guess is wrong it should return false and lose a life.
// Can you finish the game so all the rules are met?