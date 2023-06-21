#include <iostream> 
#include <string>

using namespace std; //this command allows the user of common C++ libraries

// constants to define different vegetable types
const string VEG_TOMATO = "Tomato";
const string VEG_POTATO = "Potato";
const string VEG_LETTUCE = "Lettuce";
const string VEG_CARROT = "Carrot";

// a struct that holds the properties of a vegetable
struct Vegetable {
    string name;
    int width;
    int height;
};

// a function to create a new Vegetable
Vegetable createVegetable(string name, int width, int height) {
    Vegetable veg;
    veg.name = name;
    veg.width = width;
    veg.height = height;

    return veg;
}

// a function to print out the vegetable details
void printVegetableInfo(Vegetable veg) {
    cout << "Vegetable Info:" << endl;
    cout << "\tName: " << veg.name << endl;
    cout << "\tWidth: " << veg.width << endl;
    cout << "\tHeight: " << veg.height << endl;
    cout << endl;
}

// a function to calculate the area of a vegetable
double calculateVegetableArea(Vegetable veg) {
    double area = veg.width * veg.height;

    return area;
}

int main() {
    // create a few vegetables
    Vegetable tomato = createVegetable(VEG_TOMATO, 4, 2);
    Vegetable potato = createVegetable(VEG_POTATO, 5, 3);
    Vegetable lettuce = createVegetable(VEG_LETTUCE, 2, 4);
    Vegetable carrot = createVegetable(VEG_CARROT, 6, 2);

    // print out the vegetable details
    printVegetableInfo(tomato);
    printVegetableInfo(potato);
    printVegetableInfo(lettuce);
    printVegetableInfo(carrot);

    // calculate the area of each vegetable
    double tomatoArea = calculateVegetableArea(tomato);
    double potatoArea = calculateVegetableArea(potato);
    double lettuceArea = calculateVegetableArea(lettuce);
    double carrotArea = calculateVegetableArea(carrot);

    // print out the area of each vegetable
    cout << "The area of the tomato is " << tomatoArea << endl;
    cout << "The area of the potato is " << potatoArea << endl;
    cout << "The area of the lettuce is " << lettuceArea << endl;
    cout << "The area of the carrot is " << carrotArea << endl;
    cout << endl;

    // calculate the total area of the garden
    double totalArea = tomatoArea + potatoArea + lettuceArea + carrotArea;
    cout << "The total area of the kitchen garden is " << totalArea << endl;

    return 0;
}