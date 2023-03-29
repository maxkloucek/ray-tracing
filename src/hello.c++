#include <iostream>

class Person{
    public:
        Person(int age, std::string name){
            this->age = age;
            this->name = name;
        }
        int age;
        std::string name;
};

int main(){
    std::cout << "Hello, World!" << std::endl;
    Person john = Person(20, "John");
    john.age = 21;
    john.name = "Johnxx";
    std::cout << "John is " << john.age << " years old." << std::endl;
    // const int image_width = 256;
    // const int image_height = 256;
}
