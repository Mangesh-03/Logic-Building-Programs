# C++ Array Operations using Object-Oriented Programming

This project is a command-line application written in C++ that demonstrates fundamental object-oriented principles. It implements a dynamic array with various methods for searching, data analysis, and manipulation. The program showcases concepts like inheritance, encapsulation, and dynamic memory management through a base `Array` class and a derived `ArrSearch` class.

## Features

- **Dynamic Array**: Creates an integer array of a user-specified size.
- **Data Input/Output**: Accepts integer values from the user and displays them.
- **Frequency Count**: Counts the total number of times a specific element appears in the array.
- **Element Searching**: Finds the first and last position (1-based index) of a given element.
- **Content Analysis**: Counts the total number of even and odd elements.
- **Summation**: Calculates the sum of all elements in the array.

## Example

**Here is a sample of the program's execution flow:**
Enter the number of element you want to store :
5
Please enter the values
11 20 35 20 40
Elements are
11 20 35 20 40

Enter number whose frequency you want to find :
20
Frequency is : 2

Enter number whose first occurance you want to find :
20
First occurance is : 2

Enter number whose last occurance you want to find :
20
Last occurance is : 4

Even count is : 2
odd count is : 3
Sum of all element is : 126

text

## How It Works
The program is built around two classes to separate concerns and demonstrate inheritance:
- **`Array` Class**: This is the base class responsible for core array management. It handles dynamic memory allocation in its constructor, ensures proper memory deallocation in its destructor, and provides a deep-copying copy constructor.
- **`ArrSearch` Class**: This class inherits publicly from the `Array` class. It extends functionality by adding methods for searching (`SearchFirst`, `SearchLast`), counting (`Frequency`, `EvenCount`, `OddCount`), and aggregation (`SumAll`).

## File Structure
- `Application.cpp`: Contains the implementation for the `Array` and `ArrSearch` classes, along with the `main` function.

## Compilation & Execution
1.  **Compile:**
    ```
    g++ Application.cpp -o MyArrayApp
    ```
2.  **Run:**
    ```
    ./MyArrayApp
    ```

## Functions
- `Array(int value)`: Constructor that allocates memory for an integer array.
- `Array(Array &ref)`: Copy constructor that performs a deep copy.
- `~Array()`: Destructor that frees dynamically allocated memory.
- `Accept()`: Prompts the user to enter values for the array.
- `Display()`: Prints all elements of the array.
- `ArrSearch(int no)`: Constructor that initializes the base `Array` class.
- `int Frequency(int)`: Returns the total count of a given value.
- `int SearchFirst(int)`: Returns the 1-based index of the first occurrence of a value.
- `int SearchLast(int)`: Returns the 1-based index of the last occurrence of a value.
- `int EvenCount()`: Returns the total number of even elements.
- `int OddCount()`: Returns the total number of odd elements.
- `int SumAll()`: Returns the sum of all elements.

## Author
- Mangesh Ashok Bedre