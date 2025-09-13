#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int value){
            data = value;
            next = NULL;
            prev = NULL;
        }
};

int length(Node* &head){
    Node* temp = head;
    int count=0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        newNode->prev= tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int pos){
    int len = length(head);
    if(pos == 1){
        insertAtHead(head, tail, data);
    }
    else if(pos == len+1){
        insertAtTail(head, tail, data);
    }
    else{
        Node* newNode = new Node(data);
        Node* prevNode = NULL;
        Node* currNode = head;
        while(pos != 1){
            prevNode = currNode;
            currNode = currNode->next;
            pos--;
        }
        prevNode->next = newNode;
        newNode->prev = prevNode;
        newNode->next = currNode;
        currNode->prev = newNode;
    }
}

void deleteAtHead(Node* &head){
    Node* temp= head;
    head = head->next;
    temp->next = NULL;
    head->prev = NULL;
    delete temp;
}

void deleteAtTail(Node* &tail){
    Node* prevNode = tail->prev;
    prevNode->next = NULL;
    tail->prev = NULL;
    delete tail;
    tail = prevNode;
}

void deleteAtPosition(Node* &head, Node* &tail, int pos){
    int len = length(head);
    if(pos==1){
        deleteAtHead(head);
    }
    else if(pos == len){
        deleteAtTail(tail);
    }
    else{
        Node* prevNode = NULL;
        Node* currNode = head;
        while(pos != 1){
            prevNode = currNode;
            currNode = currNode->next;
            pos--;
        }
        Node* nextNode = currNode->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
        currNode->prev = NULL;
        currNode->next = NULL;
        delete currNode;
    }
}

void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    // insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 70);
    display(head);
    cout<<length(head)<<endl;
    insertAtPosition(head, tail, 30, 3);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(tail);
    display(head);
    deleteAtPosition(head, tail, 4);
    display(head);
}