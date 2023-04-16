#include "Food.h"
#include "Meal.h"
#include "FoodSummary.h"
#include <iostream>
using namespace std;

bool test_Food();
bool test_Meal();
bool test_FoodSummary();

int main() {
    if (test_Food()) {
        cout << "Passed all Food test cases" << endl;
    }
    if (test_Meal()) {
        cout << "Passed all Meal test cases" << endl;
    }
    if (test_FoodSummary()) {
        cout << "Passed all FoodSummary test cases" << endl;
    }
}

bool test_Food() {
    bool passed = true;

    Food f1 = Food();
    // test constructor
    if (f1.getName() != "" || f1.getKcal() != 0 || f1.getCarb() != 0 || f1.getFat() != 0 || f1.getProtein() != 0 || f1.getSugar() != 0 || f1.getSodium() != 0) {
        passed = false;
        cout << "FAILED Food default constructor test" << endl;
    }
    // test getters and setters
    if (f1.getName() != "") {
        passed = false;
        cout << "FAILED Food getName() test" << endl;
    }
    if (f1.getKcal() != 0) {
        passed = false;
        cout << "FAILED Food getKcal() test" << endl;
    }
    if (f1.getCarb() != 0) {
        passed = false;
        cout << "FAILED Food getCarb() test" << endl;
    }
    if (f1.getFat() != 0) {
        passed = false;
        cout << "FAILED Food getFat() test" << endl;
    }
    if (f1.getProtein() != 0) {
        passed = false;
        cout << "FAILED Food getProtein() test" << endl;
    }
    if (f1.getSugar() != 0) {
        passed = false;
        cout << "FAILED Food getSugar() test" << endl;
    }
    if (f1.getSodium() != 0) {
        passed = false;
        cout << "FAILED Food getSodium() test" << endl;
    }

    f1.setName("x");
    f1.setKcal(1);
    f1.setCarb(1);
    f1.setFat(1);
    f1.setProtein(1);
    f1.setSugar(1);
    f1.setSodium(1);

    if (f1.getName() != "x") {
        passed = false;
        cout << "FAILED Food setName() test" << endl;
    }
    if (f1.getKcal() != 1) {
        passed = false;
        cout << "FAILED Food setKcal() test" << endl;
    }
    if (f1.getCarb() != 1) {
        passed = false;
        cout << "FAILED Food setCarb() test" << endl;
    }
    if (f1.getFat() != 1) {
        passed = false;
        cout << "FAILED Food setFat() test" << endl;
    }
    if (f1.getProtein() != 1) {
        passed = false;
        cout << "FAILED Food setProtein() test" << endl;
    }
    if (f1.getSugar() != 1) {
        passed = false;
        cout << "FAILED Food setSugar() test" << endl;
    }
    if (f1.getSodium() != 1) {
        passed = false;
        cout << "FAILED Food setSodium() test" << endl;
    }

    return passed;
}

bool test_Meal() {
    bool passed = true;

    Meal m1 = Meal();
    // test constructor
    if (m1.getName() != "" || m1.getTotalKcal() != 0 || m1.getTotalCarb() != 0 || m1.getTotalFat() != 0 || m1.getTotalProtein() != 0 || m1.getTotalSugar() != 0 || m1.getTotalSodium() != 0 || m1.getNumFoods() != 0) {
        passed = false;
        cout << "FAILED Meal default constructor test" << endl;
    }
    // test getters and setters
    if (m1.getName() != "") {
        passed = false;
        cout << "FAILED Meal getName() test" << endl;
    }
    if (m1.getTotalKcal() != 0) {
        passed = false;
        cout << "FAILED Meal getTotalKcal() test" << endl;
    }
    if (m1.getTotalCarb() != 0) {
        passed = false;
        cout << "FAILED Meal getTotalCarb() test" << endl;
    }
    if (m1.getTotalFat() != 0) {
        passed = false;
        cout << "FAILED Meal getTotalFat() test" << endl;
    }
    if (m1.getTotalProtein() != 0) {
        passed = false;
        cout << "FAILED Meal getTotalProtein() test" << endl;
    }
    if (m1.getTotalSugar() != 0) {
        passed = false;
        cout << "FAILED Meal getTotalSugar() test" << endl;
    }
    if (m1.getTotalSodium() != 0) {
        passed = false;
        cout << "FAILED Meal getTotalSodium() test" << endl;
    }
    if (m1.getNumFoods() != 0) {
        passed = false;
        cout << "FAILED Meal getNumFoods() test" << endl;
    }

    m1.setName("x");
    if (m1.getName() != "x") {
        passed = false;
        cout << "FAILED Meal setName() test" << endl;
    }

    // test addFood() method
    Food f1 = Food();
    m1.addFood(f1);
    if (m1.getNumFoods() != 1) {
        passed = false;
        cout << "FAILED Meal addFood() test" << endl;
    }

    return passed;
}

bool test_FoodSummary() {
    bool passed = true;

    FoodSummary f1 = FoodSummary();
    // test constructor
    if (f1.getTotalKcal() != 0 || f1.getTotalCarb() != 0 || f1.getTotalFat() != 0 || f1.getTotalProtein() != 0 || f1.getTotalSugar() != 0 || f1.getTotalSodium() != 0 || f1.getNumMeals() != 0) {
        passed = false;
        cout << "FAILED FoodSummary default constructor test" << endl;
    }
    // test getters and setters
    if (f1.getTotalKcal() != 0) {
        passed = false;
        cout << "FAILED FoodSummary getTotalKcal() test" << endl;
    }
    if (f1.getTotalCarb() != 0) {
        passed = false;
        cout << "FAILED FoodSummary getTotalCarb() test" << endl;
    }
    if (f1.getTotalFat() != 0) {
        passed = false;
        cout << "FAILED FoodSummary getTotalFat() test" << endl;
    }
    if (f1.getTotalProtein() != 0) {
        passed = false;
        cout << "FAILED FoodSummary getTotalProtein() test" << endl;
    }
    if (f1.getTotalSugar() != 0) {
        passed = false;
        cout << "FAILED FoodSummary getTotalSugar() test" << endl;
    }
    if (f1.getTotalSodium() != 0) {
        passed = false;
        cout << "FAILED FoodSummary getTotalSodium() test" << endl;
    }
    if (f1.getNumMeals() != 0) {
        passed = false;
        cout << "FAILED FoodSummary getNumMeals() test" << endl;
    }

    // test addFood() method
    Meal m1 = Meal();
    f1.addMeal(m1);
    if (f1.getNumMeals() != 1) {
        passed = false;
        cout << "FAILED FoodSummary addMeal() test" << endl;
    }

    return passed;
}