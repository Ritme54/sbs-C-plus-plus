#include <iostream>
#include "Paint.h"
#include "Pencil.h"
#include "Brush.h"


using namespace std;



int main()
{
	Paint* paint = new Pencil;
	
	paint->Draw();

	delete paint;

	paint = new Brush;

	paint->Draw();

	delete paint;



}