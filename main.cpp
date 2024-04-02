#include <iostream>

int main() {

    //variable declaration

    char
    agreement;
    std::string
    username,
    chosenClass;

    //welcome section

    std::cout << "Welcome to my first attempt to a RPG Game" << '\n';
    std::cout << '\n' << "Do you want to continue? (y/n)" << '\n';
    std::cin >> agreement;

    if(agreement == 'Y' || agreement == 'y'){
        //username request
        std::cout << '\n' << "I'm so glad, but first tell me your name adventurer:..." << '\n';
        std::cin >> username;
        std::cout << '\n' << "Nice to meet you " << username << "!" << '\n';

        //class choosing
        std::cout << "Well, "<< username << " what are you?" << '\n';
        std::cout << '\n' << "(Warrior)" << '\n';
        std::cout << '\n' << "(Thief)" << '\n';
        std::cout << '\n' << "(Wizard)" << '\n';
        std::cin >> chosenClass;
        std::cout << '\n' << "You certainly look like a "<< chosenClass << " , I only wish you well in your adventures!" << '\n';
        system("PAUSE");

    }
    else if(agreement == 'N' || agreement == 'n') {
    // :(
    std::cout << "Well then see you later!" << '\n';
    system("PAUSE");

    }

    //hope everything is fine
    return 0;
}