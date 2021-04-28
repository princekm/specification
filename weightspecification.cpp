#include "weightspecification.h"

WeightSpecification::WeightSpecification(Product::Weight weight)
{
this->weight=weight;
}


bool WeightSpecification::isSatisfied(Product *item)
{
    return item->getWeight()==weight;
}
