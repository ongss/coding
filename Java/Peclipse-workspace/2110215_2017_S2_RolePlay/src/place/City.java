package place;

import java.util.ArrayList;
import java.util.StringJoiner;

import character.Merchant;
import character.Person;
import character.Police;
import character.Thief;
import other.Case;
import util.RandomUtils;

public class City {
	private static City instance;
	public static int DAILY_PASSIVE_INCOME = 100;
	ArrayList<Person> personsInGame;
	Station station;
	int dayCount = 0;

	public static City getInstance() {
		if (instance == null) {
			instance = new City();
		}

		return instance;
	}

	public static void destroyInstance() {
		City.instance = null;
	}

	private City() {
		personsInGame = new ArrayList<>();
		station = new Station();
	}

	public void passDay() {
		dayCount++;
		for(Person x : personsInGame){
			if(!(x instanceof Merchant) && !(x instanceof Police) && !(x instanceof Thief)) x.increaseMoney(DAILY_PASSIVE_INCOME);
		}
	}

	public void runActionEvent() {
		// We have to loop on the cloned ArrayList, because the list might be mutated
		// during for-each iteration.
		for (Person person : new ArrayList<>(personsInGame)) {
			// Because the person might be removed from the list at any time,
			// We have to check whether the person is still in the list.
			if (personsInGame.contains(person)) {
				Person person2 = RandomUtils.getOtherRandomElemInList(personsInGame, person);

				if (person2 != null) {
					person.action(person2);
					person2.action(person);
					System.out.println("-----------------------------------");
				}
			}
		}

		printDailyReport();
	}

	private void printDailyReport() {
		System.out.println("===================================");

		for (Person p : personsInGame) {
			System.out.println(p);
		}

		System.out.println("===================================");

		System.out.println("Station");
		System.out.println("\tCases : [");

		for (Case c : station.getCases()) {
			System.out.println("\t\t" + c);
		}
		System.out.println("\t]");

		StringJoiner thievesString = new StringJoiner(", ", "[", "]");
		for (Thief thief : station.getJail()) {
			thievesString.add(thief.getName());
		}
		System.out.println("\tJail : " + thievesString);

		System.out.println("===================================");
	}

	public void addPersonToGame(Person person) {
		if(!personsInGame.contains(person)){
			personsInGame.add(person);
		}
	}

	public void removePersonFromGame(Person person) {
		// TODO
		personsInGame.remove(person);
	}

	public ArrayList<Person> getPersonsInGame() {
		return this.personsInGame;
	}

	public int getDayCount() {
		return this.dayCount;
	}

	public Station getStation() {
		return this.station;
	}
}
