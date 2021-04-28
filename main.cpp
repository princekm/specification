#include <iostream>
#include "product.h"
#include "colorspecification.h"
#include "weightspecification.h"
#include "productfilter.h"
using namespace std;
int main()
{
    Product p(1,Product::RED,Product::LARGE);
    Product q(2,Product::RED,Product::LARGE);
    Product r(3,Product::GREEN,Product::SMALL);

    vector <Product *> productList;
    productList.push_back(&p);
    productList.push_back(&q);
    productList.push_back(&r);

    ColorSpecification colorSpecification(Product::RED);
    WeightSpecification weightSpecification(Product::LARGE);
    ProductFilter productFilter;
    cout<<"Filtered Products"<<endl;
   for(auto product:productFilter.filter(productList,colorSpecification&&weightSpecification))
        product->display();
    return 0;
}
