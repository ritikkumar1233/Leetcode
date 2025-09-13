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

Node* reverseBetween(Node* head, int left, int right){
    if(head == NULL || head->next == NULL || left == right){
        return head;
    }
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prev = dummy;
    for(int i=0; i<left-1; i++){
        prev = prev->next;
    }
    Node* curr = prev->next;
    for(int i=0; i<right-left; i++){
        Node* temp = curr->next;
        curr->next = temp->next;
        temp->next = prev->next;
        prev->next = temp;
    }
    return dummy->next;
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
    Node*  rev = reverseBetween(head, 1, 5);
    display(rev);
}