#include "colorspecification.h"

ColorSpecification::ColorSpecification(Product::Color color)
{
    this->color=color;
}


bool ColorSpecification::isSatisfied(Product *item)
{
    return  item->getColor()==color;
}
