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

	class enemy
	{
	public:
		int hp = 100;
		int damage = 30;
		int defence = 10;
	}*Enemy;

	struct ListItems {

		std::string sword = "sword", heal = "heal", armor = "armor", stick = "stick", food = "food", bag = "bag", campfire = "campfire", wood = "wood", stone = "stone", chest = "chest", key = "key";
	}ListItems_;

	struct Objects
	{
		std::vector<std::string> ItemsInLocation;
		std::vector<enemy*> EnemyInLocation;
	}*Object;

	struct Location
	{
		std::vector<int> doors;
		std::string NameLvl;
		std::vector<Objects*> ObjectInLocation;
		bool player = false;
	}Locations[5];

	int tempLocation = 0;

	Locations[0].NameLvl = "swamp";
	Locations[0].doors.push_back(1);
	Locations[0].doors.push_back(2);
	Locations[0].player = true;
	vector<std::string> BackPack;

	Locations[0].ObjectInLocation.push_back(Object = new Objects);
	Locations[0].ObjectInLocation.back()->EnemyInLocation.push_back(Enemy = new enemy);
	Locations[0].ObjectInLocation.back()->EnemyInLocation.push_back(Enemy = new enemy);
	Locations[0].ObjectInLocation.back()->EnemyInLocation.push_back(Enemy = new enemy);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.stone);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.campfire);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.bag);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.heal);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.heal);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.sword);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.food);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.armor);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.chest);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.key);

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
		system("cls");
		for (int i = 0; i < sizeof(Locations) / sizeof(Locations[0]); i++)
		{
			if (Input == Locations[i].NameLvl)
			{
				std::cout << "�� ������������� �� �������: " << Locations[i].NameLvl << endl;
				Locations[i].player = true;
				tempLocation = i;
				break;
			}
		}
		while (true)
		{
			Objects* obj = Locations[tempLocation].ObjectInLocation.back();
			std::string input;
			std::cout << "\n��� ������� �� �������\n";
			std::cout << "\nList - �������� ��� ��������, ����������� � �������\n";
			std::cout << "\nTrunk - �������� ��� �������� � �������� ������\n";
			std::cout << "\nPick - ������� ������� � �������� ��� � ������ ������\n";
			std::cout << "\nDrop - �������� ������� �� ������� � �������\n";
			std::cout << "\nUse - ������������ ������� (�������� - ���� �� �����)\n";
			std::cout << "\nExit - ���� � �������\n";
			std::cin >> input;
			system("cls");
			if (input == "List")
			{
				for (int i = 0; i < Locations[0].ObjectInLocation.back()->ItemsInLocation.size(); i++)
				{
					std::cout << "�������� �� �������: " << endl;
					std::cout << Locations[0].ObjectInLocation.back()->ItemsInLocation[i] << endl;
				}
			}
			else if (input == "Trunk")
			{
				std::cout << "�������� � �������: " << endl;
				for (int i = 0; i < BackPack.size(); i++)
				{
					std::cout << BackPack[i] << endl;
				}
				if (BackPack.size() == 0)
				{
					std::cout << "� ��� ��� ��������� " << endl;
				}
			}
			else if (input == "Pick")
			{
				for (int i = 0; i < Locations[0].ObjectInLocation.back()->ItemsInLocation.size(); i++)
				{
					std::cout << "�������� �� �������: " << endl;
					std::cout << Locations[0].ObjectInLocation.back()->ItemsInLocation[i] << endl;
				}
				std::cout <<endl<< "������ ������� ������� ������ �������� � ������: ";
				std::cin >> input;

				for (int i = 0; i < Locations[0].ObjectInLocation.back()->ItemsInLocation.size(); i++)
				{
					if (input == Locations[0].ObjectInLocation.back()->ItemsInLocation[i])
					{
						std::cout << endl << "�� �������� � ������: "<< Locations[0].ObjectInLocation.back()->ItemsInLocation[i];
						BackPack.push_back(Locations[0].ObjectInLocation.back()->ItemsInLocation[i]);
						Locations[0].ObjectInLocation.back()->ItemsInLocation.erase(Locations[0].ObjectInLocation.back()->ItemsInLocation.begin()+i);
					}
				}
			}
			else if (input == "Drop")
			{
				std::cout << endl << "�������� � �������: " << endl;
				for (int i = 0; i < BackPack.size(); i++)
				{
					std::cout << BackPack[i] << endl;
					std::cout << endl;

					if (i == BackPack.size() - 1)
					{
						std::cout << "������ ������� ������� ������ �������� �� �������: ";
						std::cin >> input;
						for (int i = 0; i < BackPack.size(); i++)
						{
							if (input == BackPack[i])
							{
								std::cout << endl << "�� �������� ������� �� �������: " << BackPack[i];
								Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(BackPack[i]);
								BackPack.erase(BackPack.begin()+i);
							}
						}
					}
				}
				if (BackPack.size() == 0)
				{
					std::cout <<endl<< "� ��� ��� ��������� " << endl;
				}
			}
			else if (input == "Use")
			{
				std::cout << "�������� �� ������� � �������� ����� �����������������: " << endl;
				for (int i = 0; i < Locations[0].ObjectInLocation.back()->ItemsInLocation.size(); i++)
				{
					if (Locations[0].ObjectInLocation.back()->ItemsInLocation[i] == ListItems_.chest)
					{
						std::cout << Locations[0].ObjectInLocation.back()->ItemsInLocation[i] << endl;
					}
				}
				std::cout << endl << "�������� � �������: " << endl;
				for (int i = 0; i < BackPack.size(); i++)
				{
					if (BackPack[i] == ListItems_.key)
					{
						std::cout << BackPack[i] << endl;
					}
					if (i == BackPack.size() - 1)
					{
						std::cout << endl << "������ ������� ������� ������ ������������ �� �������: ";
						std::cin >> input;
						for (int i = 0; i < BackPack.size(); i++)
						{
							if (input == BackPack[i])
							{
								std::cout << endl << "������ ������� � ������� �� ������ �����������������: ";
								std::cin >> input;
								for (int j = 0; j < Locations[0].ObjectInLocation.back()->ItemsInLocation.size(); j++)
								{
									if (input == Locations[0].ObjectInLocation.back()->ItemsInLocation[j])
									{
										std::cout << endl << "�� ����������������� � ���������: " << Locations[0].ObjectInLocation.back()->ItemsInLocation[j];
										Locations[0].ObjectInLocation.back()->ItemsInLocation.erase(Locations[0].ObjectInLocation.back()->ItemsInLocation.begin() + j);
									}
								}
								std::cout << endl << "�� ������������ �� ��� �������: " << BackPack[i];
								BackPack.erase(BackPack.begin() + i);

								//��� ����� �� ������
							}
						}
					}
				}
				if (BackPack.size() == 0)
				{
					std::cout<< endl << "� ��� ��� ��������� " << endl;
				}


			}
			else if (input == "Exit")
			{
				break;
			}
			std::cout << endl;
			system("pause");
			system("cls");
		}
	};
}

void TextAdvacuresNpc()
{///������� ������
	
	
	struct Player
	{
	public:
		int hpP = 100;
		int damageP = 30;
		float defenceP = 10;
		int countHeal = 3;
		void Healen()
		{
			if (countHeal != 0)
			{
				countHeal--;
				hpP += 20;
			}
		}
	};
	
	class enemy :public Player
	{
	public:
		int hp = 100;
		int damage = 30;
		float defence = 10;
		
		bool RandomBattle(int TempNumber)
		{
			srand(TempNumber);
			int Dice = rand()%10;
			if (Dice > 5)
			{
				system("cls");
				system("color 4");
				std::cout << "�����"<<endl<<endl;
				srand(Dice); //��� ���� ������
				while (true) //����� ���������
				{
					int input;
					int FirstAttack = rand() % 10;
					bool EndFight;
					if (FirstAttack > 5)
					{	//������ ������� �����
						std::cout << "�� �������� ������"<<endl<<endl;
						std::cout << "������� �� ����� ������� ������� ������ �������:" << endl;
						std::cout << "1 - ���������� ���� ������ ��������� �� +50 �� ���� ���" << endl;
						std::cout << "2 - ��������� �� +"<< damageP << endl;
						std::cout << "3 - ������� �� +20"<< " ��������: "<< countHeal << endl;
						std::cin >> input;
						system("cls");
						switch (input)
						{
						case 1:
						{
							defenceP += 50;
							std::cout << "���� ������: " << defenceP << endl;
							system("pause");
							break;
						}
						case 2:
						{
							hp -= damageP - (damageP * (defence / 100));
							std::cout << "�� ��������� ���������� � ���� �������� hp: " << hp << endl;
							system("pause");
							break;
						}
						case 3:
						{
							Healen();
							std::cout << "���� ���������� ��������  ����� �������: " << hpP << endl;
							system("pause");
							break;
						}
						default:
							break;
						}
						system("cls");
						if (hp <= 0)
						{
							std::cout << "��������� ��������" << endl;
							system("pause");
							break;
						}
						else
						{
							std::cout << "������ ������� ����" << endl << endl;
							hpP -= damage - (damage*(defenceP/100));
							std::cout << "� ��� �������� hp: " << hpP << endl;

							if (defenceP>10)
							{
								defenceP = 10;
							}

							if (hpP <= 0)
							{
								std::cout << "����� ��������" << endl;
								system("pause");
								system("cls");
								break;
							}
							system("pause");
							system("cls");
						}
					}
					else
					{	//������ ������� ���������
						std::cout << "������ ������� ����";
						hpP -= damage - (damage * (defenceP / 100));
						std::cout << "� ��� �������� hp: " << hpP << endl;
						if (defenceP > 10)
						{
							defenceP = 10;
						}
						if (hpP <= 0)
						{
							std::cout << "����� ��������" << endl;
							system("pause");
							break;
						}
						system("pause");
						system("cls");
						std::cout << "������ �������� ��" << endl << endl;
						std::cout << "������� �� ����� ������� ������� ������ �������:" << endl;
						std::cout << "1 - ���������� ���� ������ ��������� �� +50 �� ���� ���" << endl;
						std::cout << "2 - ��������� �� +" << damageP << endl;
						std::cout << "3 - ������� �� +20" << " ��������: " << countHeal << endl;
						std::cin >> input;
						system("cls");
						switch (input)
						{
						case 1:
						{
							defenceP += 50;
							std::cout << "���� ������: " << defenceP << endl;
							system("pause");
							break;
						}
						case 2:
						{
							hp -= damageP - (damageP * (defence / 100));
							std::cout << "�� ��������� ���������� � ���� �������� hp: " << hp << endl;
							system("pause");
							break;
						}
						case 3:
						{
							Healen();
							std::cout << "���� ���������� ��������  ����� �������: " << hpP << endl;
							system("pause");
							break;
						}
						default:
							break;
						}
						system("cls");
						if (hp <= 0)
						{
							std::cout << "��������� ��������" << endl;
							system("pause");
							break;
						}


					}
				}
				system("color 0");
				system("cls");
				return true;
			}
			else
			{
				return false;
			}
		}

	}*Enemy;

	struct ListItems {

		std::string sword = "sword", heal = "heal", armor = "armor", stick = "stick", food = "food", bag = "bag", campfire = "campfire", wood = "wood", stone = "stone", chest = "chest", key = "key";
	}ListItems_;

	struct Objects
	{
		std::vector<std::string> ItemsInLocation;
		std::vector<enemy*> EnemyInLocation;
	}*Object;

	struct Location
	{
		std::vector<int> doors;
		std::string NameLvl;
		std::vector<Objects*> ObjectInLocation;
		bool player = false;
	}Locations[5];

	int tempLocation = 0;
	vector<std::string> BackPack;
	Locations[0].NameLvl = "swamp";
	Locations[0].doors.push_back(1);
	Locations[0].doors.push_back(2);
	Locations[0].player = true;
	
	Locations[0].ObjectInLocation.push_back(Object = new Objects);
	Locations[0].ObjectInLocation.back()->EnemyInLocation.push_back(Enemy = new enemy);
	Locations[0].ObjectInLocation.back()->EnemyInLocation.push_back(Enemy = new enemy);
	Locations[0].ObjectInLocation.back()->EnemyInLocation.push_back(Enemy = new enemy);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.stone);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.campfire);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.bag);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.heal);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.heal);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.sword);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.food);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.armor);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.chest);
	Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(ListItems_.key);

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
		std::cout << "\n�� ����� ������� �������������?: ";
		std::cin >> Input;
		system("cls");
		for (int i = 0; i < sizeof(Locations) / sizeof(Locations[0]); i++)
		{
			if (Input == Locations[i].NameLvl)
			{
				std::cout << "�� ������������� �� �������: " << Locations[i].NameLvl << endl;
				Locations[i].player = true;
				tempLocation = i;
				break;
			}
		}
		while (true)
		{	
			int RandTemp = 0;
			for (int i = 0; i < Locations[tempLocation].ObjectInLocation.back()->EnemyInLocation.size(); i++)
			{
				if (Locations[tempLocation].ObjectInLocation.back()->EnemyInLocation[i]->RandomBattle(RandTemp))
				{
					Locations[tempLocation].ObjectInLocation.back()->EnemyInLocation.erase(Locations[tempLocation].ObjectInLocation.back()->EnemyInLocation.begin() + i);
					system("color 0");
					break;
				}
			}

			Objects* obj = Locations[tempLocation].ObjectInLocation.back();
			std::string input;
			std::cout << "\n��� ������� �� �������\n";
			std::cout << "\nList - �������� ��� ��������, ����������� � �������\n";
			std::cout << "\nTrunk - �������� ��� �������� � �������� ������\n";
			std::cout << "\nPick - ������� ������� � �������� ��� � ������ ������\n";
			std::cout << "\nDrop - �������� ������� �� ������� � �������\n";
			std::cout << "\nUse - ������������ ������� (�������� - ���� �� �����)\n";
			std::cout << "\nExit - ���� � �������\n";
			std::cin >> input;
			system("cls");
			if (input == "List")
			{
				for (int i = 0; i < Locations[0].ObjectInLocation.back()->ItemsInLocation.size(); i++)
				{
					std::cout << "�������� �� �������: " << endl;
					std::cout << Locations[0].ObjectInLocation.back()->ItemsInLocation[i] << endl;
				}
			}
			else if (input == "Trunk")
			{
				std::cout << "�������� � �������: " << endl;
				for (int i = 0; i < BackPack.size(); i++)
				{
					std::cout << BackPack[i] << endl;
				}
				if (BackPack.size() == 0)
				{
					std::cout << "� ��� ��� ��������� " << endl;
				}
			}
			else if (input == "Pick")
			{
				for (int i = 0; i < Locations[0].ObjectInLocation.back()->ItemsInLocation.size(); i++)
				{
					std::cout << "�������� �� �������: " << endl;
					std::cout << Locations[0].ObjectInLocation.back()->ItemsInLocation[i] << endl;
				}
				std::cout << endl << "������ ������� ������� ������ �������� � ������: ";
				std::cin >> input;

				for (int i = 0; i < Locations[0].ObjectInLocation.back()->ItemsInLocation.size(); i++)
				{
					if (input == Locations[0].ObjectInLocation.back()->ItemsInLocation[i])
					{
						std::cout << endl << "�� �������� � ������: " << Locations[0].ObjectInLocation.back()->ItemsInLocation[i];
						BackPack.push_back(Locations[0].ObjectInLocation.back()->ItemsInLocation[i]);
						Locations[0].ObjectInLocation.back()->ItemsInLocation.erase(Locations[0].ObjectInLocation.back()->ItemsInLocation.begin() + i);
					}
				}
			}
			else if (input == "Drop")
			{
				std::cout << endl << "�������� � �������: " << endl;
				for (int i = 0; i < BackPack.size(); i++)
				{
					std::cout << BackPack[i] << endl;
					std::cout << endl;

					if (i == BackPack.size() - 1)
					{
						std::cout << "������ ������� ������� ������ �������� �� �������: ";
						std::cin >> input;
						for (int i = 0; i < BackPack.size(); i++)
						{
							if (input == BackPack[i])
							{
								std::cout << endl << "�� �������� ������� �� �������: " << BackPack[i];
								Locations[0].ObjectInLocation.back()->ItemsInLocation.push_back(BackPack[i]);
								BackPack.erase(BackPack.begin() + i);
							}
						}
					}
				}
				if (BackPack.size() == 0)
				{
					std::cout << endl << "� ��� ��� ��������� " << endl;
				}
			}
			else if (input == "Use")
			{
				std::cout << "�������� �� ������� � �������� ����� �����������������: " << endl;
				for (int i = 0; i < Locations[0].ObjectInLocation.back()->ItemsInLocation.size(); i++)
				{
					if (Locations[0].ObjectInLocation.back()->ItemsInLocation[i] == ListItems_.chest)
					{
						std::cout << Locations[0].ObjectInLocation.back()->ItemsInLocation[i] << endl;
					}
				}
				std::cout << endl << "�������� � �������: " << endl;
				for (int i = 0; i < BackPack.size(); i++)
				{
					if (BackPack[i] == ListItems_.key)
					{
						std::cout << BackPack[i] << endl;
					}
					if (i == BackPack.size() - 1)
					{
						std::cout << endl << "������ ������� ������� ������ ������������ �� �������: ";
						std::cin >> input;
						for (int i = 0; i < BackPack.size(); i++)
						{
							if (input == BackPack[i])
							{
								std::cout << endl << "������ ������� � ������� �� ������ �����������������: ";
								std::cin >> input;
								for (int j = 0; j < Locations[0].ObjectInLocation.back()->ItemsInLocation.size(); j++)
								{
									if (input == Locations[0].ObjectInLocation.back()->ItemsInLocation[j])
									{
										std::cout << endl << "�� ����������������� � ���������: " << Locations[0].ObjectInLocation.back()->ItemsInLocation[j];
										Locations[0].ObjectInLocation.back()->ItemsInLocation.erase(Locations[0].ObjectInLocation.back()->ItemsInLocation.begin() + j);
									}
								}
								std::cout << endl << "�� ������������ �� ��� �������: " << BackPack[i];
								BackPack.erase(BackPack.begin() + i);

								//��� ����� �� ������
							}
						}
					}
				}
				if (BackPack.size() == 0)
				{
					std::cout << endl << "� ��� ��� ��������� " << endl;
				}


			}
			else if (input == "Exit")
			{
				break;
			}
			std::cout << endl;
			system("pause");
			system("cls");
			RandTemp++;
		}
	};
}