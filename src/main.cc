#include<iostream>
#include"Platos.hh"
#include"Stack.hh"

int main()
{
   /*Platos* plato1{new Platos(1,0.1f,CARBORD)};
    std::cout << "Cantidad de platos1: " << plato1->GetQuantity() << std::endl;
    std::cout << "Radio del plato1: " << plato1->GetRadius() << std::endl;
    std::cout << "Tipo de plato1: " << plato1->GetPlateTypeStr() << std::endl;*/
//delete plato1;
    Platos* plato1{new Platos(2,0.3f,CARBORD)};
    Platos* plato2{new Platos(6,0.4f,CRYSTAL)};
    Platos* plato3{new Platos(8,0.1f,CERAMIC)};

    Stack* stack{new Stack()};
    stack->Push(plato1);
    stack->Push(plato2);
    stack->Push(plato3);

    Node* currentNode{stack->Peek()};
    while(currentNode)
    {
        std::cout << "Cantidad de platos1: " << currentNode->GetPlato()->GetQuantity() << std::endl;
        std::cout << "Radio del plato1: " << currentNode->GetPlato()->GetRadius() << std::endl;
        std::cout << "Tipo de plato1: " << currentNode->GetPlato()->GetPlateTypeStr() << std::endl;
        currentNode = currentNode->nextNode;
    }


    std::cin.get();

    return EXIT_SUCCESS;
}