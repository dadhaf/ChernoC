#include<iostream>
#include "Player.cpp"
#include "MemoryAllocation.cpp"
// int Entity::a;
// int Entity::b;

int main()
{

    int *p_a {nullptr};
    p_a = new int;
    struct MemoryAllocation hp;
    hp.x = 1;
    delete p_a;
    Entity* e = new Entity();
    e->b = 1;
    e->a = 2;
    e->Print();
    std::cout << e->GetName() << std::endl;
    Player* p = new Player("Cherno");
    std::cout << p->GetName() << std::endl;

    Entity* entity = p;
    std::cout << entity->GetName() << std::endl;

    
    
}