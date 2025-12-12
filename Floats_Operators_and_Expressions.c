#include <iostream>

using namespace std;

int main(void) {
	float pi = 3.14159265359;
	float x,y;

	cout << "Enter value for x: ";
	cin >> x;

	y = x * x / (pi * pi * ((x * x + 0.5))) * (1 + x * x / (pi * pi * ((x * x - 0.5) * (x * x - 0.5))));

	cout << "y = " << y;
	return 0;
}

/*Take a look at the code in the editor - it reads a float value, puts it into a variable named *x* and prints the value of a variable named *y*. Your task is to complete the code in order to evaluate the following expression:

![image.png](attachment:454f3e60-cc2c-448b-8c75-99b5d4f15c24:image.png)

We expect the result to be assigned to *y*.

**Note:** we've prepared a variable containing the value of π. Use it.

Be careful! Watch the operators and keep their priorities in mind. Remember that classical algebraic notation likes to omit the multiplication operator – you need to use it explicitly.

Don't hesitate to use as many parentheses as you need. Keep your code clean and readable – surround the operators with spaces.

Use additional variables to shorten the expression.

Hint: multiply *x* by *x* to get *x* squared.

Test your code by using the data we've provided – don't be discouraged by any initial failures. Be persistent and inquisitive. Good luck!

## Sample Input

`1`

## Expected output

`y = 0.0949234`**Output**

## Sample Input

- `1.5`

## Expected output

`y = 0.0890702`**Output**

## Sample Input

`12.345`

## Expected output

`y = 0.101057`*/
