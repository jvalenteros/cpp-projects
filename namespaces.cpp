#include <iostream>

namespace first{;
    int x = 1;
}

namespace second{
    int x = 2;
}
 
int main(){

    //namespaces P= provides a solution for naming conflics in large codebases
    // each entities need a new name
    // namespaces allow for identical named entities
    // as long as the namespaces are different

    using std::cout;
    using std::string;

    string name = "Bro";

    cout << "Hello " << name;

    return 0;
}