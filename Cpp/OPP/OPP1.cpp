#include <iostream>
using std::string;

class Product
{
public:
    Product() = default;      // default constroctor
    Product(const Product &); // compia del constructor
    Product(Product &&);      // move constructor

    Product &operator=(const Product &) = default;
    Product &operator=(Product &&) = default;
    // el desctructor de seclara, deberia ser generada por el compilador
public:
    void set_name(const std::string &);
    std::string name() const;
    void set_availability(bool);
    bool available() const;
    // codigo omitido por brevedar
private:
    std::string name_;
    double price_;
    int rating_;
    bool available_;
};