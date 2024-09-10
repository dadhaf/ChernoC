#include"Entity.cpp"
#include<iostream>


class Player: public Entity
{
    public:
        const char* Name;

        void PrintName()
        {
            std::cout << Name << std::endl;
        }
};
