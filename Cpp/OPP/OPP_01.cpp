#include <iostream>
using std::string;

struct spaceship
{
    bool is_military;
    int speed;
    int seat;
};

/****************************************************
 * Ejemplo 1
 ****************************************************/
struct Product
{
    string name;
    double price;
    int rating;
    bool available;
};
// Mimicandoo una clase
// METODOS!!!
void initialize(Product *p) //! INICIAMOS
{
    p->price = 0.0;
    p->rating = 0;
    p->available = false;
}

void set_name(Product *p, const std::string &name)
{
    p->name = name;
}

std::string get_name(Product *p)
{
    return p->name;
}

void set_price(Product *p, double price)
{
    if (price < 0 || price > 9999.42)
    {
        return;
    }
    p->price = price;
}

double get_price(Product *p)
{
    return p->price;
}

void set_rating(Product *p, int r)
{
    if (r >= 1 && r <= 5)
    {
        p->rating = r;
    }
}

/*****************************************************
 * Ejemplo 2
 *****************************************************/
struct Warehouse
{
    Product *products; // Puntero de tipo Product
    int capacity;
    int size;
};

void init_Warehouse(Warehouse *w)
{
    w->capacity = 1000;
    w->size = 0;
    w->products = new Product[w->capacity]; // Liste de products en forma de array

    for (int ix = 0; ix < w->capacity; ++ix)
    {
        initialize(&w->products[ix]); // Inicializa cada Product OBJECT
    }
}

int main()
{
    // Objetos de la estructura Product
    Product book;
    Product Tshirt;

    Product *ptr = &book;  // Puntero del tipo Product
    Product &ref = Tshirt; // ?

    int suma_bytes = sizeof(int) + sizeof(bool) + sizeof(double) + sizeof(string);
    std::cout << "INT pesa: " << sizeof(int) << std::endl;
    std::cout << "BOOL pesa: " << sizeof(bool) << std::endl;
    std::cout << "DOUBLE pesa: " << sizeof(double) << std::endl;
    std::cout << "STRING pesa: " << sizeof(string) << std::endl;

    //! Espacio de memoria de la structura Product
    //? padding of the struct
    std::cout << "Suma total de los elelemtos: " << suma_bytes << " Amongus: " << sizeof(Product) << " Bytes" << std::endl;

    initialize(ptr);

    // Cambiamos los estados del objeto book
    book.available = true;
    book.rating = 5;
    book.name = "EL LIBRO";

    // Utilizando los metodos setter y getters
    set_price(ptr, 76.00);
    std::cout << "Precio del book: " << book.price << std::endl;

    // Para tener cuidad con ingresar datos a lso elementos
    set_rating(ptr, 8);
    std::cout << "Rating del book: " << book.rating << std::endl;

    /*******************************************
     * Creamos una instancia WAREHOUSE
     ********************************************/
    Warehouse tienda_componentes;
    Warehouse *art0; // Puntero de articulo No_ 0
    init_Warehouse(art0);
}
