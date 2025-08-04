#pragma once
#include "Header.h"
using namespace std;

//1 ����
void FirstCode()
{	//�������
	std::cout << "Hello World!!!";
}

void Operators()
{	//���������
	int a = 14;
	int b = 5;

	int c = a+b;
	int d = a-b;
	int e = a*b;
	int z = a / b;
	int f = a%b;


	std::cout << "�������� a " << a << "\n";
	std::cout << "�������� b " << b << "\n";
	std::cout<< "����� " << c << "\n";
	std::cout << "�������� " << d << "\n";
	std::cout << "������������ " << e << "\n";
	std::cout << "������� " << z << "\n";
	std::cout << "������� " << f << "\n";
}

void Logic()
{	//������ if else
	int Age;
	std::cout << "������ �������: " << endl;
	std::cin >> Age;

	if (Age < 18)
	{
		std::cout << "��� �� ������ � ����" << endl;
	}
	else
	{
		std::cout << "�� ���������" << endl;
	}
}

void WhatNumber()
{	//������ �����
	//for, srand(), rand
	int TempRand = 0;
	srand(TempRand);
	int input;
	std::cout << "������ ����� � ��������� �� 0 �� 10\n";
	for (int i = 0; i < 10; i++)
	{
		int RandNumber = rand();
		std::cin >> input;
		if (input == RandNumber % 10)
		{
			srand(TempRand);
			TempRand = input;
			std::cout << "�� ������\n";
		}
		else
		{
			srand(TempRand);
			std::cout << "�������� ���\n";
		}

	}
}

void WhatWord()
{
	/*��������� ������ ��������� �� ���� ������ ������, � ������������ 
		��������� ������� ������.����������� ���������� ���� ��� ������.
		����� ���������� �������� ���������*/
	//string
	string input;
	string Words[3]{"rock","scissors","paper"};
	std::cout << "����� �����\n";
	for (int i = 0; i < 10; i++)
	{
		std::cin >> input;
		for (int j = 0; j < sizeof(Words)/sizeof(Words[0]); j++)
		{
			if (input == Words[j])
			{
				std::cout << "�� ����� ��� �����\n";
				break;
			}
			else if (j == sizeof(Words) / sizeof(Words[0]) - 1 && input!= Words[j])
			{
				std::cout << "������ ����� ��� �������� �����\n";
			}
		}
	}
}

void StoreGoods()
{
	/*��������� ���������� ��������� ������� :
	1.������� �� � ������� ������ ������� ����� ������ ������������
		2.������ �� ����� ��� ������������ ������� �� ������
		3.������� ����� ��������� ����� ���������� �������
		�������������, ��������� ������ ���� ������ �� ������� :
	1.����� ������ ���� ������ �������, ����� ��������� ������������ ���������� �����
		����� ������ ���� ������ �������, ����� ������ ������������ ����� �������*/
	//����� 1 ����� ����������� ���������

	string NameGoods[]{ "������", "�������", "���", "���������", "�������" };
	const int Size = sizeof(NameGoods) / sizeof(NameGoods[0]);
	int CurentGoods[Size]{ 15, 20, 10, 4, 20 };
	int PriceList[Size]{ 30,50,20,150,60 };
	int Money;
	std::cout << "���������� �����: ";
	std::cin >> Money;
	std::cout << "����������� �������:\n";
	for (int i = 0; i < Size; i++)
	{
		std::cout << NameGoods[i] << " - ";
		std::cout << CurentGoods[i] << " ����; ";
		std::cout << PriceList[i] << " ���� �� �����; ";
		std::cout << i << " ID ������\n";
	}
	std::cout << "\n";
	std::cout << "������ ������� �� ��� ���� ������: \n";
	for (int i = 0; i < Size; i++)
	{
		if (PriceList[i] <= Money)
		{
			std::cout << NameGoods[i] << " ������� �� " << Money / PriceList[i] << " �����" << endl;
		}
		else
		{
			std::cout << "�� " << NameGoods[i] << " �� ������ �����" << endl;
		}
	}

	std::cout << "\n ����� ����� ������ ������ ������ � �� ����������\n";
	int InputCount;
	int InputIDName;
	int sizeGoods;
	std::cout << "������� ������� ������� ����������� ������: ";
	std::cin >> sizeGoods;
	int FullCount;
	for (int i = 0; i < sizeGoods; i++)
	{
		std::cout << "������� ID ������: ";
		std::cin >> InputIDName;
		for (int j = 0; j < Size; j++)
		{
			if (j == InputIDName)
			{
				std::cout << "����������: ";
				std::cin >> InputCount;
				std::cout << "�����: ";
				std::cout << NameGoods[j] << endl;
				if (CurentGoods[j] >= InputCount && CurentGoods[j] != 0)
				{
					std::cout << "����� ������� � �������\n ";
					FullCount = InputCount;
				}
				else if (CurentGoods[j] == 0)
				{
					std::cout << "�� ������ ���� ����� ������\n ";
				}
				else if (CurentGoods[j] < InputCount)
				{
					std::cout << "�� ������ ���� ������: " << CurentGoods[j] << " ��.������\n";
					FullCount = CurentGoods[j];
				}

				std::cout << "���� �� �����: " << FullCount * PriceList[j] << endl;
				if (FullCount * PriceList[j] > Money)
				{
					std::cout << "� ��� �� ������� �����\n ";
					break;
				}
				else
				{
					Money -= FullCount * PriceList[j];
					std::cout << "����� ������� � ��� �� ����� ���������: " << Money << endl;
				}
			}
		}
	}
}


//2 ����
void TextAdvacuresLocation()
{
	///������� �� �������� �����
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
			std::cout << "�������: " << Locations[i].NameLvl << endl;
			if (Locations[i].player == true)
			{
				Locations[i].player = false;
				std::cout << " ^ �� �� ���� �������\n";
			}
		}

		std::cout << "\n�� ����� ������� ������������?: ";
		std::cin >> Input;

		for (int i = 0; i < sizeof(Locations) / sizeof(Locations[0]); i++)
		{
			if (Input == Locations[i].NameLvl)
			{
				std::cout << "�� ������������� �� ������� �������: " << Locations[i].NameLvl<< endl;
				Locations[i].player = true;
				break;
			}
		}
		system("pause");
		system("cls");
	};
}

void TextAdvacuresDoor()
{///������� �� �������� ����� �����
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
				std::cout << "�������: " << Locations[i].NameLvl << endl;
				Locations[i].player = false;
				std::cout << " ^ �� �� ���� �������\n";
				std::cout << "\n�� ������ ������������� ������ �� ��� �������\n";
				for (int j = 0; j < Locations[i].doors.size(); j++)
				{
					std::cout << "�������: " << Locations[Locations[i].doors[j]].NameLvl << endl;
				}
			}
		}

		std::cout << "\n�� ����� ������� ������������?: ";
		std::cin >> Input;

		for (int i = 0; i < sizeof(Locations) / sizeof(Locations[0]); i++)
		{
			if (Input == Locations[i].NameLvl)
			{
				std::cout << "�� ������������� �� ������� �������: " << Locations[i].NameLvl << endl;
				Locations[i].player = true;
				break;
			}
		}
		system("pause");
		system("cls");
	};
}

void TextAdvacuresItems()
{///���������� �����������
	/*  List - �������� ��� ��������, ����������� � �������
		Trunk - �������� ��� �������� � �������� ������
		Pick(�������� ��������) - ������� ������� � �������� ��� � ������ ������
		Drop(�������� ��������) - �������� ������� �� ������� � �������
		Use(�������� �������� 1, �������� �������� 2) - ������������ �������(�������� - ���� �� �����)*/
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
				std::cout << "�������: " << Locations[i].NameLvl << endl;
				Locations[i].player = false;
				std::cout << " ^ �� �� ���� �������\n";
				std::cout << "\n�� ������ ������������� ������ �� ��� �������\n";
				for (int j = 0; j < Locations[i].doors.size(); j++)
				{
					std::cout << "�������: " << Locations[Locations[i].doors[j]].NameLvl << endl;
				}
			}
		}

		std::cout << "\n�� ����� ������� ������������?: ";
		std::cin >> Input;

		for (int i = 0; i < sizeof(Locations) / sizeof(Locations[0]); i++)
		{
			if (Input == Locations[i].NameLvl)
			{
				std::cout << "�� ������������� �� ������� �������: " << Locations[i].NameLvl << endl;
				Locations[i].player = true;
				break;
			}
		}
		system("pause");
		system("cls");
	};
}