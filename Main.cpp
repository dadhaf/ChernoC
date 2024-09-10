#include<iostream>
#include"Player.cpp"

int main()
{
    Player player;

    player.X = 2;
    player.Y = 3;

    player.Move(2,2);

    player.Name = "Player 1";

    player.PrintName();

    
}