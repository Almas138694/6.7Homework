#include <iostream>
#include "Electronics.h"
#include "IStore.h"
#include "Appliances.h"


int main()
{
	setlocale(0, "rus");

	IStore* store[8];

	store[0] = new Washer("LG", 1600, "Серый", 7, 35000);
	store[1] = new Washer("Samsung", 1800, "Белый", 10, 50999);
	store[2] = new Dishwasher("Leran", "Белый", 3, 23999);
	store[3] = new Dishwasher("Bosh", "Серый", 6, 45999);
	store[4] = new Notebook("Lenovo", "Черный", 45990);
	store[5] = new Notebook("Honor", "Белый", 50000);
	store[6] = new Television("Samsung", "Черный", 36000);
	store[7] = new Television("LG", "Серый", 32000);

	while (true)
	{
		cout << "Выберити категорию: Стиральные машины нажмите 1, посудомойки 2, ноутбуки 3, телевизоры 4. Для выхода 0" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Выбирите бренд: LG нажмите 1, Samsung нажмите 2" << endl;
			int a;
			cin >> a;
				
				if (a == 1)
				{
					store[0]->Show();
					break;
				}
				if (a == 2)
				{
					store[1]->Show();
					break;
				}
				else
				{
					cout << "Неверный выбор" << endl;
				
				}
			
			break;
		case 2:
			cout << "Выбирите бренд: Leran нажмите 1, Bosh нажмите 2" << endl;
			int b;
			cin >> b;
			if (b == 1)
			{
				store[2]->Show();
				break;
			}
			if (b == 2)
			{
				store[3]->Show();
				break;
			}
			else
			{
				cout << "Неверный выбор" << endl;
			}
			break;
		case 3:
			cout << "Выбирите бренд: Lenovo нажмите 1, Honor нажмите 2" << endl;
			int c;
			cin >> c;
			if (c == 1)
			{
				store[4]->Show();
				break;
			}
			if (c == 2)
			{
				store[5]->Show();
				break;
			}
			else
			{
				cout << "Неверный выбор" << endl;
			}
			break;
		case 4:
			cout << "Выбирите бренд: LG нажмите 1, Samsung нажмите 2" << endl;
			int d;
			cin >> d;
			if (d == 1)
			{
				store[6]->Show();
				break;
			}
			if (d == 2)
			{
				store[7]->Show();
				break;
			}
			else
			{
				cout << "Неверный выбор" << endl;
			}
			break;
		case 0:
			return 0;
		default:
			cout << "Выберети категорию от 1 до 4 или нажмите 0 для выхода" << endl;
			break;
		}
		
	}

	delete store[0];
	delete store[1];
	delete store[2];
	delete store[3];
	delete store[4];
	delete store[5];
	delete store[6];
	delete store[7];
}