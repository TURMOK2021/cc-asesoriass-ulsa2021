#include<iostream>
#include"Platos.hh"

Platos::Platos(unsigned int quantity, float radius, PlateType plateType)
{
    this->quantity = quantity;
    this->radius = radius;
    this->plateType = plateType;
}

Platos::~Platos()
{
    std::cout << "Me mori" << std::endl;

}
unsigned int Platos::GetQuantity() const
{
    return quantity;
}
float Platos::GetRadius() const
{
    return radius;
}
PlateType Platos::GetPlateType() const
{
    return plateType;
}
std::string Platos::GetPlateTypeStr() const
{
    return plateType == CERAMIC ? "Ceramic" : plateType == CARBORD ? "Cardbord" : plateType == CRYSTAL ? "Crystal" : "Plastic";
}