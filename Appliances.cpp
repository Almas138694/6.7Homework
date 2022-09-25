#include "Appliances.h"

Appliances::Appliances(string color, int mode, double price):_color(color), _mode(mode), _price(price)
{
}

void  Appliances::Show()
{
	cout << " ����: " << _color << " ���������� ������� �����(������): " << _mode << " ����: " << _price <<  endl;
}

Washer::Washer(string name, long spin, string color, int mode, double price):_name(name), _spin(spin), Appliances(color, mode, price)
{
}

void Washer::Show()
{
	cout << _name << endl << " �������� ������: " << _spin << endl << " ����: " << _color << endl << " ���������� ������� ������: " << _mode << endl << " ����: " << _price << endl;
}

Dishwasher::Dishwasher(string name, string color, int mode, double price):_name(name), Appliances(color, mode, price)
{
}

void Dishwasher::Show()
{
	cout << _name << endl << " ����: " << _color << endl << " ���������� ������� �����: " << _mode << endl << " ����: " << _price << endl;
}
