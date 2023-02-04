#include <iostream>
#include"Pizza.h"
using namespace std;

void printPizzaData(const Pizza& pizza);

int main()
{
	Pizza myPizza("Cheese", 6, 10);
	Pizza otherPizza("Pepperoni pizza", 5, 8);
	otherPizza.addtopping("pepperoni");

	Pizza special("The special Pizza", 12, 10);
	
	special.addtopping("peperoni");
	special.addtopping("onion");
	special.addtopping("sausage");
	special.addtopping("pepers");

	printPizzaData(myPizza);
	printPizzaData(otherPizza);
	printPizzaData(special);
	
		return 0;
}

void printPizzaData(const Pizza& pizza)
{
	cout << "Name: " << pizza.getName() << endl;
	cout << "Diameter: " << pizza.getDiameter() << endl;
	cout << "Cost: $" << pizza.getCost() << endl;
	cout << "Toppings:" << endl;
	
	pizza.printToppings();
	cout << endl;
}