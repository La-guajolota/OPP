#include <iostream>
using std::string;

// Por defaul todo es private
class Employee
{
public:
    // constructor
    Employee()
    {
    }

    // Atributos
    string name;
    string company;
    int age;

    // Metodos
    void introduceyourself()
    {
        std::cout << "Name- " << name << std::endl;
        std::cout << "Company- " << company << std::endl;
        std::cout << "Age- " << age << std::endl;
    }
};

int main()
{
    Employee E1; // Instancia de la clase employee
    E1.name = "Juan Pepe xd";
    E1.company = "Los hidroponios";
    E1.age = 123;

    Employee E2; // Otro esclavo del capital
    E2.name = "Guajolote de Jocotepec";
    E2.company = "Los hidroponios TV";
    E2.age = 321;

    Employee E3; // Un alienado más

    // Metodo
    E1.introduceyourself();
    E2.introduceyourself();
    E3.introduceyourself();
}