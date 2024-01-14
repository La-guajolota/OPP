#include <iostream>
using std::string;

// clase abstracta
class abtractemploee
{
    virtual void AskForPromotion() = 0;
};

// Por defaul todo es private
class Employee : abtractemploee
{
private:
    // Atributos
    string name;
    string company;
    int age;

public:
    // Metodos
    void introduceyourself()
    {
        std::cout << "Name- " << name << std::endl;
        std::cout << "Company- " << company << std::endl;
        std::cout << "Age- " << age << std::endl;
    }

    // constructor
    Employee(string NAME, string COMPANY, int AGE)
    {
        name = NAME;
        company = COMPANY;
        age = AGE;
    }

    // Metodo de una clase abstracta
    void AskForPromotion()
    {
        if (age > 30)
        {
            std::cout << name << " Pa la chamba" << std::endl;
        }
        else
        {
            std::cout << name << " Nel perro, perdiste la chamba" << std::endl;
        }
    }

    // getters and setters
    // NAME RELATED
    void setName(string NAME)
    {
        name = NAME;
    }
    string getName()
    {
        return name;
    }

    // COMPANY RELATED
    string getCompany()
    {
        return company;
    }
    void setCompany(string COMPANY)
    {
        company = COMPANY;
    }

    // AGE RELATED
    void setAge(int AGE)
    {
        if (AGE <= 99)
        {
            age = AGE;
        }
        else
        {
            age = 0;
        }
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    // Instancia de la clase employee
    Employee E1 = Employee("Juan Pepe xd", "Los hidroponios", 123);

    // Otro esclavo del capital
    Employee E2 = Employee("Guajolote de Jocotepec", "Los hidroponios TV", 321);
    /*E2.name = "Guajolote de Jocotepec";
    E2.company = "Los hidroponios TV";
    E2.age = 321;*/

    // Metodo
    E1.introduceyourself();
    E2.introduceyourself();

    // Pesumimos lops setter y getters
    E1.setAge(124);
    std::cout << E1.getName() << " es " << E1.getAge() << " de edad" << std::endl;

    // Metodo de una clase abstracta
    E1.AskForPromotion();
}