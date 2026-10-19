#include <iostream>

int main()
{
    // int x; //declaration
    // x = 5;

    int x = 5;
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // integer whole numbers
    int year = 2023;
    int days = 7.5;
    int age = 21;

    std::cout << age << '\n'
              << year << '\n'
              << days;

    // double (number including decimals)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << '\n';

    // single chars
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (t or f);
    bool student = false;
    bool power = true;
    bool forSale = true;

    // strings
    std::string name = "User";
    std::string day = "Wednesday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello" << '\n' << name << '\n';
    std::cout << "You are" << age << "years old";

    std::cout << name << '\n';

    std::cout << initial << '\n';

    return 0;
}