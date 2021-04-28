#ifndef ANDSPECIFICATION_H
#define ANDSPECIFICATION_H
#include "specification.h"

template <class T>

class AndSpecification : public Specification<T>
{
    Specification <T> *first;
    Specification <T> *second;
public:
    AndSpecification(Specification <T> *first,Specification <T> * second);

    // Specification interface
public:
    bool isSatisfied(T *item) override;
};

#endif // ANDSPECIFICATION_H
#include "andspecification_inl.h"
