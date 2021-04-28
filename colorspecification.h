#ifndef COLORSPECIFICATION_H
#define COLORSPECIFICATION_H
#include "specification.h"
#include "product.h"

class ColorSpecification : public Specification<Product>
{
    Product::Color color;
public:
    ColorSpecification(Product::Color color);
    virtual ~ColorSpecification() override
    {

    }

    // Specification interface
public:
    bool isSatisfied(Product *item) override;
};

#endif // COLORSPECIFICATION_H
