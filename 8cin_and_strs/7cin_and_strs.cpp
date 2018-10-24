#include<iostream>
#include<string>

int main()
{
    std::string name1, address1, phoneNo1;
    std::string name2, address2, phoneNo2;
    
    // User1 information
    std::cout<<"Name for User1";
    std::getline(std::cin, name1);

    std::cout<<"Address for User1";
    std::getline(std::cin, address1);

    std::cout<<"Phone number for User1";
    std::getline(std::cin, phoneNo1);

    // User2 information
    std::cout<<"Name for User2";
    std::getline(std::cin, name2);

    std::cout<<"Address for User2";
    std::getline(std::cin, address2);

    std::cout<<"Phone number for User2";
    std::getline(std::cin, phoneNo2);

    //print information
    std::cout<<"\n\n"<<name1<<"\n";
    std::cout<<"\t\t"<<address1<<"\n";
    std::cout<<"\t\t"<<phoneNo1<<"\n";

    std::cout<<"\n\n"<<name2<<"\n";
    std::cout<<"\t\t"<<address2<<"\n";
    std::cout<<"\t\t"<<phoneNo2<<"\n";  

return 0;
}
