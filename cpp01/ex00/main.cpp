#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony pudding = Pony("Pudding", "pink", "angry");
    pudding.pet();
}

void ponyOnTheHeap()
{
    Pony *cherry = new Pony("Cherry", "red", "good");
    cherry->pet();
    delete cherry;
}

int main()
{
    ponyOnTheStack();
    std::cout << " " << std::endl;
    ponyOnTheHeap();
}