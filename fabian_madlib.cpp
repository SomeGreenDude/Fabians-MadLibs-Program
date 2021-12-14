#include <iostream>
#include <string>
#include <limits>

/*
Fabian Hernandez-Angel
Mad Libs Program

Micheal Landes CSCI 151 Fall
*/

int main(){
    // "name" was a "profession" who "action" in "location", they "actionTwo" a "noun" that "result" "issue" and "result" a "topic" reward!
    
    std::cout << "Give me a name:";
    std::string name;
    std::cin >> name;

    std::cout << "Give me a profession: ";
    std::string profession;
    std::cin >> profession;

    std::cout << "Give me an action: ";
    std::string action;
    std::cin >> action;

    std::cout << "Give me a location: ";
    std::string location;
    std::cin >> location;

    std::cout << "Give me an action: ";
    std::string actionTwo;
    std::cin >> actionTwo;

    std::cout << "Give me a proper noun: ";
    std::string proporNoun;
    std::cin >> proporNoun;

    std::cout << "Give me a result: ";
    std::string result;
    std::cin >> result;

    std::cout << "Give me an issue: ";
    std::string issue;
    std::cin >> issue;

    std::cout << "Give me a result: ";
    std::string resultTwo;
    std::cin >> resultTwo;

    std::cout << "Give me a noun: ";
    std::string topic;
    std::cin >> topic;

    std::cout << "RESULT: \n \n";

    std::cout << name << " was a " << profession << " who " << action << " in " << location << ", they " << actionTwo << " a " << proporNoun << " that " << result << " " << issue << " and " << resultTwo << " a " << topic << " reward! \n";

    std::cout << "\n";

    std::cout << "Mad lib program by Fabian Hernandez-Angel \n";
    
    std::cout << "Hit enter after typing something when you're ready to close \n";
    char c;
    std::cin >> c;

    return 0;
}
