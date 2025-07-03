#include "Character.h"
#include <iostream>
#include <memory>

using namespace std;



Character::Character()
{
	cout << "Created Character" << endl;
}

void Character::Partner(const weak_ptr<Character>& character)
{
	partner = character;
}



Character::~Character()
{
	cout << "Delete Character" << endl;
}
