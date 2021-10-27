#include <iostream>
using namespace std; 
struct Node{
    int n; // an integer, the type of data we store
    Node *previous; // pointer to the previous node
};

class LinkedList{
    private:
        Node *head;// this private member variable is just a pointer to the first Node
    public:
        LinkedList(){ // constructor
            head=NULL;// set the head poitner to NULL value
        }
    // this function prepends a new value at the beginning of the list
    void insert_node(int value){
        Node *new_node=new Node(); // create a new Node
        new_node->n =value;// set its value
        new_node-> previous= head;// make the node pointer point to the previous node
        head = new_node; // make the head pointer at the new node
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
};
int main(){
    LinkedList L; // creating an empty linked list
    L.insert_node(1);
    L.insert_node(2);
    L.insert_node(4);
    L.insert_node(8);
    L.show();
    return 0;
}
