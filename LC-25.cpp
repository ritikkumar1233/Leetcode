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

int length(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

Node* reverseKGroup(Node* head, int k){
    if(head == NULL || head->next == NULL || k == 0){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* nextNode = curr->next;
    int pos = 0;
    int len = length(head);
    if(len < k){
        return head;
    }
    while(pos != k){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
        pos++;
    }
    Node* ans = NULL;
    if(nextNode != NULL){
        ans = reverseKGroup(nextNode, k);
        head->next = ans;
    }
    return prev;
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
    Node*  rev = reverseKGroup(head, 2);
    display(rev);
}