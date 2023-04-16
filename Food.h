#ifndef M2OEP_LACARR_FOOD_H
#define M2OEP_LACARR_FOOD_H

#include <string>
using namespace std;

class Food {
private:
    string name;
    int kcal;
    int carb;
    int protein;
    int fat;
    int sugar;
    int sodium;

public:
    /* Constructor */
    Food();

    /* Getters and Setters */
    string getName() const;
    int getKcal() const;
    int getCarb() const;
    int getProtein() const;
    int getFat() const;
    int getSugar() const;
    int getSodium() const;

    void setName(string name);
    void setKcal(int kcal);
    void setCarb(int carb);
    void setProtein(int protein);
    void setFat(int fat);
    void setSugar(int sugar);
    void setSodium(int sodium);

    /* overload << operator */
    friend ostream& operator << (ostream& outs, Food& food);
};

#endif //M2OEP_LACARR_FOOD_H
