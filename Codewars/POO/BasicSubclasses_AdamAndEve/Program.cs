﻿public class God
{
    public static Human[] Create()
    {
        // TODO: Return an array containing a Man and Woman
        Man man = new Man();
        Woman woman = new Woman();
        Human[] humans = { man, woman };

        return humans;

    }
}

public class Human
{
    public Human() { }
}

public class Man : Human
{
    public Man() { }

}

public class Woman : Human
{
    public Woman() { }
    
}



// According to the creation myths of the Abrahamic religions, Adam and Eve were the first Humans to wander the Earth.

// You have to do God's job. The creation method must return an array of length 2 containing objects (representing Adam and Eve).
//  The first object in the array should be an instance of the class Man. 
//  The second should be an instance of the class Woman. 
//  Both objects have to be subclasses of Human. Your job is to implement the Human, Man and Woman classes.