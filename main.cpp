#include "FoodSummary.h"
#include "Meal.h"
#include "Food.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

// input validation methods
int getAgeFromUser();
char getGenderFromUser();
string getFoodNameFromUser();
int getKcalFromUser();
int getCarbFromUser();
int getFatFromUser();
int getProteinFromUser();
int getSugarFromUser();
int getSodiumFromUser();

// method to create final food summary file
void makeFoodSummaryFile(FoodSummary fs, string filename, ostream &outs, istream &ins);

int main() {
    // welcome message
    cout << "Welcome to Your Personal Nutrition Tracker" << endl;

    FoodSummary fs;

    makeFoodSummaryFile(fs, "../NutritionSummary.txt" , cout, cin);
}

/* input validation methods */

int getAgeFromUser() {
    string input;
    int age;
    stringstream ss;
    bool validInt = false;

    cout << "Enter your age: " << endl;
    getline(cin, input);

    ss << input;
    ss >> age;

    while (!validInt) {
        if (ss.fail()) {
            if (ss.str().empty()) {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "No input. Enter your age: " << endl;
                getline(cin, input);
                ss << input;
                ss >> age;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter your age: " << endl;
                getline(cin, input);
                ss << input;
                ss >> age;
            }
        }
        else if (!(ss.fail())) {
            // check for non-digit characters in string
            int notDigit = 0;
            for (int i = 0; i < input.length(); i++) {
                if (!(isdigit(input[i]))) {
                    notDigit++;
                }
            }
            // if no non-digit characters are present
            if (notDigit == 0) {
                validInt = true;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter your age: " << endl;
                getline(cin, input);
                ss << input;
                ss >> age;
            }
        }
    }
    return age;
}

char getGenderFromUser() {
    string input;
    bool validChar = false;

    cout << "Enter your Gender - M (male) / F (female) / O (gender not specified) / S (skip question): " << endl;
    getline(cin,input);

    while (!validChar) {
        // if input is too large
        if (input.length() > 1) {
            // clear buffer
            cin.clear();
            cout << "Invalid input. Enter M / F / O / S: " << endl;
            getline(cin, input);
        }
        // if input is not M / F / O / S
        else if (input != "M" && input != "m" && input != "F" && input != "f" && input != "O" && input != "o" && input != "S" && input != "s") {
            // clear buffer
            cin.clear();
            cout << "Invalid input. Enter M / F / O / S: " << endl;
            getline(cin, input);
        }
        // if no input is given
        else if (input.empty()) {
            // clear buffer
            cin.clear();
            cout << "No input. Enter M / F / O / S: " << endl;
            getline(cin, input);
        }
        else validChar = true;
    }
    // change single character string to a char
    char gender = input[0];

    return gender;
}

string getFoodNameFromUser() {
    string name;
    bool valid = false;

    cout << "Food name: " << endl;
    getline(cin,name);

    while (!valid) {
        // if no input is given
        if (name.empty()) {
            // clear buffer
            cin.clear();
            cout << "No input. Enter a food: " << endl;
            getline(cin,name);
        }
        // if input is white space
        else if (name == " " || name == "\t") {
            // clear buffer
            cin.clear();
            cout << "Invalid input. Enter a food: " << endl;
            getline(cin, name);
        }
        // if name is valid
        else if (!(name.empty())) {
            valid= true;
        }
    }
    return name;
}
int getKcalFromUser() {
    string input;
    int kcal;
    stringstream ss;
    bool validInt = false;

    cout << "Enter number of calories: " << endl;
    getline(cin, input);

    ss << input;
    ss >> kcal;

    while (!validInt) {
        if (ss.fail()) {
            if (ss.str().empty()) {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "No input. Enter number of calories: " << endl;
                getline(cin, input);
                ss << input;
                ss >> kcal;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of calories: " << endl;
                getline(cin, input);
                ss << input;
                ss >> kcal;
            }
        }
        else if (!(ss.fail())) {
            // check for non-digit characters in string
            int notDigit = 0;
            for (int i = 0; i < input.length(); i++) {
                if (!(isdigit(input[i]))) {
                    notDigit++;
                }
            }
            // if no non-digit characters are present
            if (notDigit == 0) {
                validInt = true;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of calories: " << endl;
                getline(cin, input);
                ss << input;
                ss >> kcal;
            }
        }
    }
    return kcal;
}
int getCarbFromUser() {
    string input;
    int carb;
    stringstream ss;
    bool validInt = false;

    cout << "Carbohydrates (grams): " << endl;
    getline(cin, input);

    ss << input;
    ss >> carb;

    while (!validInt) {
        if (ss.fail()) {
            if (ss.str().empty()) {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "No input. Enter number of carbohydrates (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> carb;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of carbohydrates (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> carb;
            }
        }
        else if (!(ss.fail())) {
            // check for non-digit characters in string
            int notDigit = 0;
            for (int i = 0; i < input.length(); i++) {
                if (!(isdigit(input[i]))) {
                    notDigit++;
                }
            }
            // if no non-digit characters are present
            if (notDigit == 0) {
                validInt = true;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of carbohydrates (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> carb;
            }
        }
    }
    return carb;
}
int getFatFromUser() {
    string input;
    int fat;
    stringstream ss;
    bool validInt = false;

    cout << "Fat (grams): " << endl;
    getline(cin, input);

    ss << input;
    ss >> fat;

    while (!validInt) {
        if (ss.fail()) {
            if (ss.str().empty()) {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "No input. Enter number of fat (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> fat;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of fat (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> fat;
            }
        }
        else if (!(ss.fail())) {
            // check for non-digit characters in string
            int notDigit = 0;
            for (int i = 0; i < input.length(); i++) {
                if (!(isdigit(input[i]))) {
                    notDigit++;
                }
            }
            // if no non-digit characters are present
            if (notDigit == 0) {
                validInt = true;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of fat (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> fat;
            }
        }
    }
    return fat;
}
int getProteinFromUser() {
    string input;
    int protein;
    stringstream ss;
    bool validInt = false;

    cout << "Protein (grams): " << endl;
    getline(cin, input);

    ss << input;
    ss >> protein;

    while (!validInt) {
        if (ss.fail()) {
            if (ss.str().empty()) {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "No input. Enter number of protein (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> protein;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of protein (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> protein;
            }
        }
        else if (!(ss.fail())) {
            // check for non-digit characters in string
            int notDigit = 0;
            for (int i = 0; i < input.length(); i++) {
                if (!(isdigit(input[i]))) {
                    notDigit++;
                }
            }
            // if no non-digit characters are present
            if (notDigit == 0) {
                validInt = true;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of protein (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> protein;
            }
        }
    }
    return protein;
}
int getSugarFromUser() {
    string input;
    int sugar;
    stringstream ss;
    bool validInt = false;

    cout << "Sugar (grams): " << endl;
    getline(cin, input);

    ss << input;
    ss >> sugar;

    while (!validInt) {
        if (ss.fail()) {
            if (ss.str().empty()) {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "No input. Enter number of sugar (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> sugar;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of sugar (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> sugar;
            }
        }
        else if (!(ss.fail())) {
            // check for non-digit characters in string
            int notDigit = 0;
            for (int i = 0; i < input.length(); i++) {
                if (!(isdigit(input[i]))) {
                    notDigit++;
                }
            }
            // if no non-digit characters are present
            if (notDigit == 0) {
                validInt = true;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of sugar (grams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> sugar;
            }
        }
    }
    return sugar;
}
int getSodiumFromUser() {
    string input;
    int sodium;
    stringstream ss;
    bool validInt = false;

    cout << "Sodium (milligrams): " << endl;
    getline(cin, input);

    ss << input;
    ss >> sodium;

    while (!validInt) {
        if (ss.fail()) {
            if (ss.str().empty()) {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "No input. Enter number of sodium (milligrams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> sodium;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of sodium (milligrams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> sodium;
            }
        }
        else if (!(ss.fail())) {
            // check for non-digit characters in string
            int notDigit = 0;
            for (int i = 0; i < input.length(); i++) {
                if (!(isdigit(input[i]))) {
                    notDigit++;
                }
            }
            // if no non-digit characters are present
            if (notDigit == 0) {
                validInt = true;
            }
            else {
                // clear buffer
                cin.clear();
                // clear and reset state of string stream
                ss.clear();
                ss.str("");
                cout << "Invalid input. Enter number of sodium (milligrams): " << endl;
                getline(cin, input);
                ss << input;
                ss >> sodium;
            }
        }
    }
    return sodium;
}

/* makeFoodSummaryFile adds nutrition data the file that shows the final nutrition summary */

void makeFoodSummaryFile(FoodSummary fs, string filename, ostream &outs, istream &ins) {
    // open csv file (will store nutrition data)
    ofstream summaryFile(filename);
    // add header to file
    summaryFile << "                        Your Nutrition Summary" << '\n' << '\n' ;

    // declare all variables that will be used
    string input;
    Meal breakfast;
    Meal lunch;
    Meal dinner;
    Meal snacks;
    int totalKcal;
    int totalCarb;
    int totalFat;
    int totalProtein;
    int totalSugar;
    int totalSodium;

    breakfast.setName("Breakfast");
    lunch.setName("Lunch");
    dinner.setName("Dinner");
    snacks.setName("Snacks");

    //retrieve general info from user
    int age = getAgeFromUser();
    // if user is under 18, exit program (all daily recommended intake values used in this program are calculated for adults)
    if (age < 18) {
        cout << "Sorry! This program does not offer nutritional tracking for those under the age of 18." << endl;
        return;
    }
    // write age into file
    summaryFile << "Age: " << age << endl;
    char gender = getGenderFromUser();
    // write gender into file
    summaryFile << "Gender: " << gender << endl << endl;

    // retrieve meal data from user
    outs << "Breakfast - Press 'A' to add food or any other key to skip: " << endl;
    getline(ins, input);

    while (input == "A" || input == "a") {
        // create individual food to add to meal
        Food food;
        food.setName(getFoodNameFromUser());
        food.setKcal(getKcalFromUser());
        food.setCarb(getCarbFromUser());
        food.setFat(getFatFromUser());
        food.setProtein(getProteinFromUser());
        food.setSugar(getSugarFromUser());
        food.setSodium(getSodiumFromUser());
        // add food to meal
        breakfast.addFood(food);

        ins.clear();
        // prompt to add new food
        outs << "Press 'A' to add another food or any other key to skip: " << endl;
        getline(ins, input);
    }

    outs << "Lunch - Press 'A' to add food or any other key to skip: " << endl;
    getline(ins, input);

    while (input == "A" || input == "a") {
        // create individual food to add to meal
        Food food;
        food.setName(getFoodNameFromUser());
        food.setKcal(getKcalFromUser());
        food.setCarb(getCarbFromUser());
        food.setFat(getFatFromUser());
        food.setProtein(getProteinFromUser());
        food.setSugar(getSugarFromUser());
        food.setSodium(getSodiumFromUser());
        // add food to meal
        lunch.addFood(food);

        ins.clear();
        // prompt to add new food
        outs << "Press 'A' to add another food or any other key to skip: " << endl;
        getline(ins, input);
    }

    outs << "Dinner - Press 'A' to add food or any other key to skip: " << endl;
    getline(ins, input);

    while (input == "A" || input == "a") {
        // create individual food to add to meal
        Food food;
        food.setName(getFoodNameFromUser());
        food.setKcal(getKcalFromUser());
        food.setCarb(getCarbFromUser());
        food.setFat(getFatFromUser());
        food.setProtein(getProteinFromUser());
        food.setSugar(getSugarFromUser());
        food.setSodium(getSodiumFromUser());
        // add food to meal
        dinner.addFood(food);

        ins.clear();
        // prompt to add new food
        outs << "Press 'A' to add another food or any other key to skip: " << endl;
        getline(ins, input);
    }

    outs << "Snacks - Press 'A' to add food or any other key to skip: " << endl;
    getline(ins, input);

    while (input == "A" || input == "a") {
        // create individual food to add to meal
        Food food;
        food.setName(getFoodNameFromUser());
        food.setKcal(getKcalFromUser());
        food.setCarb(getCarbFromUser());
        food.setFat(getFatFromUser());
        food.setProtein(getProteinFromUser());
        food.setSugar(getSugarFromUser());
        food.setSodium(getSodiumFromUser());
        // add food to meal
        snacks.addFood(food);

        ins.clear();
        // prompt to add new food
        outs << "Press 'A' to add another food or any other key to skip: " << endl;
        getline(ins, input);
    }

    // add meals to FoodSummary
    fs.addMeal(breakfast);
    fs.addMeal(lunch);
    fs.addMeal(dinner);
    fs.addMeal(snacks);

    // calculate totals for nutrients and micronutrients
    totalKcal = fs.getTotalKcal();
    totalCarb = fs.getTotalCarb();
    totalFat = fs.getTotalFat();
    totalProtein = fs.getTotalProtein();
    totalSugar = fs.getTotalSugar();
    totalSodium = fs.getTotalSodium();

    // print meal information and totals into summary file
    if (breakfast.getNumFoods() > 0) {
        summaryFile << breakfast;
    }
    if (lunch.getNumFoods() > 0) {
        summaryFile << lunch;
    }
    if (dinner.getNumFoods() > 0) {
        summaryFile << dinner;
    }
    if (snacks.getNumFoods() > 0) {
        summaryFile << snacks;
    }

    summaryFile << "Total Calories: " << totalKcal << endl;
    summaryFile << "Total Carbohydrates: " << totalCarb << " grams" << endl;
    summaryFile << "Total Fat: " << totalFat << " grams" << endl;
    summaryFile << "Total Protein: " << totalProtein << " grams" << endl;
    summaryFile << "Total Sugar: " << totalSugar << " grams" << endl;
    summaryFile << "Total Sodium: " << totalSodium << " milligrams" << endl;

    // set DRIs (daily recommended intakes)
    // DRIs retrieved from FDA and AHA websites
    int driKcal = 2000;
    int driSodium = 2300;

    int kcalDifference = (totalKcal - driKcal);
    int sodiumDifference = (totalSodium - driSodium);

    // print warning messages if necessary
    if (kcalDifference < 0) {
        summaryFile << endl << "Today, you were " << abs(kcalDifference) << " calories below the daily recommended intake of 2000 calories." << endl;
    }
    if (kcalDifference > 0) {
        summaryFile << endl << "Today, you were " << abs(kcalDifference) << " calories above the daily recommended intake of 2000 calories." << endl;
    }

    if (sodiumDifference > 0) {
        summaryFile << endl << "Your sodium intake was " << sodiumDifference << " milligrams over the daily recommended intake of 2300 milligrams." << endl;
        summaryFile << "Consider a diet lower in sodium to reduce the risk of high blood pressure and heart disease." << endl;
    }

    outs << "View NutritionSummary.txt to see your food log!";
    summaryFile.close();
}
