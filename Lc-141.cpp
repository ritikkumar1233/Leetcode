//  Basic approach using map

// #include<iostream>
// #include<map>
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

// void createLoop(Node* &head, int pos){
//     Node* loopStart = NULL;
//     Node* temp = head;
//     int currPos = 1;
//     while(temp->next != NULL){
//         if(currPos == pos){
//             loopStart = temp;
//         }
//         currPos++;
//         temp = temp->next;
//     }
//     if(loopStart != NULL){
//         temp->next = loopStart;
//     }
// }

// bool hasCycle(Node* head){
//     map<Node*, bool> table;
//     Node* temp = head;
//     while(temp != NULL){
//         if(table[temp] == false){
//             table[temp] = true;
//         }
//         else{
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// void display(Node* head){
//     Node* temp = head;
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
//     display(head);
//     createLoop(head, 2);
//     cout<<hasCycle(head);
// }




//  slow and fast mthod

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

void createLoop(Node* &head, int pos){
    Node* loopStart = NULL;
    Node* temp = head;
    int currPos = 1;
    while(temp->next != NULL){
        if(currPos == pos){
            loopStart = temp;
        }
        currPos++;
        temp = temp->next;
    }
    if(loopStart != NULL){
        temp->next = loopStart;
    }
}

bool hasCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
            return true;
        }
    }
    return false;
}

void display(Node* head){
    Node* temp = head;
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
    createLoop(head, 2);
    cout<<hasCycle(head);
}