#include "Appliances.h"

Appliances::Appliances(string color, int mode, double price):_color(color), _mode(mode), _price(price)
{
}

void  Appliances::Show()
{
	cout << " Цвет: " << _color << " количество режимов мойки(стирки): " << _mode << " Цена: " << _price <<  endl;
}

Washer::Washer(string name, long spin, string color, int mode, double price):_name(name), _spin(spin), Appliances(color, mode, price)
{
}

void Washer::Show()
{
	cout << _name << endl << " Скорость отжима: " << _spin << endl << " Цвет: " << _color << endl << " Количество режимов стирки: " << _mode << endl << " Цена: " << _price << endl;
}

Dishwasher::Dishwasher(string name, string color, int mode, double price):_name(name), Appliances(color, mode, price)
{
}

void Dishwasher::Show()
{
	cout << _name << endl << " Цвет: " << _color << endl << " Количество режимов мойки: " << _mode << endl << " Цена: " << _price << endl;
}
