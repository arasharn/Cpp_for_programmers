/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

#include<iostream>
#include<string>
#include <sstream>

int main()
{
    // Defining the variables
    std::string stringLength, stringWidth;
    float length, width, area;
    
    // Reading the length
    std::cout<<"How long is the room?";
    std::getline(std::cin,stringLength);
    
    std::stringstream(stringLength)>>length;
    std::cout<<"\nlenght: "<<length;
    
    // Reading the width
    std::cout<<"\nHow wide is the room?";
    std::getline(std::cin,stringWidth);
    
    std::stringstream(stringWidth)>>width;
    std::cout<<"\nlenght: "<<width;
    
    // Calculating the area
    area = length*width;
    
    std::cout<<"\nThe calculated area is: "<<area;
    
    return 0;
}
