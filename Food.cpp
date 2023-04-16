#include "Food.h"
#include <string>
#include <iostream>
using namespace std;

/* Constructor */
Food::Food() : name(""), kcal(0), carb(0), protein(0), fat(0), sugar(0), sodium(0) {}

/* Getters and Setters */
string Food::getName() const {
    return name;
}
int Food::getKcal() const {
    return kcal;
}
int Food::getCarb() const {
    return carb;
}
int Food::getProtein() const {
    return protein;
}
int Food::getFat() const {
    return fat;
}
int Food::getSugar() const {
    return sugar;
}
int Food::getSodium() const {
    return sodium;
}

void Food::setName(string name) {
    this->name = name;
}
void Food::setKcal(int kcal) {
    this->kcal = kcal;
}
void Food::setCarb(int carb) {
    this->carb = carb;
}
void Food::setProtein(int protein) {
    this->protein = protein;
}
void Food::setFat(int fat) {
    this->fat = fat;
}
void Food::setSugar(int sugar) {
    this->sugar = sugar;
}
void Food::setSodium(int sodium) {
    this->sodium = sodium;
}

ostream& operator << (ostream& outs, Food& food) {
    outs << "Food: " << food.name << endl << "Calories: " << food.kcal << endl << "Carbohydrates: " << food.carb << endl << "Fat: " << food.fat << endl << "Protein: " << food.protein << endl << "Sugar: " << food.sugar << endl << "Sodium: " << food.sodium << endl;
}
