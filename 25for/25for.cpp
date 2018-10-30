/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

int main()
{
    int number;
    int sum = 0;
    
    for (int i = 0; i < 5; i++){
        if (i == 1){
            std::cout << "Start entering the numbers\n";
        }
        std::cin >> number;
        sum = sum + number;
        
        std::cout << "Enter the next number\n";

    }
    
    std::cout << "Summation is: " << sum<< "\n";
    std::cout << "Average is: " << sum/5;
    
    return 0;
}
