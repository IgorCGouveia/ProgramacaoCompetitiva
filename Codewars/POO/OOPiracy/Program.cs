public class Ship
{
    public int Draft;
    public int Crew;

    public Ship(int draft, int crew)
    {
        Draft = draft;
        Crew = crew;
    }

    public bool IsWorthIt()
    {
        int tempD = Draft;
        double eachMate = 1.5 * Crew;
        double worth = tempD - eachMate;

        if (worth > 20) return true;



        return false;

    }
    
}
