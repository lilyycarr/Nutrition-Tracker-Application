#include "FoodSummary.h"
#include "Meal.h"
#include "Food.h"
#include <string>
#include <fstream>
using namespace std;

/* Constructor*/
FoodSummary::FoodSummary() : totalKcal(0), totalCarb(0), totalFat(0), totalProtein(0), totalSugar(0), totalSodium(0) {
    meals.clear();
}

/* Getters */
int FoodSummary::getTotalKcal() {
    for(int i = 0; i < meals.size(); i++) {
        totalKcal += meals[i].getTotalKcal();
    }
    return totalKcal;
}
int FoodSummary::getTotalCarb() {
    for(int i = 0; i < meals.size(); i++) {
        totalCarb += meals[i].getTotalCarb();
    }
    return totalCarb;
}
int FoodSummary::getTotalFat() {
    for(int i = 0; i < meals.size(); i++) {
        totalFat += meals[i].getTotalFat();
    }
    return totalFat;
}
int FoodSummary::getTotalProtein() {
    for(int i = 0; i < meals.size(); i++) {
        totalProtein += meals[i].getTotalProtein();
    }
    return totalProtein;
}
int FoodSummary::getTotalSugar() {
    for(int i = 0; i < meals.size(); i++) {
        totalSugar += meals[i].getTotalSugar();
    }
    return totalSugar;
}
int FoodSummary::getTotalSodium() {
    for(int i = 0; i < meals.size(); i++) {
        totalSodium += meals[i].getTotalSodium();
    }
    return totalSodium;
}
int FoodSummary::getNumMeals() {
    return meals.size();
}

void FoodSummary::addMeal(Meal meal) {
    meals.push_back(meal);
}

