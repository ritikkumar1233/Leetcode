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

Node* mergeTwoLists(Node* list1, Node* list2){
    if(list1 == NULL){
        return list2;
    }
    if(list2 == NULL){
        return list1;
    }
    Node* dummy = new Node(0);
    Node* temp = dummy;
    while(list1 != NULL && list2 != NULL){
        if(list1->data < list2->data){
            temp->next = list1;
            temp = list1;
            list1 = list1->next;
        }
        
        else{
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }
        
        cout<<temp->data<<"->";
    }
    if(list1) temp->next = new Node(list1->data);
    if(list2) temp->next = new Node(list2->data);
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
    Node* head1 = NULL;
    insertNode(head1, 1);
    insertNode(head1, 2);
    // insertNode(head1, 3);
    insertNode(head1, 4);
    // insertNode(head1, 5);
    display(head1);
    
    Node* head2 = NULL;
    insertNode(head2, 1);
    // insertNode(head2, 2);
    insertNode(head2, 3);
    insertNode(head2, 4);
    // insertNode(head2, 5);
    display(head2);
    Node*  ans = mergeTwoLists(head1, head2);
    cout<<endl;
    display(ans);
}