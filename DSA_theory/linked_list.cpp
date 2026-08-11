#include<iostream>
using namespace std;

class Node{
public:

    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->next = third;

    // cout<<"Data : "<<head->data<<endl;
    // cout<<"Address : "<<head->next<<endl;

    // cout<<"Data : "<<second->data<<endl;
    // cout<<"Address : "<<second->next<<endl;

    // cout<<"Data : "<<third->data<<endl;
    // cout<<"Address : "<<third->next<<endl;


// Inserting new node at start
    
    Node* newNode = new Node(5);
    newNode->next = head;
    head = newNode;

// Traversing the linked list
    
        Node* temp = head;
    
        while(temp != NULL){
            cout<<"Data : "<<temp->data<<endl;
            cout<<"Addres : "<<temp->next<<endl;
    
            temp = temp->next;
        }
}