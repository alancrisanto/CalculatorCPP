#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::string;
using std::cin;

// using namespace std;

  // Function to add two numbers
  double add(double a, double b) {
      return a + b;
  }

  double subtract(double a, double b) {
      return a - b;
  };

  double multiply(double a, double b) {
      return a * b;
  };

  double divide(double a, double b) { 
    if (b == 0) {
      cout << "Cannot divide by zero" << endl;
      return 0;
    }
      return a / b;
  };

int main() {

  // Define Variables
  double num1, num2, result;
  char operation;
  char answer = 'y';

  cout << "------- Welcome to the Calculator -------" << endl;

  while (answer == 'y') {

    // Input first number
    cout << "Enter first Number: ";
    cin >> num1;

    // Input operation
    cout << "Enter Operation (+, -, *, /): ";
    cin >> operation;

    // Input second number
    cout << "Enter second Number: ";
    cin >> num2;

    // Calculate the result based on the operation
    switch (operation){
    case '+':
      result = add(num1, num2);
      break;
    case '-':
      result = subtract(num1, num2);
      break;
    case '*': 
      result = multiply(num1, num2);
      break;
    case '/':
      result = divide(num1, num2);
      break;
    default:
    cout << "Invalid operation" << endl;
      break;
    }

    // Output the result
    if (operation == '+' || operation == '-' || operation == '*' || (operation == '/' && num2 != 0)) {
          cout << "Result: " << result << endl;
      }

    // Ask the user if they want to continue
    cout << "Do you want to continue? (y/n): ";
    cin >> answer;
  }

    // Print the result goodbye message
    cout << "Thanks for using the Calculator. Goodbye! "<< endl;

    return 0;
}
