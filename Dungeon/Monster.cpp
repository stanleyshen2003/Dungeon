#include "Monster.h"
#include "Player.h"
#include <string>
Monster::Monster() {

}

Monster::Monster(string name, int health, int attack, int defense):GameCharacter(name,"monster",health,attack,defense){};

/* Virtual function that you need to complete   */
/* In Monster, this function should deal with   */
/* the combat system.                           */
int Monster::triggerEvent(Object* obj) {
	cout << "you bumped into " << getName() << "." << endl;
	cout << "do you want to have a fight? (y/n)" << endl;
	string fight;
	cin >> fight;
	while (fight != "y" && fight != "n") {
		cout << "invalid input!" << endl;
		cout << "do you want to have a fight? (y/n)" << endl;
		cin >> fight;
	}
	if (fight == "y")
		return 1;
	else {
		return 0;
	}
		
	
}