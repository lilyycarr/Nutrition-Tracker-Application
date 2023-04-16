#ifndef M2OEP_LACARR_FOODSUMMARY_H
#define M2OEP_LACARR_FOODSUMMARY_H

#include "Food.h"
#include "Meal.h"
#include <string>
#include <vector>
using namespace std;

class FoodSummary {
private:
    int totalKcal;
    int totalCarb;
    int totalFat;
    int totalProtein;
    int totalSugar;
    int totalSodium;
    vector<Meal> meals;

public:
    /* Constructor */
    FoodSummary();

    /* Getters */
    int getTotalKcal();
    int getTotalCarb();
    int getTotalFat();
    int getTotalProtein();
    int getTotalSugar();
    int getTotalSodium();
    int getNumMeals();

    void addMeal(Meal meal);
};

#endif //M2OEP_LACARR_FOODSUMMARY_H
