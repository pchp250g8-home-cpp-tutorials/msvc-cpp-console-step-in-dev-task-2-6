#include <iostream>

int main(int args, char* argv[])
{
    unsigned int n; // the number whose "root" is to be found.
    unsigned int m; // the "root" of the number.
    std::cout << "Enter a number: ";
    std::cin >> n;
    m = n; // Initial value for the "root" of the number
    while (m > 9)  // Outer loop: repeat until the number becomes a single digit
    {
        unsigned int s = 0; // Sum of the digits of the number
        while (m > 0)  // Inner loop: repeat while the number is greater than zero
        {
            s = s + m % 10; // Calculate the sum of the digits. 
            m = m / 10; // Reduce the number by a factor of 10.
        }
        m = s; // Intermediate value for the "root" of the number
    }
    // Display the original number and its "root"
    std::cout << "The \"root\" of the number " << n << " is " << m << "\r\n";
    // Pause the output until the "Enter" key is pressed
    std::cin.ignore();
    std::cin.get();
    return 0;
}
