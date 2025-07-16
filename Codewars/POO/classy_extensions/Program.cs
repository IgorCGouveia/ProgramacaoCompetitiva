public class Cat : Animal
{
    public string name { get; set; }
    
    public Cat(string name) : base(name)
    {
        this.name = name;
    
  }
    public override string Speak(){
        return $"{name} meows.";
  }
  
  // TODO: Override Animal's Speak method
}