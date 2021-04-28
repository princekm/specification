#ifndef FILTER_H
#define FILTER_H
#include <vector>
#include "specification.h"
using namespace std;
template <typename T>
class Filter
{
public:
    Filter()
    {

    }
    virtual ~Filter(){

    }
    virtual vector<T*> filter(vector <T*> items,Specification<T> &s)=0;

};
#endif // FILTER_H
