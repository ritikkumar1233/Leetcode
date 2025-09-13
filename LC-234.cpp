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

Node* middleNode(Node* slow, Node* fast){
    while(fast->next != NULL){
        fast = fast->next;
        if(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

Node* reverseList(Node* prev, Node* curr){
    if(curr == NULL){
        return prev;
    }
    Node* nextNode = curr->next;
    curr->next = prev;

    return reverseList(curr, nextNode);
}

bool check(Node* firstHead, Node* secondHead){
    while(firstHead != NULL && secondHead != NULL){
        cout<<firstHead->data<<endl;
        cout<<secondHead->data<<endl;
        if(firstHead->data != secondHead->data){
            return false;
        }
        else{
            firstHead = firstHead->next;
            secondHead = secondHead->next;
        }
    }
    return true;
}

bool isPalindrome(Node* head){
    Node* middle = middleNode(head, head);
    // cout<<middle->data<<endl;
    Node* secondHead = middle->next;
    middle->next = NULL;
    // cout<<secondHead->data<<endl;
    secondHead = reverseList(NULL, secondHead);
    // cout<<secondHead->data<<endl;
    return check(head, secondHead);
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
    insertNode(head, 1);
    // insertNode(head, 3);
    insertNode(head, 2);
    insertNode(head, 1);
    display(head);
    bool ans = isPalindrome(head);
    cout<<ans;
}