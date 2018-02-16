package place;

import java.util.ArrayList;
import java.util.LinkedHashSet;

import character.Person;
import character.Thief;
import other.Case;

public class Station {
	ArrayList<Case> cases;
	LinkedHashSet<Thief> jail;
	
	public Station(){
		cases = new ArrayList<>();
		jail = new LinkedHashSet<>();
	}
	
	public void addCase(Person victim,Thief thief){
		cases.add(new Case(victim,thief));
	}
	
	public ArrayList<Case> getCases(){
		return this.cases;
	}
	
	public void addToJail(Thief thief){
		jail.add(thief);
	}
	
	public LinkedHashSet<Thief> getJail(){
		return this.jail;
	}
}
