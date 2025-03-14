#include <iostream>
#include <string>
#include <Car.h>
using namespace std;

void printArray(int arr[])
{
    int size=sizeof(arr);
    cout<<"Array size: "<<size<<endl;
    for (int i = 0; i < sizeof(arr); i++)
    {
        std::cout << arr[i] << " ";
        arr[i]++;
    }
    cout << endl;
}
class MyClass
{
    public:
    int a;
};

int main() {
    MyClass obj;
    obj.a = 10;
    cout<<obj.a<<endl;

    int dim=100;
    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    int arr[dim];
    for (int i = 0; i < dim; i++)
    {
        arr[i] = i + 1;
    }
    unsigned long long size=sizeof(arr);
    cout<<"Array size: "<<size<<endl;
    printArray(arr);
    for (int i = 0; i < dim; i++)
    {
        std::cout << arr[i] << " ";
    }

    Car myCar("Tesla", 120);
    myCar.accelerate(30);
    myCar.display();

    return 0;
}


/*/MyProject
│── /src         → Source files (.cpp)
│── /include     → Header files (.h or .hpp)
│── /build       → Compiled binaries (optional)
│── /lib         → External libraries (if needed)
│── /tests       → Unit tests
│── main.cpp     → Entry point of the program
│── CMakeLists.txt (if using CMake) / Makefile
│── README.md
*/