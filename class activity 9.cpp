#include <iostream>
#include <string>

int main(){
    std::string citizenship;
    char hasBachelorDegree;
    int yearsOfExperience;

    std::cout<<"Are you a US citizen? (yes/no):";
    std::cin>>citizenship;

    std::cout<<"Do you have a bachelor's degree?(y/n):";
    std::cin>> hasBachelorDegree;

    std::cout<<"How many years of experience do you have?";
    std::cin>>yearsOfExperience;

    if (citizenship=="yes"&&(hasBachelorDegree=='y'|| yearsOfExperience>=2)){
        std::cout<<"You are eligible for the job!"<<std::endl;
    } else {
        std::cout<<"You are not eligible for the job."<<std::endl;
    }
    return 0;
}