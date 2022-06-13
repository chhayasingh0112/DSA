#include <iostream>
#include <string>

class Entity
{
public:
	virtual void PrintName() { }
};

class Player :public Entity
{

};

class Enemy :public Entity
{

};

int main()
{
	Player* player = new Player(); 
	Entity* actuallyPlayer = player;
	Entity* actuallyEnemy = new Enemy();

	player* p0 = dynamic_cast<Player*>(actuallyEnemy);
	//if (dynamic_cast<Player*>(actuallyPlayer))
	//{

	//}

	player* p1 = dynamic_cast<Player*>(actuallyPlayer );
}