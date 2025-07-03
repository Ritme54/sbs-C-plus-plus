#include "Resource.h"
#include <iostream>
#include <memory>




using namespace	std;


Resource::Resource()
{
	cout << "Created Resource" << endl;
}

void Resource::Share(const shared_ptr<Resource>& pointer)
{
	resource = pointer;
}


Resource::~Resource()
{
	cout << "Created Resource" << endl;
}
