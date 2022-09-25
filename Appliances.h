#pragma once
#include <iostream>
#include "IStore.h"
using namespace std;
class Appliances:public IStore
{
public:
	Appliances(string color, int mode, double price);
	void Show() override;
protected:
	string _color;
	int _mode;
	double _price;
};
class Washer final :public Appliances
{
public:
	Washer(string name, long spin,  string color, int mode, double price);
	void Show() override;
private:
	string _name;
	long _spin;
};
class Dishwasher final :public Appliances
{public:
	Dishwasher(string name, string color, int mode, double price);
	void Show() override;
private:
	string _name;
};
