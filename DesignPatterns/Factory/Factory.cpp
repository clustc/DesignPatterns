#include "Factory.h"
#include "Product.h"

#include <iostream>
using namespace std;

Factory::Factory(void)
{
}


Factory::~Factory(void)
{
}

ConcreteFactory::ConcreteFactory()
{
	cout<<"ConcreteFactory::ConcreteFactory()"<<endl;
}

ConcreteFactory::~ConcreteFactory()
{
	cout<<"ConcreteFactory::~ConcreteFactory()"<<endl;
}

Product* ConcreteFactory::CreateProduct()
{
	return  new ConcreteProduct();
}
