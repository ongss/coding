package character;

import java.util.ArrayList;
import java.util.StringJoiner;
import util.RandomUtils;

public class Merchant extends Person{
	
	ArrayList<Thief> thieves = new ArrayList<>();
	int price;
	
	public Merchant(String name){
		super(name);
		price = RandomUtils.randomRange(11, 50);
	}
	
	public Merchant(String name,int price){
		super(name);
		setPrice(price);
	}
	
	public void action(Person other){
		if(other instanceof Thief){
			System.out.println(this.getNameWithRole() + " meets " + other.getNameWithRole());
			Thief t = (Thief) other;
			this.thieves.add(t);
		}
		else if(other instanceof Police){
			System.out.println(this.getNameWithRole() + " reports thieves to " + other.getNameWithRole());
			Police p = (Police) other;
			for(Thief t : thieves) {			
				p.receiveReport(this, t);
			}
			thieves.clear();
		}
		else if(other instanceof Merchant){
			System.out.println(this.getNameWithRole() + " meets " + other.getNameWithRole());
			return;
		}
		else{
			System.out.println(this.getNameWithRole() + " sells something to " + other.getNameWithRole());
			sell(other);
		}
	}
	
	public void sell(Person buyer){
		if(buyer.getMoney() < this.price) return;
		buyer.decreaseMoney(price);
		this.increaseMoney(price);
	}
	
	public int getPrice(){
		return this.price;
	}
	
	public void setPrice(int price){
		if(price < 0) price = 0;
		this.price = price;
	}
	
	public ArrayList<Thief> getThieves(){
		return this.thieves;
	}
	
	@Override
	public String toString() {
		StringJoiner thiefNameList = new StringJoiner(", ", "[", "]");

		for (Thief thief : thieves) {
			thiefNameList.add(thief.getName());
		}

		return super.toString() + ", price : " + price + "\n\tThief list : " + thiefNameList;
	}
}
