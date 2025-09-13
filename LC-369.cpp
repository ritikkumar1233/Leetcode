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

Node* reverseList(Node* prev, Node* curr){
    if(curr == NULL){
        return prev;
    }

    Node* nextNode = curr->next;
    curr->next = prev;
    reverseList(curr, nextNode);
}

void addOneToLL(Node* &head){
    head = reverseList(NULL, head);
    Node* temp = head;
    int carry = 1;
    while(temp->next != NULL){
        int totalSum = temp->data + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;

        temp->data = digit;
        temp = temp->next;
        if(carry == 0){
            break;
        }
    }

    if(carry != 0){
        int totalSum = temp->data + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;
        temp->data = digit;
        if(carry != 0){
            Node* newNode = new Node(carry);
            temp->next = newNode;
        }
    }

    head = reverseList(NULL, head);
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
    insertNode(head, 9);
    insertNode(head, 9);
    insertNode(head, 9);
    display(head);
    addOneToLL(head);
    display(head);
    
}