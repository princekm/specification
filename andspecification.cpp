#include "andspecification.h"
#include "product.h"
template<class T>
AndSpecification<T>::AndSpecification(Specification<T> *first, Specification<T> *second)
{
    this->first=first;
    this->second=second;
}

template<class T>
bool AndSpecification<T>::isSatisfied(T *item)
{
    return first->isSatisfied(item) && second->isSatisfied(item);
}
template class AndSpecification<Product>;
