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

Node* addTwoNumbers(Node* head1, Node* head2){
    head1 = reverseByRecursion(NULL, head1);
    head2 = reverseByRecursion(NULL, head2);
    int carry = 0;
    Node* dummy = new Node(0);
    Node* temp = dummy;
    while(head1 != NULL || head2 != NULL || carry != 0){
        int sum = carry;
        if(head1 != NULL){
            sum = sum + head1->data;
            head1 = head1->next;
        }
        if(head2 != NULL){
            sum = sum + head2->data;
            head2 = head2->next;
        }
        carry = sum / 10;
        temp->next = new Node(sum % 10);
        temp = temp->next;
    }
    dummy =  reverseByRecursion(NULL, dummy->next);
    return dummy;
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
    insertNode(head1, 9);
    insertNode(head1, 9);
    insertNode(head1, 9);
    insertNode(head1, 9);
    // insertNode(head1, 5);
    display(head1);

    Node* head2 = NULL;
    insertNode(head2, 1);
    insertNode(head2, 1);
    insertNode(head2, 9);
    display(head2);
    Node*  ans = addTwoNumbers(head1, head2);
    display(ans);
}