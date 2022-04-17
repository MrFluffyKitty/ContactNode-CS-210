#include <iostream>
#include <string>

#include "ContactNode.h"

// constructor
ContactNode::ContactNode(std::string name, std::string phone, ContactNode* nextLoc) {
	contactName = name;
	contactPhoneNum = phone;
	nextNodePtr = nextLoc;
}

// insert after
void ContactNode::InsertAfter(ContactNode* nodeLoc) {
	ContactNode* tmpNext = nullptr;

	tmpNext = this->nextNodePtr;
	this->nextNodePtr = nodeLoc;
	nodeLoc->nextNodePtr = tmpNext;
}

// getters and setters
std::string ContactNode::GetName() {
	return contactName;
}

std::string ContactNode::GetPhoneNumber() {
	return contactPhoneNum;
}

ContactNode* ContactNode::GetNext() {
	return this->nextNodePtr;
}

void ContactNode::PrintContactNode() {
	std::cout << "Name: " << this->GetName() << std::endl;
	std::cout << "Phone number: " << this->GetPhoneNumber() << std::endl;
}