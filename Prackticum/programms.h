#pragma once
#include "Header.h"
using namespace std;

//1 этап
void FirstCode()
{	//консоль
	std::cout << "Hello World!!!";
}

void Operators()
{	//операторы
	int a = 14;
	int b = 5;

	int c = a+b;
	int d = a-b;
	int e = a*b;
	int z = a / b;
	int f = a%b;


	std::cout << "значение a " << a << "\n";
	std::cout << "значение b " << b << "\n";
	std::cout<< "сумма " << c << "\n";
	std::cout << "разность " << d << "\n";
	std::cout << "произведение " << e << "\n";
	std::cout << "частное " << z << "\n";
	std::cout << "остаток " << f << "\n";
}

void Logic()
{	//логика if else
	int Age;
	std::cout << "Ведите возраст: " << endl;
	std::cin >> Age;

	if (Age < 18)
	{
		std::cout << "Вас не пустят в клуб" << endl;
	}
	else
	{
		std::cout << "Вы проходите" << endl;
	}
}

void WhatNumber()
{	//угадай число
	//for, srand(), rand
	int TempRand = 0;
	srand(TempRand);
	int input;
	std::cout << "угадай число в диапозоне от 0 до 10\n";
	for (int i = 0; i < 10; i++)
	{
		int RandNumber = rand();
		std::cin >> input;
		if (input == RandNumber % 10)
		{
			srand(TempRand);
			TempRand = input;
			std::cout << "ты угадал\n";
		}
		else
		{
			srand(TempRand);
			std::cout << "попробуй еще\n";
		}

	}
}

void WhatWord()
{
	/*Программа должна принимать на вход строку текста, и распознавать 
		введенный вариант ответа.Используйте английский язык для текста.
		Также необходимо провести валидацию*/
	//string
	string input;
	string Words[3]{"rock","scissors","paper"};
	std::cout << "найди слово\n";
	for (int i = 0; i < 10; i++)
	{
		std::cin >> input;
		for (int j = 0; j < sizeof(Words)/sizeof(Words[0]); j++)
		{
			if (input == Words[j])
			{
				std::cout << "ты нашел это слово\n";
				break;
			}
			else if (j == sizeof(Words) / sizeof(Words[0]) - 1 && input!= Words[j])
			{
				std::cout << "такого слова нет попробуй снова\n";
			}
		}
	}
}

void StoreGoods()
{
	/*Требуется произвести следующие расчеты :
	1.имеются ли в наличии товары которые хочет купить пользователь
		2.хватит ли денег для приобретения товаров из списка
		3.сколько денег останется после совершения покупок
		Дополнительно, программа должна дать ответы на вопросы :
	1.каким должен быть список покупок, чтобы потратить максимальное количество денег
		каким должен быть список покупок, чтобы купить максимальное число товаров*/
	//конец 1 этапа закрепление материала

	string NameGoods[]{ "огурец", "помидор", "лук", "картофель", "морковь" };
	const int Size = sizeof(NameGoods) / sizeof(NameGoods[0]);
	int CurentGoods[Size]{ 15, 20, 10, 4, 20 };
	int PriceList[Size]{ 30,50,20,150,60 };
	int Money;
	std::cout << "количество денег: ";
	std::cin >> Money;
	std::cout << "ассортимент товаров:\n";
	for (int i = 0; i < Size; i++)
	{
		std::cout << NameGoods[i] << " - ";
		std::cout << CurentGoods[i] << " штук; ";
		std::cout << PriceList[i] << " Цена за штуку; ";
		std::cout << i << " ID товара\n";
	}
	std::cout << "\n";
	std::cout << "список покупок на все ваши деньги: \n";
	for (int i = 0; i < Size; i++)
	{
		if (PriceList[i] <= Money)
		{
			std::cout << NameGoods[i] << " хватает на " << Money / PriceList[i] << " Штуки" << endl;
		}
		else
		{
			std::cout << "на " << NameGoods[i] << " не хватит денег" << endl;
		}
	}

	std::cout << "\n укажи какие товары хочешь купить и их количество\n";
	int InputCount;
	int InputIDName;
	int sizeGoods;
	std::cout << "укажите сколько товаров собираетесь купить: ";
	std::cin >> sizeGoods;
	int FullCount;
	for (int i = 0; i < sizeGoods; i++)
	{
		std::cout << "укажите ID товара: ";
		std::cin >> InputIDName;
		for (int j = 0; j < Size; j++)
		{
			if (j == InputIDName)
			{
				std::cout << "количество: ";
				std::cin >> InputCount;
				std::cout << "товар: ";
				std::cout << NameGoods[j] << endl;
				if (CurentGoods[j] >= InputCount && CurentGoods[j] != 0)
				{
					std::cout << "товар имеется в наличии\n ";
					FullCount = InputCount;
				}
				else if (CurentGoods[j] == 0)
				{
					std::cout << "на складе нету этого товара\n ";
				}
				else if (CurentGoods[j] < InputCount)
				{
					std::cout << "на складе есть только: " << CurentGoods[j] << " ед.товара\n";
					FullCount = CurentGoods[j];
				}

				std::cout << "цена за товар: " << FullCount * PriceList[j] << endl;
				if (FullCount * PriceList[j] > Money)
				{
					std::cout << "у вам не хватает денег\n ";
					break;
				}
				else
				{
					Money -= FullCount * PriceList[j];
					std::cout << "после покупки у нас на счету останется: " << Money << endl;
				}
			}
		}
	}
}


//2 этап
void TextAdvacuresLocation()
{
	///Переход по локациям любым
	//struct
	struct Location
	{
		std::string NameLvl;
		bool player = false;
	}Locations[5];

	Locations[0].NameLvl = "swamp";
	Locations[1].NameLvl = "city";
	Locations[2].NameLvl = "forest";
	Locations[3].NameLvl = "cave";
	Locations[4].NameLvl = "river";
	string Input;

	while (true)
	{
		system("cls");
		for (int i = 0; i < sizeof(Locations)/ sizeof(Locations[0]); i++)
		{
			std::cout << "локация: " << Locations[i].NameLvl << endl;
			if (Locations[i].player == true)
			{
				Locations[i].player = false;
				std::cout << " ^ ты на этой локации\n";
			}
		}

		std::cout << "\nна какую локацию переместится?: ";
		std::cin >> Input;

		for (int i = 0; i < sizeof(Locations) / sizeof(Locations[0]); i++)
		{
			if (Input == Locations[i].NameLvl)
			{
				std::cout << "Вы переместились на локацию локацию: " << Locations[i].NameLvl<< endl;
				Locations[i].player = true;
				break;
			}
		}
		system("pause");
		system("cls");
	};
}

void TextAdvacuresDoor()
{///Переход по локациям через дверь
	//push_back
	struct Location
	{
		std::vector<int> doors;
		std::string NameLvl;
		bool player = false;
	}Locations[5];

	Locations[0].NameLvl = "swamp";
	Locations[0].doors.push_back(1);
	Locations[0].doors.push_back(2);
	Locations[0].player = true;

	Locations[1].NameLvl = "city";
	Locations[1].doors.push_back(0);
	Locations[1].doors.push_back(3);

	Locations[2].NameLvl = "forest";
	Locations[2].doors.push_back(0);
	Locations[2].doors.push_back(4);

	Locations[3].NameLvl = "cave";
	Locations[3].doors.push_back(1);
	Locations[3].doors.push_back(4);

	Locations[4].NameLvl = "river";
	Locations[4].doors.push_back(2);
	Locations[4].doors.push_back(3);

	string Input;

	while (true)
	{
		system("cls");
		for (int i = 0; i < sizeof(Locations) / sizeof(Locations[0]); i++)
		{
			if (Locations[i].player == true)
			{
				std::cout << "локация: " << Locations[i].NameLvl << endl;
				Locations[i].player = false;
				std::cout << " ^ ты на этой локации\n";
				std::cout << "\nты можешь переместиться только на эти локации\n";
				for (int j = 0; j < Locations[i].doors.size(); j++)
				{
					std::cout << "локация: " << Locations[Locations[i].doors[j]].NameLvl << endl;
				}
			}
		}

		std::cout << "\nна какую локацию переместится?: ";
		std::cin >> Input;

		for (int i = 0; i < sizeof(Locations) / sizeof(Locations[0]); i++)
		{
			if (Input == Locations[i].NameLvl)
			{
				std::cout << "Вы переместились на локацию локацию: " << Locations[i].NameLvl << endl;
				Locations[i].player = true;
				break;
			}
		}
		system("pause");
		system("cls");
	};
}

void TextAdvacuresItems()
{///Добавление функционала
	/*  List - показать все предметы, находящиеся в локации
		Trunk - показать все предметы в “рюкзаке” игрока
		Pick(название предмета) - поднять предмет и положить его в рюкзак игрока
		Drop(название предмета) - сбросить предмет из рюкзака в локацию
		Use(название предмета 1, название предмета 2) - использовать предмет(например - ключ на двери)*/
	//erase
	struct Location
	{
		std::vector<int> doors;
		std::string NameLvl;
		bool player = false;
	}Locations[5];

	Locations[0].NameLvl = "swamp";
	Locations[0].doors.push_back(1);
	Locations[0].doors.push_back(2);
	Locations[0].player = true;

	Locations[1].NameLvl = "city";
	Locations[1].doors.push_back(0);
	Locations[1].doors.push_back(3);

	Locations[2].NameLvl = "forest";
	Locations[2].doors.push_back(0);
	Locations[2].doors.push_back(4);

	Locations[3].NameLvl = "cave";
	Locations[3].doors.push_back(1);
	Locations[3].doors.push_back(4);

	Locations[4].NameLvl = "river";
	Locations[4].doors.push_back(2);
	Locations[4].doors.push_back(3);

	string Input;

	while (true)
	{
		system("cls");
		for (int i = 0; i < sizeof(Locations) / sizeof(Locations[0]); i++)
		{
			if (Locations[i].player == true)
			{
				std::cout << "локация: " << Locations[i].NameLvl << endl;
				Locations[i].player = false;
				std::cout << " ^ ты на этой локации\n";
				std::cout << "\nты можешь переместиться только на эти локации\n";
				for (int j = 0; j < Locations[i].doors.size(); j++)
				{
					std::cout << "локация: " << Locations[Locations[i].doors[j]].NameLvl << endl;
				}
			}
		}

		std::cout << "\nна какую локацию переместится?: ";
		std::cin >> Input;

		for (int i = 0; i < sizeof(Locations) / sizeof(Locations[0]); i++)
		{
			if (Input == Locations[i].NameLvl)
			{
				std::cout << "Вы переместились на локацию локацию: " << Locations[i].NameLvl << endl;
				Locations[i].player = true;
				break;
			}
		}
		system("pause");
		system("cls");
	};
}