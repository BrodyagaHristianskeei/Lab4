#include <iostream>
#include <Windows.h>
using namespace std;

class Weapon
{
public:
	string name;
	int damage;
	int weight;

	Weapon(string name, int damage, int weight) :
		name(name), damage(damage), weight(weight) {}

	Weapon()
	{
		name = "Default";
		damage = 1;
		weight = 1;

	}
	
	~Weapon()
	{
		cout << endl;
		cout << this->name << " deleted" << " ; " << this->damage << " deleted" << " ; " << this->weight << " deleted" << endl;
	}
	
	bool isHeavy()
	{
		if (this->weight <= 7)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int sumWeights(Weapon* someWeapon)
	{
		return this->weight + someWeapon->weight;
	}
	int sumWeights(int someWeight)
	{
		return this->weight + someWeight;
	}
};
int main()
{
	Weapon secSword("SecSword", 8, 4);
	cout << "object secSword - " << " " << secSword.name << " " << secSword.damage << " " << secSword.weight << endl;
	Weapon* newSword = new Weapon("NewSword", 15, 10);
	cout << "object newsword - " << " " << newSword->name << " " << newSword->damage << " " << newSword->weight << endl;
	delete newSword;

	cout << endl;

	if (secSword.isHeavy())
	{
		cout << "weight is ok " << endl;
	}
	else
	{
		cout << " weight is not ok " << endl;
	}

	cout << endl;

	Weapon bow("bow", 15, 5);

	cout << "sum weitghs - " << bow.sumWeights(&secSword) << endl;
	cout << "sum weitghs - " << bow.sumWeights(2) << endl;
}