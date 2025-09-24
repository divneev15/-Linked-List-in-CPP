// Name: Divneev Singh
// PRN: 24070123043
// Branch: EnTC A2

#include <iostream>
using namespace std;

class Node {
public:
    char val;
    Node* next;

    Node(char data) {
        val = data;
        next = NULL;
    }
};

int main() {
    Node* n1 = new Node('10');
    Node* n2 = new Node('20');
    Node* n3 = new Node('30');

    // Linking nodes
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    // Traversing and printing
    Node* temp = n1;
    while (temp != NULL) {
        cout << temp->val << "\n";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}

/*
SAMPLE OUTPUT ::

10
20
30
*/
