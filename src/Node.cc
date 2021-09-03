#include"Node.hh"

Node::Node(Platos*& plato)
{
    this->plato = plato;
}

Node::~Node()
{
}

Platos* Node::GetPlato() const
{
    return plato;
}