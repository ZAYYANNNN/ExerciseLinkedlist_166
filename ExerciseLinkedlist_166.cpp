#include <iostream>
#include <string>
using namespace std;
class Node {
public:
	int rollNumber;
	string name;
	Node* next;
	Node* zayyan;
	Node* izaaz;
	int rollno;
	
};
class CircularLinkedList {
private:
	Node* LAST;
	Node* zayyan;
public:
	CircularLinkedList() {
		LAST = NULL;
	}
	void addNode();
	bool search(int rollno, Node** izaaz, Node** zayyan);
	bool listEmpty();
	bool delNode();
	void traverse();
};
void CircularLinkedList::addNode() {	//menambahkan node baru atau beginning of the list
	Node* newNode = newNode;
	newNode = LAST->next;

	if (LAST == NULL) {
		LAST = newNode;
		newNode->next = newNode;
	}
	else {
		newNode->next = LAST->next;
		LAST->next = newNode;
	}
}
bool CircularLinkedList::search(int rollno, Node** izaaz, Node** zayyan) { //between node in the list
	Node* newNode = newNode;
	newNode->izaaz = NULL;

	if (LAST == NULL) {
		LAST = newNode;
		newNode->izaaz = NULL;
	}
	else {
		Node* zayyan = LAST->next;
		Node* izaaz = NULL;

		do {
			Node* izaaz = zayyan;
			Node* zayyan = zayyan->next;
		} while (zayyan != LAST->next && zayyan->rollno < newNode->rollno);
	}
	Node* izaaz->Node* next = newNode;
	newNode->next = zayyan;

	if (zayyan == LAST->next) {
		LAST = newNode;
	}
}
	

		
bool CircularLinkedList::listEmpty() {
		return LAST == NULL;
	}
	bool CircularLinkedList::delNode() { //Menghapus node atau dellNode
	}
	void CircularLinkedList::traverse() {
		if (listEmpty()) {
			cout << "\nList is empty\n";
		}
		else {
			cout << "\nRecords in the list are:\n";
			Node* currentNode = LAST->next;
			while (currentNode != LAST) {
				cout << currentNode->rollNumber << " " << currentNode->name << endl;
				currentNode = currentNode->next;
			}
			cout << LAST->rollNumber << " " << LAST->name << endl;
		}
	}
	int main() {
		CircularLinkedList obj;
		while (true) {
			try {
				cout << "\nMenu" << endl;
				cout << "1. Add a record to the list" << endl;
				cout << "2. Delete a record from the list" << endl;
				cout << "3. View all the records in the list" << endl;
				cout << "4. Exit" << endl;
				cout << "\nEnter your choice (1-5): ";
				char ch;
				cin >> ch;
				switch (ch) {
				case '1': {
					obj.addNode();
				}
				case '2': {
					obj.delNode();
				}
				case '3': {
					obj.traverse();
					break;
				}
				case '4': {
					return 0;
				}
				default: {
					cout << "Invalid option" << endl;
					break;
				}
				}
			}
			catch (exception& e) {
				cout << e.what() << endl;
			}
		}
		return 0;
	}