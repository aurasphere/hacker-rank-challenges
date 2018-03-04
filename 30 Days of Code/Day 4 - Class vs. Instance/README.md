# Objective 
In this challenge, we're going to learn about the difference between a class and an instance; because this is an Object Oriented concept, it's only enabled in certain languages. Check out the <a href="https://www.hackerrank.com/challenges/30-class-vs-instance/tutorial">Tutorial</a> tab for learning materials and an instructional video!

# Task 
Write a Person class with an instance variable, <code>age</code>, and a constructor that takes an integer, <code>initialAge</code>, as a parameter. The constructor must assign <code>initialAge</code> to <code>age</code> after confirming the argument passed as <code>initialAge</code> is not negative; if a negative argument is passed as <code>initialAge</code>, the constructor should set <code>age</code> to <code>0</code> and print <code>Age is not valid, setting age to 0.</code>. In addition, you must write the following instance methods:

 1. <code>yearPasses()</code> should increase the <code>age</code> instance variable by <code>1</code>.
 2. <code>amIOld()</code> should perform the following conditional actions:
     - If <code>age < 13</code>, print <code>You are young.</code>.
     - If <code>age >= 13</code> and <code>age < 18</code>, print <code>You are a teenager.</code>.
     - Otherwise, print <code>You are old.</code>.

To help you learn by example and complete this challenge, much of the code is provided for you, but you'll be writing everything in the future. The code that creates each instance of your Person class is in the main method. Don't worry if you don't understand it all quite yet!

**Note**: Do not remove or alter the stub code in the editor.

# Input Format

Input is handled for you by the stub code in the editor.

The first line contains an integer, <code>T</code>(the number of test cases), and the <code>T</code> subsequent lines each contain an integer denoting the <code>age</code> of a Person instance.

# Constraints

    1 <= T <= 4
    -5 <= age <= 30

# Output Format

Complete the method definitions provided in the editor so they meet the specifications outlined above; the code to test your work is already in the editor. If your methods are implemented correctly, each test case will print <code>2</code> or <code>3</code> lines (depending on whether or not a valid <code>initialAge</code> was passed to the constructor).

## Sample Input

    4
    -1
    10
    16
    18
    
## Sample Output

    Age is not valid, setting age to 0.
    You are young.
    You are young.

    You are young.
    You are a teenager.

    You are a teenager.
    You are old.

    You are old.
    You are old.

# Explanation

## Test Case 0:  
Because <code>initialAge < 0</code>, our code must set <code>age</code> to <code>0</code> and print the "Age is not valid..." message followed by the young message. Three years pass and <code>age = 3</code>, so we print the young message again.

## Test Case 1:  
Because <code>initialAge < 13</code>, our code should print that the person is young. Three years pass and <code>age = 13</code>, so we print that the person is now a teenager.

## Test Case 2:  
Because <code>13 <= initialAge < 18</code>, our code should print that the person is a teenager. Three years pass and <code>age = 19</code>, so we print that the person is old.

## Test Case 3:  
Because <code>initialAge >= 18</code>, our code should print that the person is old. Three years pass and the person is still old at <code>age = 21</code>, so we print the old message again.

**The extra line at the end of the output is supposed to be there and is trimmed before being compared against the test case's expected output. If you're failing this challenge, check your logic and review your print statements for spelling errors.**

# Link

https://www.hackerrank.com/challenges/30-class-vs-instance/problem
