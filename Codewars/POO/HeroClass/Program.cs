// It's dangerous to go alone... create a Hero class to accompany you on your quest!

public class Hero
{
    public string Name;
    public string Position;
    public float Health;
    public float Damage;
    public int Experience;

    public Hero(string nome = "Hero", string pos = "00", float saude = 100, float dano = 5, int xp = 0)
    {
        Name = nome;
        Position = pos;
        Health = saude;
        Damage = dano;
        Experience = xp;
    }

}