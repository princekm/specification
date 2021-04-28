#ifndef WEIGHTSPECIFICATION_H
#define WEIGHTSPECIFICATION_H
#include "specification.h"
#include "product.h"

class WeightSpecification : public Specification<Product>
{
private:
    Product::Weight weight;
public:
    WeightSpecification(Product::Weight weight);
    ~WeightSpecification() override
    {

    }

    // Specification interface
public:
    bool isSatisfied(Product *item) override;
};

#endif // WEIGHTSPECIFICATION_H
