package character;

import util.RandomUtils;

public class Thief extends Person{
	int stolenAmount;
	
	public Thief(String name){
		super(name);
		this.stolenAmount = RandomUtils.randomRange(6, 30);
	}
	
	public Thief(String name,int stolenAmount){
		super(name);
		setStolenAmount(stolenAmount);
	}
	
	public int getStolenAmount(){
		return this.stolenAmount;
	}
	
	public void setStolenAmount(int amount){
		if(amount < 0) amount = 0;
		this.stolenAmount = amount;
	}
	
	public void action(Person other){
		if(!(other instanceof Police) && !(other instanceof Thief)){
			int stole = (this.getStolenAmount() > other.getMoney()) ? other.getMoney() : this.getStolenAmount();
			System.out.println(this.getNameWithRole() + " steals " + stole + " from " + other.getNameWithRole());
			other.decreaseMoney(stole);
			this.increaseMoney(stole);
		}
		else {
			System.out.println(this.getNameWithRole() + " meets " + other.getNameWithRole());
		}
	}
	
	@Override
	public String toString() {
		return super.toString() + ", stolenAmount : " + stolenAmount;
	}
	
	
}
