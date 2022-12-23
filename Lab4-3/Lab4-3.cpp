#include <iostream>
#include "WeaponClass.h"

int main()
{
    WeaponClass sword("Sword", 8, 4);
    std::cout << "object sword - " << sword.name << endl;
    std::cout << "object isHeavy - " << sword.isHeavy() << endl;
}