#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main() {
    // -------------------------------
    // 1. Basic Output
    // -------------------------------
    cout << "===== Basic Output =====\n";
    cout << "hello \nworld\n";          // Using '\n' for newline
    cout << "hello" << endl << "world" << endl; // Using 'endl' for newline
    cout << "\\" << endl;              // Printing a backslash (escaped with '\\')

    // -------------------------------
    // 2. Arithmetic Operations
    // -------------------------------
    cout << "\n===== Arithmetic Operations =====\n";
    cout << "19 + 5 = " << 19 + 5 << endl;   // Addition
    cout << "19 - 5 = " << 19 - 5 << endl;   // Subtraction
    cout << "19 * 5 = " << 19 * 5 << endl;   // Multiplication
    cout << "19 / 5 = " << 19 / 5 << endl;   // Integer division (truncates decimal part)
    cout << "19.0 / 5.0 = " << 19.0 / 5 << endl; // Floating-point division (shows decimal result)
    cout << "19 % 5 = " << 19 % 5 << endl;   // Modulus (remainder of division)

    // Operator Precedence (BODMAS)
    cout << "19 + 5 * 4 % 3 = " << 19 + 5 * 4 % 3 << endl;
    cout << "10 - 3 * 3 = " << 10 - 3 * 3 << endl;

    // -------------------------------
    // 3. Variables and Assignment
    // -------------------------------
    cout << "\n===== Variables & Assignment =====\n";
    int a = 10;                
    cout << "Initial value of a = " << a << endl;
    
    a += 20;                  
    cout << "New value of a = " << a << endl;

    // -------------------------------
    // 4. Data Types & Memory Usage
    // -------------------------------
    cout << "\n===== Data Types & Memory Usage =====\n";
    double b = 10.5;
    char c = 'X';
    bool isTrue = true;
    string name = "Alice";

    cout << "Size of int: " << sizeof(a) << " bytes\n";
    cout << "Size of double: " << sizeof(b) << " bytes\n";
    cout << "Size of char: " << sizeof(c) << " bytes\n";
    cout << "Size of bool: " << sizeof(isTrue) << " bytes\n";
    cout << "Size of string: " << sizeof(name) << " bytes\n";

    // -------------------------------
    // 5. Operators & Type Casting
    // -------------------------------
    cout << "\n===== Operators & Type Casting =====\n";
    
    int x = 5, y = 2;
    cout << "5 / 2 (Integer Division) = " << x / y << endl;
    cout << "5 / 2.0 (Floating Division) = " << x / 2.0 << endl;

    int num = 65;
    char ch = static_cast<char>(num); // Typecasting int to char
    cout << "ASCII 65 converted to char: " << ch << endl;

    // -------------------------------
    // 6. Control Flow (If-Else, Switch)
    // -------------------------------
    cout << "\n===== If-Else & Switch Statements =====\n";

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "You are a minor.\n";
    } else if (age >= 18 && age < 60) {
        cout << "You are an adult.\n";
    } else {
        cout << "You are a senior citizen.\n";
    }

    // Switch-case example
    int day = 2;
    switch (day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        default: cout << "Other day\n"; break;
    }

    // -------------------------------
    // 7. Loops (For, While, Do-While)
    // -------------------------------
    cout << "\n===== Loops (For, While, Do-While) =====\n";

    cout << "For Loop: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "While Loop: ";
    int counter = 1;
    while (counter <= 5) {
        cout << counter << " ";
        counter++;
    }
    cout << endl;

    cout << "Do-While Loop: ";
    int n = 1;
    do {
        cout << n << " ";
        n++;
    } while (n <= 5);
    cout << endl;

    // -------------------------------
    // 8. Arrays & Vectors
    // -------------------------------
    cout << "\n===== Arrays & Vectors =====\n";

    int arr[5] = {10, 20, 30, 40, 50}; // Fixed-size array
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> v = {1, 2, 3, 4, 5}; // Dynamic array (vector)
    v.push_back(6);
    cout << "Vector elements: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Vector Size: " << v.size() << endl;
    cout << "Vector Front: " << v.front() << ", Vector Back: " << v.back() << endl;
    v.pop_back();
    cout << "After pop_back, last element: " << v.back() << endl;

    // -------------------------------
    // 9. getline, stringstream, flush, tie()
    // -------------------------------
    cout << "\n===== getline, stringstream, flush, tie() =====\n";

    cin.ignore(); // Clear input buffer before using getline
    string fullName;
    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "Your name: " << fullName << endl;

    // stringstream example (for breaking string into words)
    stringstream ss("C++ is fun");
    string word;
    while (ss >> word) {
        cout << word << endl;
    }

    // flush example
    cout << "This is a flush test" << flush;

    // tie() example
    ios::sync_with_stdio(false); // Untie cin from cout for faster I/O
    cin.tie(NULL);

    // -------------------------------
    // End of Program
    // -------------------------------
    cout << "\n===== Program Ended Successfully! =====\n";

    return 0;
}
