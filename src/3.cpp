// FinalProject.cpp

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    // Generate a random number between 1 and 6
    int randomNumber = rand() % 6 + 1;

    // Print the result
    cout << "The random number is: " << randomNumber << endl;

    return 0;
}
