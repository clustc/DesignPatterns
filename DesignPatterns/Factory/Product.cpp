#include "Product.h"
#include <iostream>

using namespace std;

Product::Product(void)
{
}


Product::~Product(void)
{
}

ConcreteProduct::ConcreteProduct()
{
	cout<<"ConcreteProduct::ConcreteProduct()"<<endl;
}

ConcreteProduct::~ConcreteProduct()
{
	cout<<"ConcreteProduct::~ConcreteProduct()"<<endl;
}
