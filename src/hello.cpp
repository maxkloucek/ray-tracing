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
    // john.age = 21;
    // john.name = "Johnxx";
    // std::cout << "John is " << john.age << " years old." << std::endl;
    // const int image_width = 256;
    // const int image_height = 256;
    std::cout << "Hello!" << std::endl;

    int num_elements = 0;
    std::vector<int> vec = {1, 2, 3};
    num_elements = std::size(vec);
    std::cout << num_elements << std::endl;
    for (int i = 0; i < num_elements; i++){
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // or equivalently we could do...
    std::vector<int>::iterator iter;
    for (iter = vec.begin(); iter != vec.end(); iter++){
        std::cout << *iter << " ";
    }
    // std::cout << vec << std::endl;
}
