#pragma once

#include <iostream>
using namespace std;
class Resource2;
class Resource
{
public:
	std::shared_ptr<Resource> ptr_to_resource;
	Resource();


	~Resource();


};

