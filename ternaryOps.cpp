#include <iostream>

int main()
{
    // ternary operators: ?: = replacement for if/else statements
    // condition ? expression1: expression 2;

    // int grade = 70;

    // if(grade >= 60)
    // {
    //     std::cout << "Passed!";
    // }
    // else
    // {
    //     std::cout << "You failed!";
    // }

    // int grade;
    
    // std::cout << "Enter your grade percentage: ";
    // std::cin >> grade;

    // grade >= 60 ? std::cout << "Passed!" : std::cout << "Failed!";
    
    // return 0;

    // int number = 5;
    // number % 2 ? std::cout << "Odd" : std::cout << "Even";

    // return 0;

    using namespace std;

    bool hungry = false;

    // hungry ? cout << "You are hungry!" : cout << "You are full!";
    cout << (hungry ? "You are hungry!" : "You are full!");

    return 0; 
}

//bitwise odd/even operator
// using namespace std;

// bool isEven(int n)
// {
//     // take the bitwise and of n with 1
//     if ((n & 1) == 0)
//         return true;
//     else
//         return false;
// }

// int main()
// {
//     int n;
//     std::cin >> n;

//     if (isEven(n) == true)
//         cout << "true";
//     else
//         cout << "false";

//     return 0;
// }