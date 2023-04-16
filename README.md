# Nutrition-Tracker-Application

Languages used: C++

Program Objectives:
-Track one’s daily nutrient intake
-Compare to the recommended nutrient guidelines
-Give recommendations based on nutrient deficiencies / excess nutrient intake. 

The user will enter their age (to confirm that they are an adult - this program will use recommended intakes for people over 18) and gender
(can skip if they prefer not to answer). Then, the user will be prompted for what they ate for each meal (breakfast, lunch, dinner, then snacks). 
If the user did not eat a particular meal, they can skip entering the data for said meal, and the program will automatically continue to the next
meal. When prompted to add meal information, the user will add a food, followed by the essential nutrition information: calories (kcal), carbs 
(grams), fat (grams), protein (grams), sugar (grams), sodium (milligrams). The user will have the option to add multiple foods to each meal. 
After all meals and foods have been entered, the program will add the data to a .txt file displaying the user’s daily nutrition summary. 
Each individual meal and food within each meal will be displayed.
The totals for the full day of eating will be displayed, with comparisons to the daily recommended intake for some nutrients.

This project utilizes the concepts of component relationships and file output. For example, the FoodSummary class HAS Meals,
and the Meal class HAS Foods. The has-a relationship of these objects is essential to the formation of my program. All data
taken from the user is put into a .txt file, which allows for easy viewing of the user's daily food log. 
