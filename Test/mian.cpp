#include <iostream>
#include <string>
//Задача №1
class Overcoat {
private:
    std::string type;
    int price;
public:
    Overcoat(std::string t, int p) : type(t), price(p) {}

    bool operator==(Overcoat& other) const {
        return this->type == other.type;
    }

    Overcoat& operator=(const Overcoat& other) {
        this->type = other.type;
        this->price = other.price;
        return *this;
    }

    bool operator>(Overcoat& other) const {
        return this->price > other.price;
    }

    bool operator<(Overcoat& other) const {
        return this->price < other.price;
    }

    void display() {
        std::cout << "Type: " << type << ", Price: " << price << std::endl;
    }
};
//Задача №2
class Flat {
private:
    std::string type;
    int area;
    int price;
public:
    Flat(std::string t, int a, int p) : type(t), area(a), price(p) {}
    bool operator==(const Flat& other) {
        return this->area == other.area;
    }
    Flat& operator=(const Flat& other) {
        this->type = other.type;
        this->area = other.area;
        this->price = other.price;
        return *this;
    }
    bool operator>(const Flat& other) {
        return this->price > other.price;
    }
    void display() {
        std::cout << "Type: " << type << ", Area: " << area << " sqm, Price: " << price << " RUB" << std::endl;
    }
};


int main() {
    //Задача№1
    std::cout << "Task 1" << std::endl;

    Overcoat coat1("Windbreaker", 1000);
    Overcoat coat2("Trench coat", 2500);

    coat1.display();
    coat2.display();

    if (coat1 == coat2) {
        std::cout << "Coats are of the same type." << std::endl;
    }
    else {
        std::cout << "Coats are of different types." << std::endl;
    }

    if (coat1 > coat2) {
        std::cout << "Coat 1 is more expensive than Coat 2." << std::endl;
    }
    else {
        std::cout << "Coat 1 is not more expensive than Coat 2." << std::endl;
    }

    if (coat1 < coat2) {
        std::cout << "Coat 1 is less expensive than Coat 2." << std::endl;
    }
    else {
        std::cout << "Coat 1 is not less expensive than Coat 2." << std::endl;
    }

    Overcoat coat3("Windbreaker", 1000);
    coat3.display();

    coat3 = coat2;
    coat3.display();

    //Задача №2
    std::cout << "Task 2" << std::endl;

    Flat flat1("Two bedroom apartment", 44, 70'000'00);
    Flat flat2("Three bedroom apartment", 60, 15'000'00);
    Flat flat3("Penthouse", 165, 24'000'00);

    flat1.display();
    flat2.display();

    if (flat1 == flat2) {
        std::cout << "Flats have the same area." << std::endl;
    }
    else {
        std::cout << "Flats have different areas." << std::endl;
    }

    if (flat1 > flat2) {
        std::cout << "Flat 1 is more expensive than Flat 2." << std::endl;
    }
    else {
        std::cout << "Flat 1 is not more expensive than Flat 2." << std::endl;
    }

    Flat flat4("One-bedroom apartment", 60, 120000);
    flat4.display();

    flat4 = flat3;
    flat4.display();


    return 0;
}