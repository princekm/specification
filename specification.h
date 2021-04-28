#ifndef SPECIFICATION_H
#define SPECIFICATION_H
template <class T>
class AndSpecification;

template <class T>
class Specification
{
 public:
     Specification()
     {

     }

     virtual ~Specification()
     {

     }
     virtual bool isSatisfied(T *item)=0;
     AndSpecification<T>  operator&&(Specification &other);
};

#endif // SPECIFICATION_H
