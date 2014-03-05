#ifndef _Factory_H_
#define _Factory_H_

class Product;

class Factory
{
public:
	virtual ~Factory(void) = 0;
	
	virtual Product* CreateProduct() = 0;

protected:
	Factory(void);
};

class ConcreteFactory : public Factory
{
public:
	ConcreteFactory();
	virtual ~ConcreteFactory();

	Product* CreateProduct();
};

#endif