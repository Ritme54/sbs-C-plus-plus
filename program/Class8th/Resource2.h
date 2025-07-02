#pragma once

#include <iostream>
using namespace std;

class Resource;

class Resource2
{
public:
	shared_ptr<Resource2> ptr_to_resource2;
	Resource2();


	~Resource2();


};

