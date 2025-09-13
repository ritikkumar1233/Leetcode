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
        len++;
        temp = temp->next;
    }
    return len;
}

// Node* swapNodes(Node* head, int k){
//     int len = length(head);
//     Node* temp = head;
//     int arr[len];
//     int i = 0;
//     while(temp != NULL){
//         arr[i] = temp->data;
//         i++;
//         temp = temp->next;
//     }
//     swap(arr[k-1], arr[len-k]);
//     temp = head;
//     int j=0;
//     while(temp != NULL){
//         temp->data = arr[j];
//         j++;
//         temp = temp->next;
//     }
//     return head;
// }

Node* swapNodes(Node* head, int k){
    if(head == NULL || head->next == NULL || k==0){
        return head;
    }
    int len = length(head);
    int p = 1;
    int n = len - k + 1;
    Node* prev = NULL;
    Node* curr = NULL;
    Node* temp = head;
    while(temp != NULL){
        if(p == k) prev = temp;
        if(p == n) curr = temp;
        temp = temp->next;
        p++;
    }
    swap(prev->data, curr->data);
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
    display(head);
    Node*  ans = swapNodes(head, 2);
    display(ans);
}