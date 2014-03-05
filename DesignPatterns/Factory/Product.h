#ifndef _Product_H_
#define _Product_H_

class Product
{
public:
	Product(void);
	virtual	~Product(void) = 0;
};

class ConcreteProduct : public Product
{
public:
	ConcreteProduct();
	virtual ~ConcreteProduct();
};

#endif