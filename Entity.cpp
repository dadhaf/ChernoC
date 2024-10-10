#include<string>
#include<iostream>

class Entity
{
    public:
        float X,Y;
        virtual std::string GetName()
        {
            return "Entity";
        }

        void Move(float xa, float ya)
        {
            X+=xa;
            Y+=ya;
        }

        int a,b;

        void Print()
        {
            std::cout << a << ',' << b << std::endl;
        }
};


