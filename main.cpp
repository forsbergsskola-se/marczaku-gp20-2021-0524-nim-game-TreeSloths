
#include <iostream>

int main() {
    int numberOfMatches = 25;
    int assingedNumber;
    bool playerTurn;

    while(numberOfMatches != 0) {
        std::cout << "Please assign a number 1,2,3"<< std::endl;
        std::cin >> assingedNumber;
        playerTurn = true;
        if(assingedNumber > 3) {
            std::cout << "You cannot draw more than 3 matches!" << std::endl;
        } else if (assingedNumber > numberOfMatches) {
            std::cout << "Number greater than the amount of matches left!" << std::endl;
        } else {
            numberOfMatches = numberOfMatches - assingedNumber;
            if(numberOfMatches != 0) {
                numberOfMatches = numberOfMatches - 1;
                playerTurn = false;
            }
            std::cout << "Number of matches left: " << numberOfMatches << std::endl;
            for(int i = 0; i < numberOfMatches; i++) {
                std::cout << "|";
            }
            std::cout << std::endl;
            std::cout << std::endl;
        }
        if(playerTurn && numberOfMatches == 0) {
            std::cout << "Player win" << std::endl;
        } else if(!playerTurn && numberOfMatches == 0){
            std::cout << "AI win" << std::endl;
        }
    }
}



