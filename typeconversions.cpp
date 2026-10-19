#include <iostream>

int main()
{
    // type conversions
    // implict = auto
    // explicit = precede values with new data type (int)

    // double x = (int) 3.14;

    // char x = 100;

    // std::cout << (char) 100;

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << score << "%";

    return 0;
}
