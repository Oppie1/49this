#include<iostream>
#include "Hannah.h"
using namespace std;

Hannah::Hannah(int num)
:h(num)
{

}

void Hannah::printCrap() {
	cout << "h=" << h << endl;
	cout << "this->" << this->h << endl;
	cout << "(*this).h=" << (*this).h << endl;
}