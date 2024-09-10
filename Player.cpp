#include"Entity.cpp"
#include<iostream>


class Player: public Entity
{
    private:
        std::string m_Name;
    public:
        Player(const std::string& name)
            : m_Name(name) {}

        Player()
        {
            m_Name = "Player 1";
        }

        std::string GetName() override {
            return m_Name;
        }
       
};
