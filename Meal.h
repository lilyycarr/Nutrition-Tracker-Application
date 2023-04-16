#ifndef M2OEP_LACARR_MEAL_H
#define M2OEP_LACARR_MEAL_H

#include "Food.h"
#include <string>
#include <vector>
using namespace std;

class Meal {
private:
    string name;
    int totalKcal;
    int totalCarb;
    int totalFat;
    int totalProtein;
    int totalSugar;
    int totalSodium;
    vector<Food> foods;

public:
    /* Constructor */
    Meal();

    /* Getters and Setters*/
    string getName() const;
    int getTotalKcal();
    int getTotalCarb();
    int getTotalFat();
    int getTotalProtein();
    int getTotalSugar();
    int getTotalSodium();
    int getNumFoods();

    void setName(string name);

    void addFood(Food food);

    /* overload << operator */
    friend ostream& operator << (ostream& outs, Meal& meal);

};

#endif //M2OEP_LACARR_MEAL_H
