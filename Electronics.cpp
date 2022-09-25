#include "Electronics.h"

Electronics::Electronics(string color, double prise):_color(color), _price(prise)
{
}

void Electronics::Show()
{
	cout << "����: "<< _color << endl << "����: " << _price << endl;
}

Notebook::Notebook(string name, string color, double price) :_name(name), Electronics(color, price)
{
}

void Notebook::Show()
{
	cout << _name << endl << "����: " << _color << endl << "����: " << _price << endl;
}

Television::Television(string name, string color, double price):_name(name), Electronics(color, price)
{
}

void Television::Show()
{
	cout << _name << endl << "����: " << _color << endl << "����: " << _price << endl;
}
