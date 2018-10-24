/*Fix the errors and get an error free compilation and execution.*/

// Bug: #include<input.txt>
#include<iostream>
#include<string>
#include<sstream>
#include <cmath>

// Bug: void main()
int main()
{
    // Bug: int coEff1, coEff2, constant;
    int coeff1, coeff2, constant;
    int exp1, exp2;
    int y;
    int x;
    
    //Calculate the value of y for a user defined three term polynomial
    //Get the coefficients, exponents, and the constants
    
    // Bug: std::cout>>"What is the first coefficient?";
    std::cout<<"What is the first coefficient?";
    
    // Bug: std::cin<<coeff1;
    std::cin>>coeff1;
    
    // Bug: std::cout<<coeff1<<\n";
    std::cout<<coeff1<<"\n";
    
    std::cout<<"What is the exponent of the first term?";
    std::cin>>exp1;
    std::cout<<exp1<<"\n";
    std::cout<<"What is the second coefficient?";
    std::cin>>coeff2;
    
    // Bug: std::cout<<coeff2<<"\n":
    std::cout<<coeff2<<"\n";
    
    std::cout<<"What is the exponent of the second term?";
    std::cin>>exp2;
    std::cout<<exp2<<"n";
    std::cout<<"What is the constant?";
    
    // Bug: std::cin>>>constant;
    std::cin>>constant;
    
    std::cout<<constant<<"\n";
    //Print the complete equation
    std::cout<<"The polynomial we are solving is:\n";
    
    // Bug: std::cout<<"\t"<<coeff1<<"*x^exp1<<" + "<<coEff2<<"*x^"<<exp2<<"+ "<<constant;
    std::cout<<"\t"<<coeff1<<"*x^exp1"<<" + "<<coeff2<<"*x^"<<exp2<<"+ "<<constant;
    
    std::cout<<"\nWhat is the value of x?";
    std::cin>>x;
    std::cout<<x<<"\n";
    //Solve the equation with the given x
    
    // Bug: y = coeff1*power(x,Exp1) + coeff2*power(x,exp2);    
    y = coeff1*pow(x,exp1) + coeff2*pow(x,exp2) + constant;
    
    // Bug: std::cout<<"y = "<<coeff1<<"*"<<x<<"^"<<exp1<<" + "<<coeff2<<"*"<<x<<"^"<<exp2 + <<constant<<" = "<<y;
    std::cout<<"y = "<<coeff1<<"*"<<x<<"^"<<exp1<<" + "<<coeff2<<"*"<<x<<"^"<<exp2<< "+" <<constant<<" = "<<y;
    return 0;
}
