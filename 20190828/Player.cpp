#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
}


Player::~Player()
{
}

void Player::BeginPlay()
{
	cout << "Player::BeginPlay()" << endl;
}

void Player::Tick()
{
	cout << "Player::Tick()" << endl;
}

void Player::Render()
{
	cout << "Player::Render()" << endl;
}
