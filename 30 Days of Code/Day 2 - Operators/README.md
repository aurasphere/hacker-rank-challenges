# Objective 
In this challenge, you'll work with arithmetic operators. Check out the <a href="https://www.hackerrank.com/challenges/30-operators/tutorial">Tutorial</a> tab for learning materials and an instructional video!

# Task 
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.

<b>Note</b>: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result!

# Input Format

There are <code>3</code> lines of numeric input: 

 - The first line has a double, <code>mealCost</code>(the cost of the meal before tax and tip). 
 - The second line has an integer, <code>tipPercent</code>(the percentage of <code>mealCost</code> being added as tip). 
 - The third line has an integer, <code>taxPercent</code>(the percentage of <code>mealCost</code> being added as tax).

# Output Format

Print <code>The total meal cost is totalCost dollars.</code>, where <code>totalCost</code> is the rounded integer result of the entire bill ( with added tax and tip).

# Sample Input

    12.00
    20
    8
    
# Sample Output

    The total meal cost is 15 dollars.

# Explanation

## Given: 

    mealCost = 12
    tipPercent = 20
    taxPercent = 8

## Calculations: 
 
    tip = 12 x 20/100 = 2.4
    tax = 12 x 8/100 = 0.96
    totalCost = mealCost + tip + tax = 12 + 2.4 + 0.96 = 15.36
    round(totalCost) = 15

We round <code>totalCost</code> to the nearest dollar (integer) and then print our result:

    The total meal cost is 15 dollars.
    
# Link

https://www.hackerrank.com/challenges/30-operators/problem
