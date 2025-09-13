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

void insertNode(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

Node* reverseByRecursion(Node* prev, Node* curr){
    if(curr == NULL){
        return prev;
    }
    Node* nextNode = curr->next;
    curr->next = prev;
    return reverseByRecursion(curr, nextNode);
}

Node* reverseList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    return reverseByRecursion(prev, curr);
}

void display(Node* rev){
    Node* temp = rev;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);
    display(head);
    Node*  rev = reverseList(head);
    display(rev);
}



