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




//  slow and fast method   or  Floyd’s Cycle Detection Algo

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

Node* detectCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }
    if(fast == NULL){
        return NULL;
    }
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

void removeLoop(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }
    slow = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
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
    insertNode(head, 6);
    insertNode(head, 7);
    insertNode(head, 8);
    display(head);
    createLoop(head, 3);
    Node* ans = detectCycle(head);
    cout<<ans->data<<endl;
    removeLoop(head);
    display(head);
}