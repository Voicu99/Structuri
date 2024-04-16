// Structuri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


struct Punct
{
	int x = 0;
	int y = 0;
	int id = 0;
	void printcoord()
	{
		std::cout << "Coordonatele punctului " << id << " x este : " << x << " Coordonata y este " << y << std::endl;
	}
	void MoveUp()
	{
		y++;
	}
	void MoveDown()
	{
		if (y  >0) 
		{
			y--;
		}
	}
	void MoveLeft()
	{
		if(x > 0)
		   x--;
	}
	void MoveRight()
	{
		x++;
	}
};

//keyword struct numeStruct
//{
//corpul structurii
//}

int main()
{
 
	/*int x1 = 5;
	int y1 = 25;
	std::cout << "Coordonatele lui P1 sunt " << x1 << " " << y1 << std::endl;


	int x2 = 30;
	int y2 = 12;
	std::cout << "Coordonatele lui P2 sunt " << x2 << " " << y2 << std::endl;*/
	Punct p1;//instantiez un p1 de tip Punct
	p1.id = 1;
	p1.x = 5;
	p1.y = 25;
	p1.printcoord();
	p1.MoveLeft();
	p1.printcoord();
	Punct p2;
	p2.id = 2;
	p2.x = 45;
	p2.y = 32;
	p2.printcoord();
	Punct p3;
	p3.id = 3;
	std::cout << "Coordonatele lui P3 sunt " << std::endl;
	p3.printcoord();
	std::vector<Punct> Coordonate;
	Coordonate.push_back(p1);
	Coordonate.push_back(p2);



}