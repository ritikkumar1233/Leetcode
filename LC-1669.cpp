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

Node* mergeInBetween(Node* head1, Node* head2, int a, int b){
    Node* dummy = new Node(0);
    dummy->next = head1;
    Node* temp = dummy;
    Node* p = NULL;
    Node* q = NULL;
    int c = 0;
    while(temp != NULL){
        if(a == c) p = temp;
        if(b == c) q = temp->next;
        temp = temp->next;
        c++;
    }
    Node* trav = head2;
    while(trav->next != NULL){
        trav = trav->next;
    }
    trav->next = q->next;
    p->next = head2;
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
    insertNode(head1, 3);
    insertNode(head1, 4);
    insertNode(head1, 5);
    display(head1);

    Node* head2 = NULL;
    insertNode(head2, 7);
    insertNode(head2, 8);
    insertNode(head2, 9);
    display(head2);
    int a = 2;
    int b = 4;
    Node*  ans = mergeInBetween(head1, head2, a, b);
    display(ans);
}