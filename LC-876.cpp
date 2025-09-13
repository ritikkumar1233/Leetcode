//  Normal Approach
// #include<iostream>
// using namespace std;

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
//         Node(int value){
//             data = value;
//             next = NULL;
//         }
// };

// void insertNode(Node* &head, int data){
//     Node* newNode = new Node(data);
//     if(head == NULL){
//         head = newNode;
//         return;
//     }
//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// int length(Node* head){
//     Node* temp = head;
//     int len = 0;
//     while(temp != NULL){
//         temp = temp->next;
//         len++;
//     }
//     return len;
// }

// Node* middleNode(Node* head){
//     int pos = (length(head)/2) + 1;
//     Node* temp = head;
//     while(pos != 1){
//         temp = temp->next;
//         pos--;
//     }
//     return temp;
// }

// void display(Node* rev){
//     Node* temp = rev;
//     while(temp != NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* head = NULL;
//     insertNode(head, 1);
//     insertNode(head, 2);
//     insertNode(head, 3);
//     insertNode(head, 4);
//     insertNode(head, 5);
//     insertNode(head, 6);
//     display(head);
//     Node*  ans = middleNode(head);
//     cout<<ans->data;
   
// }




//  Tortorise Approach

#include<iostream>
using namespace std;

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

Node* middleNode(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL){
        fast = fast->next;
        if(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
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
    Node*  ans = middleNode(head);
    cout<<ans->data;
   
}