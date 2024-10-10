
#include<iostream>
#include<memory>
void* operator new(size_t size)
{
    std::cout << "Allocating memory of size: " << size << "bytes" << std::endl;
    return malloc(size);
}


void operator delete(void* memory, size_t size)
{
    std::cout << "Freeing memory of size: " << size << "bytes" << std::endl;
    return free(memory);
}

struct MemoryAllocation
{
    int x,y,z;
};
