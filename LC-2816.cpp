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

Node* doubleIt(Node* head){
    head = reverseByRecursion(NULL, head);
    Node* temp = head;
    int carry = 0;
    while(temp->next != NULL){
        int num = temp->data * 2;
        int digit = num % 10;
        temp->data = digit+carry;
        carry = num / 10;
        temp = temp->next;
    }
    int num = temp->data * 2;
    int digit = num % 10;
    temp->data = digit + carry;
    carry = num / 10;
    if(carry != 0){
        temp->next = new Node(carry);
    }
    head = reverseByRecursion(NULL, head);
    return head;
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
    // insertNode(head, 4);
    // insertNode(head, 5);
    display(head);
    Node*  ans = doubleIt(head);
    display(ans);
}