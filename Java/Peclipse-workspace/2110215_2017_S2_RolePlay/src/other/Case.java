package other;

import character.Person;
import character.Thief;

public class Case {
	Person victim;
	Thief thief;
	
	public Case(Person victim,Thief thief){
		this.victim = victim;
		this.thief = thief;
	}
	
	public Person getVictim(){
		return this.victim;
	}
	
	public Thief getThief(){
		return this.thief;
	}
	
	@Override
	public String toString() {
		return "Victim : " + victim.getName() + ", Thief : " + thief.getName();
	}
}
