#include <iostream>
#include <array>

void crackTheCodingInterview();

/*
 * One algorithmic challenge a day. One hour of C++ a day until I'm ready :).
 */
int main() {
    crackTheCodingInterview();
    return 0;
}


bool hasNoRemainder(int i, int r) {
    return i % r == 0;
}

// Day 1: Fizz Buzz.
std::string fizzBuzz(int i) {
    return hasNoRemainder(i, 3) ? "Fizz" : "Buzz";
}

/***
 * Day 2: Sliding window addition of arrays.
 * In C++ Arrays have a fixed size which is part of the type. The template is a macro which generates a new version of the method for every combination of the template parameters applicable at compile time.
 * As a result the template does not work at runtime, the parameters must be known at compile time. If a dynamically sized array is required, then std::vector could be used.
 **/
template<std::size_t size>
int slidingAddition(int windowSize, std::array<int, size> array) {
    if (windowSize <= 0) {
        return 0;
    }
    // For each item in the array,
    // Begin a for loop consuming and adding up integers.
    // Swap the positions of the array i.e. i = j and j = i. (so if we consume 3 elem from i using j we resume from j).
    int addedValue = 0;
    for (int i = 0; i < size; i++) {
        int j = i;
        for (; (j < size) or (j < windowSize); j++) {
            addedValue = array[j] + addedValue;
        }
        i = j;
    }
    return addedValue;
}

// Day 3 TBD.

// Main function.
void crackTheCodingInterview() {
    using namespace std;
    // Simple Fizz Buzz
    cout << fizzBuzz(1) << endl;
    // Add up every number in a sliding window of variables (adding up each time).
    // In C versions lower than 17 you need to initialise the array with the type and size.
    // In C 17 the array size and data-type will be determined at compile time./
    array arr = {1, 2, 3, 4};
    cout << slidingAddition(2, arr) << endl;
}



