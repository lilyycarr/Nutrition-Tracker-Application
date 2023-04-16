#include "Meal.h"
#include "Food.h"
#include <string>
#include <iostream>
using namespace std;

/* Constructor*/
Meal::Meal() : name(""), totalKcal(0), totalCarb(0), totalFat(0), totalProtein(0), totalSugar(0), totalSodium(0) {
    foods.clear();
}

/* Getters */
string Meal::getName() const {
    return name;
}
int Meal::getTotalKcal() {
    for(int i = 0; i < foods.size(); i++) {
        totalKcal += foods[i].getKcal();
    }
    return totalKcal;
}
int Meal::getTotalCarb() {
    for(int i = 0; i < foods.size(); i++) {
        totalCarb += foods[i].getCarb();
    }
    return totalCarb;
}
int Meal::getTotalFat() {
    for(int i = 0; i < foods.size(); i++) {
        totalFat += foods[i].getFat();
    }
    return totalFat;
}
int Meal::getTotalProtein() {
    for(int i = 0; i < foods.size(); i++) {
        totalProtein += foods[i].getProtein();
    }
    return totalProtein;
}
int Meal::getTotalSugar() {
    for(int i = 0; i < foods.size(); i++) {
        totalSugar += foods[i].getSugar();
    }
    return totalSugar;
}
int Meal::getTotalSodium() {
    for(int i = 0; i < foods.size(); i++) {
        totalSodium += foods[i].getSodium();
    }
    return totalSodium;
}
int Meal::getNumFoods() {
    return foods.size();
}

void Meal::setName(string name) {
    this->name = name;
}

void Meal::addFood(Food food) {
    foods.push_back(food);
}

/* overload << operator */
ostream& operator << (ostream& outs, Meal& meal) {
    outs << meal.name << endl;
    for (int i = 0; i < meal.foods.size(); i++) {
        outs << meal.foods[i] << endl;
    }
}
