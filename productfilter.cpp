#include "productfilter.h"

ProductFilter::ProductFilter()
{

}

vector<Product *> ProductFilter::filter(vector<Product *> items, Specification<Product> &s)
{
    vector<Product*> filtered;
    for(auto item:items)
        if(s.isSatisfied(item))
            filtered.push_back(item);
    return filtered;

}


