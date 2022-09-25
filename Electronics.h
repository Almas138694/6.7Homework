#pragma once
#include "IStore.h"

class Electronics:public IStore
{
public:
	Electronics(string color, double price);
	void Show() override;
protected:
	string _color;
	double _price;
};
class Notebook final:public Electronics
{
public:
	Notebook(string name, string color, double price);
	void Show() override;
private:
	string _name;
};
class Television final:public Electronics
{
public:
	Television(string name, string color, double price);
	void Show() override;
private:
	string _name;
};