#include <iostream>

int main()
{
    using namespace std;

    // std::string name;

    // std::cout << "Enter your name: ";
    // std::getline(std::cin, name);

    // if(name.length() > 12) 
    // {
    //     std::cout << "Your name can't be over 12 chars long";
    // }
    // else
    // {
    //     std::cout << "Hello," << name;
    // }

    //     return 0;

    std::string pass;

    cout << "Enter your password: ";
    getline(std::cin, pass);

    if (pass.empty())
    {
        cout << "No password entered!";
    }
    else
    {
        cout << "Password entered: " << pass;
    }
    
    
    // if(pass.length() < 12)
    // {
    //     cout << "Password saved!";
    // }
    // else
    // {
    //     cout << "Password is over 12 characters long!";
    // }

    return 0;
}