#include <iostream>
#include <string>

    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

using namespace std;

class Car{

    private:
        string type;
        float km;

    public:
        Car(string type , float km){
            this -> type = type;
            this -> km = km;
        }
} ;

int main() {

    Car co("Ford" , 120);

  return 0;
}
