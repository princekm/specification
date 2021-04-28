#include "product.h"
#include <iostream>
using namespace  std;

void Product::setId(int value)
{
    id = value;
}

void Product::setColor(Color value)
{
    color = value;
}

void Product::setWeight(Weight value)
{
    weight = value;
}

int Product::getId() const
{
    return id;
}

Product::Color Product::getColor() const
{
    return color;
}

Product::Weight Product::getWeight() const
{
    return weight;
}

void Product::display()
{
   cout<<"Product ID"<<getId()<<endl;
}

Product::Product(int id, Color color, Weight weight)
{
    setId(id);
    setColor(color);
    setWeight(weight);
}
