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

Node* swapPairs(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = head;
    Node* curr = prev->next;
    while(prev != NULL && curr != NULL){
        swap(prev->data, curr->data);
        prev = curr->next;
        if(prev!= NULL) curr = prev->next;
    }
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
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);
    insertNode(head, 6);
    insertNode(head, 7);
    insertNode(head, 8);
    display(head);
    Node*  rev = swapPairs(head);
    display(rev);
}