#include<string>

class Entity
{
    public:
        float X,Y;
        std::string GetName()
        {
            return "Entity";
        }

        void Move(float xa, float ya)
        {
            X+=xa;
            Y+=ya;
        }
};


