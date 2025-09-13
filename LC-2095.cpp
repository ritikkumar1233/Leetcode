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



Node* deleteMiddle(Node* head){
    Node* temp = NULL;
    Node* slow = head;
    Node* fast = head;
    if(head == NULL){
        return head;
    }
    if(head->next == NULL){
        return head->next;
    }
    while(fast != NULL && fast->next != NULL){
        temp = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    temp->next = slow->next;
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
    display(head);
    Node*  ans = deleteMiddle(head);
    display(ans);
}