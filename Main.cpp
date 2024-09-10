#include<iostream>
#include"Player.cpp"

int main()
{




    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;
    Player* p = new Player("Cherno");
    std::cout << p->GetName() << std::endl;

    Entity* entity = p;
    std::cout << entity->GetName() << std::endl;
    
}