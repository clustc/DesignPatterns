
#include "Product.h"
#include "Factory.h"

#include <iostream>
using namespace std;

int main()
{
	Factory* factory = new ConcreteFactory();
	Product* p = factory->CreateProduct();

	delete factory;
	delete p;

	return 0;
}