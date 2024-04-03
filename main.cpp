#include <iostream>

int main() {

    //variable declaration
    int
    chosenClass,
    statsHealth,
    statsStamina,
    statsMagicka;
    char
    agreement,
    battleAgreement;
    std::string
    username,
    chosenClassStr;

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
        std::cout << '\n' << "1. Warrior" << '\n';
        std::cout << '\n' << "2. Thief" << '\n';
        std::cout << '\n' << "3. Wizard" << '\n';
        std::cin >> chosenClass;

        switch(chosenClass){
            case 1:
                chosenClass = 1;
                chosenClassStr = "warrior";

                //stats
                statsHealth = 200;
                statsStamina = 150;
                statsMagicka = 100;   
                break;
            case 2:
                chosenClass = 2;
                chosenClassStr = "thief";

                //stats
                statsHealth = 150;
                statsStamina = 200;
                statsMagicka = 100;  
                break;
            case 3:
                chosenClass = 3;
                chosenClassStr = "wizard";

                //stats
                statsHealth = 100;
                statsStamina = 150;
                statsMagicka = 200;  
                break;
            default:
                std::cout << '\n' << "Choose one of the shown numbers!" << '\n';
        }

        std::cout << '\n' << "You certainly look like a "<< chosenClassStr << " , I only wish you well in your adventures!" << '\n';
        system("PAUSE");

        //stats revealing
        std::cout << '\n'  << "Stats:" << '\n';
        std::cout << '\n' << "Health: "<< statsHealth << '\n';
        std::cout << '\n' << "Stamina: "<< statsStamina << '\n';
        std::cout << '\n' << "Magicka: "<< statsMagicka << '\n';
        system("PAUSE");


        //dungeon01
        std::cout << '\n' << "You wake up in a dungeon..." << '\n';
        std::cout << '\n' << "In front of you stands a knight who challenges you to a battle..." << '\n';

        std::cout << '\n' << "Do you accept his challenge? (y/n)" << '\n';
        std::cin >> battleAgreement;

        if(battleAgreement == 'y' || battleAgreement == 'Y'){
            std::cout << '\n' << "You stand up..." << '\n';
            system("PAUSE");
        }
        else{
            do{
            std::cout << '\n' << "He stabs you with his sword, laughing at you..." << '\n';

            //dead
            std::cout << '\n' << "---DEAD---" << '\n';

            std::cout << '\n' << "Do you accept his challenge? (y/n)" << '\n';
            std::cin >> battleAgreement;

        }while(battleAgreement == 'n' || battleAgreement == 'N');
        system("PAUSE");
        }

        std::cout << '\n' << "You defeat him with a single slash..." << '\n';
        system("PAUSE");




    // :(
    }
    else if(agreement == 'N' || agreement == 'n') {
    std::cout << "Well then see you later!" << '\n';
    system("PAUSE");

    }

    //hope everything is fine
    return 0;
}