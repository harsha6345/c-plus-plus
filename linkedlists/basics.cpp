#include <iostream>
using namespace std;

class Node
{
public:
    int data = 30;
    Node *next = nullptr;
};

int main()
{
    Node node;                 // Create an instance of the Node class
    cout << node.data << endl; // Access the 'data' member of the Node object
    return 0;
}
