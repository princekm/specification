#ifndef ANDSPECIFICATION_INL_H
#define ANDSPECIFICATION_INL_H

#pragma once
#include "specification.h"
#include "andspecification.h"
template <class T>
AndSpecification<T>  Specification<T>::operator&&(Specification &other)
{
    return AndSpecification<T>(this, &other);
}
#endif // ANDSPECIFICATION_INL_H
