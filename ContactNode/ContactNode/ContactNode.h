#ifndef ContactNode_H
#define ContactNode_H

#include <iostream>
#include <string>

class ContactNode {
public:
	ContactNode(std::string name, std::string phone, ContactNode* nextLoc = nullptr);
	void InsertAfter(ContactNode* nodeLoc);
	std::string GetName();
	std::string GetPhoneNumber();
	ContactNode* GetNext();
	void PrintContactNode();
private:
	std::string contactName;
	std::string contactPhoneNum;
	ContactNode* nextNodePtr;
};

#endif