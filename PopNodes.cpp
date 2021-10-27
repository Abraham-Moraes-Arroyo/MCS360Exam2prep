#include<iostream>

using namespace std;

struct Node {
  int n;      // an integer, the type of data we store
  Node *previous; //pointer to the previous node
};

class LinkedList {
    private:
    Node *head;    // this private member variable is just a pointer to the first Node

   public:
   LinkedList(){    //constructor
     head = NULL;  // set the head pointer to NULL value
    }
    
    // This function prepends a new value at the beginning of the list
    void insert_node(int value) {
        Node *new_node = new Node();    // create a new Node
        new_node->n = value;            // set its value
        new_node->previous = head;          // make the node pointer point to the previous node.
        head = new_node;                // make the head pointer point at the new node.
    }

    void show() {
         Node *new_node;
         new_node = head;
         while (new_node != NULL){
           // here we show current node's data, its address (for illustration purpose), and the address of the previous node
           // recall: every node carries the address of the previous node
           cout << "->" << "[ " << new_node->n<< " | " << new_node << " | " << new_node->previous << " ]";
           new_node = new_node->previous;      
         }
         cout << endl;
    }

    // This function returns the value from the back of the list, and deletes the node
    int pop() {            
        int r;             // value to be returned
        Node *new_node = head;
        if (head == NULL) // if head already points to NULL, return some special integer (like -1) to avoid segmentation fault; 
           return -1;
        r = new_node->n;
        head = head->previous;
        delete new_node;
        return r;
    }

};

int main() {
    LinkedList L;  //creating an empty linked list

    L.insert_node(1);
    L.insert_node(2);
    L.insert_node(4);
    L.insert_node(8);
    cout <<"This is the linked list with the 4 elements that we inserted"<<endl;
    L.show();
    cout << L.pop() << endl;
    cout << L.pop() << endl;
    cout << L.pop() << endl;
    cout << L.pop() << endl;
    cout << L.pop() << endl;  // here we attempt to return a value from an already empty list and we see -1 being returned
    return 0;
}
