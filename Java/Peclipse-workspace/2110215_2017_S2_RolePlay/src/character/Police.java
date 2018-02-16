package character;

import java.util.ArrayList;

import other.Case;
import place.City;

public class Police extends Person{
	public static int ARREST_AWARD = 200;
	
	public Police(String name){
		super(name);
	}
	
	public void action(Person other){
		if(other instanceof Thief){
			System.out.println(this.getNameWithRole() + " catches " + other.getNameWithRole());
			Thief t = (Thief) other;
			ArrayList<Case> removed = new ArrayList<>();
			boolean arrest = false;
			for(Case c : City.getInstance().getStation().getCases()){
				if(c.getThief() == t){
					c.getVictim().increaseMoney(t.getStolenAmount());
					t.decreaseMoney(t.getStolenAmount());
					City.getInstance().removePersonFromGame(t);
					City.getInstance().getStation().addToJail(t);
					removed.add(c);
					arrest = true;
				}
			}
			for(Case c : removed) {
				City.getInstance().getStation().getCases().remove(c);
			}
			if(arrest) this.increaseMoney(ARREST_AWARD);
		}
		else {
			System.out.println(this.getNameWithRole() + " meets " + other.getNameWithRole());
		}
	}
	
	public void receiveReport(Person victim,Thief thief){
		if(!City.getInstance().getStation().getJail().contains(thief)) {			
			City.getInstance().getStation().addCase(victim, thief);
		}
		else {
			thief.decreaseMoney(thief.getStolenAmount());
			victim.increaseMoney(thief.getStolenAmount());
		}
	}
}
