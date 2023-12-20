// This C++ program demonstrates the use of the `getline()` function and the `stringstream` class to tokenize a string. Let's break down the code step by step://
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;

    // Get a line of input from the user
    getline(cin, S);

    // Create a stringstream object 'X' and initialize it with the input string 'S'
    stringstream X(S);

    // Use getline on the stringstream 'X' to tokenize the string using ' ' (space) as the delimiter
    while (getline(X, T, ' ')) {
        // Output each token (word) on a new line
        cout << T << endl;
    }
    
    return 0;
}

/*

Explanation:

1. **Header Files**: The program includes the necessary header file `<bits/stdc++.h>` which includes most of the standard C++ headers.

2. **Variable Declarations**: Two strings are declared, `S` to store the input line, and `T` to store each token (word).

3. **User Input**: The program uses `getline(cin, S);` to get a line of input from the user and stores it in the string `S`.

4. **Stringstream Initialization**: A `stringstream` object named `X` is created and initialized with the string `S`. This allows the program to treat the string as a stream, making it easy to extract individual tokens.

5. **Tokenization with getline**: The `while` loop uses `getline(X, T, ' ')` to tokenize the string `S` using space (' ') as the delimiter. Each token is stored in the string `T`.

6. **Output**: The program then outputs each token (word) on a new line using `cout << T << endl;`.

Here's how the program works with an example:

- **Input**: "Hello World C++ Program"
- **Output**:
  ```
  Hello
  World
  C++
  Program
  ```

Each word from the input string is extracted and printed on a new line. The `stringstream` and `getline()` combination is a convenient way to split a string into tokens based on a specified delimiter.

*/
