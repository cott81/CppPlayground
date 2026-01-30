#include <iostream>

// Template function to add two numbers of the same type
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Using the template function with integers
    int int_sum = add(5, 10);
    std::cout << "Sum of integers: " << int_sum << std::endl;

    // Using the template function with doubles
    double double_sum = add(2.5, 3.7);
    std::cout << "Sum of doubles: " << double_sum << std::endl;

    return 0;
}
