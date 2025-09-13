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

Node* reverseList(Node* prev, Node* curr){
    if(curr == NULL){
        return prev;
    }

    Node* nextNode = curr->next;
    curr->next = prev;
    reverseList(curr, nextNode);
}

// Node* addTwoNumbers(Node* head1, Node* head2){
//     if(head1 == NULL && head2 == NULL){
//         return head1;
//     }
//     else if(head1 == NULL){
//         return head2;
//     }
//     else if(head2 == NULL){
//         return head1;
//     }
//     int carry = 0;
//     Node* temp1 = head1;
//     Node* temp2 = head2;
//     while(temp1->next != NULL){
//         int totalSum = temp1->data + carry;
//         if(temp2 != NULL){
//             totalSum = totalSum + temp2->data;
//             temp2 = temp2->next;
//         }
//         int digit = totalSum % 10;
//         carry = totalSum / 10;
//         temp1->data = digit;
//         temp1 = temp1->next;
//     }
    
//     int totalSum = temp1->data + carry;
//     if(temp2 != NULL){
//         totalSum = totalSum + temp2->data;
//     }
//     int digit = totalSum % 10;
//     carry = totalSum / 10;
//     temp1->data = digit;
//     if(carry != 0){
//         Node* newNode = new Node(carry);
//         temp1->next = newNode;
//     }
//     return head1;
// }


Node* addTwoNumbers(Node* head1, Node* head2){
    if(head1 == NULL && head2 == NULL){
        return head1;
    }
    else if(head1 == NULL){
        return head2;
    }
    else if(head2 == NULL){
        return head1;
    }
    int carry = 0;
    Node* dummy = new Node(0);
    Node* newList = dummy;
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
        newList->next = new Node(sum % 10);
        newList = newList->next;
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
    Node* head1 = NULL;
    insertNode(head1, 9);
    insertNode(head1, 9);
    insertNode(head1, 9);
    display(head1);
    Node* head2 = NULL;
    insertNode(head2, 9);
    insertNode(head2, 9);
    insertNode(head2, 9);
    insertNode(head2, 9);
    insertNode(head2, 9);
    insertNode(head2, 9);
    display(head2);
    Node* head = addTwoNumbers(head1, head2);
    display(head);
}