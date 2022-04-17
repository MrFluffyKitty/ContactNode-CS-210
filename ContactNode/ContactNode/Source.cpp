#include <iostream>
#include <string>
#include <vector>

#include "ContactNode.h"

int main() {
    const int CONTACTS = 3;
    std::vector<std::string> names(CONTACTS);
    std::vector<std::string> persons(CONTACTS);

    for (int i = 0; i < CONTACTS; i++) {
        std::cout << "Person " << i + 1 << "\nEnter name:\n";
        std::getline(std::cin, names.at(i));
        std::cout << "Enter phone number:\n";
        std::getline(std::cin, persons.at(i));
        std::cout << "You entered: " << names.at(i) << ", " << persons.at(i);
        std::cout << std::endl << std::endl;
    }

    ContactNode* headObj = nullptr;
    ContactNode* firstContact = nullptr;
    ContactNode* secondContact = nullptr;
    ContactNode* thirdContact = nullptr;
    ContactNode* currObj = nullptr;

    headObj = new ContactNode("1", "1");

    firstContact = new ContactNode(names.at(0), persons.at(0));
    headObj->InsertAfter(firstContact);
    secondContact = new ContactNode(names.at(1), persons.at(1));
    firstContact->InsertAfter(secondContact);
    thirdContact = new ContactNode(names.at(2), persons.at(2));
    secondContact->InsertAfter(thirdContact);

    std::cout << "CONTACT LIST\n";
    currObj = firstContact;
    while (currObj != nullptr) {
        currObj->PrintContactNode();
        std::cout << std::endl;
        currObj = currObj->GetNext();
    }
    return 0;
}
