#ifndef PRODUCTFILTER_H
#define PRODUCTFILTER_H
#include "Filter.h"
#include "product.h"
class ProductFilter : public Filter<Product>
{
public:
    ProductFilter();

    // Filter interface
    vector<Product *> filter(vector<Product *> items, Specification<Product> &s) override;
};

#endif // PRODUCTFILTER_H
