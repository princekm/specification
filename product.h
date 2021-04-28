#ifndef PRODUCT_H
#define PRODUCT_H


class Product
{


public:

    enum Color{RED,BLUE,GREEN};
    enum Weight{SMALL,MEDIUM,LARGE};

    Product(int id,Color color,Weight weight);

    void setId(int value);
    void setColor(Color value);
    void setWeight(Weight value);
    int getId() const;

    Color getColor() const;

    Weight getWeight() const;
    void display();

private:
    int id;
    Color color;
    Weight weight;
};

#endif // PRODUCT_H
