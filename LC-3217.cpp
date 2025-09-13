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

Node* modifiedList(int nums[], int n, Node* head){

    if(head == NULL || n == 0){
        return head;
    }
    Node* dummy = new Node(-1);
    dummy->next = head;
    
    for(int i = 0; i < n; i++){
        Node* temp = dummy;
        while(temp->next != NULL){
            if(temp->next->data == nums[i]){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
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
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 1);
    insertNode(head, 2);
    display(head);
    int nums[1] = {1};
    Node*  ans = modifiedList(nums, 1, head);
    display(ans);
}