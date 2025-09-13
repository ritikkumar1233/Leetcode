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

Node* removeNodes(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    head = reverseByRecursion(NULL, head);
    Node * temp = head;
    while(temp->next != NULL){
        if(temp->data > temp->next->data){
            temp->next = temp->next->next;
        }
        else{
            temp = temp->next;
        }
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
    insertNode(head, 1);
    insertNode(head, 13);
    insertNode(head, 1);
    insertNode(head, 1);
    insertNode(head, 1);
    display(head);
    Node* ans = removeNodes(head);
    display(ans);
}