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

// int length(Node* &head){
//     int count=0;
//     Node* temp = head;
//     while(temp!=NULL){
//         temp=temp->next;
//         count++;
//     }
//     return count;
// }

// void insertNode(Node* &head, int data){
//     Node* newNode = new Node(data);
//     if(head == NULL){
//         head=newNode;
//         return;
//     }
//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// void insertAtHead(Node* &head, int data){
//     Node* newNode = new Node(data);
//     if(head==NULL){
//         head = newNode;
//         return;
//     }
//     newNode->next = head;
//     head = newNode;
// }

// void insertAtTail(Node* &head, int data){
//     Node* newNode = new Node(data);
//     if(head==NULL){
//         head = newNode;
//         return;
//     }
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=newNode;
// }

// // void insertAtPosition(Node* &head, int data, int pos){
// //     if(pos<=1){
// //         insertAtHead(head, data);
// //     }
// //     else if(pos>length(head)){
// //         insertAtTail(head, data);
// //     }
// //     else{
// //         Node* newNode = new Node(data);
// //         Node* prev=NULL;
// //         Node* curr = head;
// //         while(pos!=1){
// //             prev=curr;
// //             curr=curr->next;
// //             pos--;
// //         }
// //         newNode->next=curr;
// //         prev->next=newNode;
// //     }
// // }

// void insertAtPosition(Node* &head, int data, int pos){
//     if(pos==0){
//         insertAtHead(head, data);
//         return;
//     }
//     // else if(pos==length(head)){
//     //     insertAtTail(head, data);
//     // }
//     Node* newNode = new Node(data);
//     int currPos=0;
//     Node* prev=head;
//     while(currPos!=pos-1){
//         prev=prev->next;
//         currPos++;
//     }
//     newNode->next=prev->next;
//     prev->next=newNode;
    
// }

// void deleteAtHead(Node* &head){
//     Node* temp=head;
//     head=head->next;
//     temp->next = NULL;
//     delete temp;
// }

// void deleteAtTail(Node* &head){
//     Node* sc = head;
//     while(sc->next->next != NULL){
//         sc = sc->next;
//     }
//     Node* temp = sc->next;
//     sc->next = NULL;
//     delete temp;
// }

// void deleteAtPosition(Node* &head, int pos){
//     int len = length(head);
//     if(pos==1){
//         deleteAtHead(head);
//     }
//     else if(pos==len){
//         deleteAtTail(head);
//     }
//     else{
//         Node* prev = NULL;
//         Node* curr = head;
//         while(pos!=1){
//             prev=curr;
//             curr=curr->next;
//             pos--;
//         }
//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }

// void deleteByValue(Node* &head, int value){
//     Node* trav =head;
//     while(trav != NULL){
//         trav = trav->next;
//         if(head->data == value){
//             Node* temp = head;
//             head = head->next;
//             temp->next = NULL;
//             delete temp;
//             // return;
//         }
//         Node* prev = NULL;
//         Node* curr = head;
//         while(curr != NULL && curr->data != value){
//             prev = curr;
//             curr = curr->next;
//         }
//         if(curr==NULL){
//             cout<<"Value not found in the list!"<<endl;
//             return;
//         }
//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
        
//     }
    
// }

// void removeNthFromEnd(Node* &head, int n){
//     int len = length(head);
//     int pos = (len-n)+1;
//     if(pos == 1){
//         Node* temp = head;
//         head->next = NULL;
//         delete temp;
//     }
//     else{
//         Node* prev = NULL;
//         Node* curr = head;
//         while(pos != 1){
//             prev = curr;
//             curr = curr->next;
//             pos--;
//         }
//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }

// void del(Node* &head, int value){
//     Node* temp = head;
//     while(temp->next != NULL){
//         if(temp->next->data == value){
//             temp->next = temp->next->next;
//         }
//         else{
//             temp = temp->next;
//         }
//     }
// }

// void deleteDuplicates(Node* head) {
//     Node* prev = new Node(9);
//     Node* curr = head;
//     prev->next = head;
//     head = prev;
//     while(curr != NULL){
//         if(prev->next->data == curr->next->data){

//             del(head, prev->next->data);
//         }
//         else{
//             prev = curr;
//             curr = curr->next;
//         }
//     }

// }

// void display(Node* &head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* head = NULL;
//     insertNode(head, 1);
//     insertNode(head, 1);
//     insertNode(head, 1);
//     insertNode(head, 2);
//     insertNode(head, 3);
//     display(head);
//     deleteDuplicates(head);
//     display(head);
//     // insertNode(head, 20);
//     // insertNode(head, 30);
//     // insertNode(head, 40);
//     // insertNode(head, 50);
//     // display(head);
//     // removeNthFromEnd(head, 1);
//     // cout<<length(head);
//     // display(head);
//     // insertNode(head, 20);
//     // insertNode(head, 60);
//     // insertNode(head, 70);
//     // insertNode(head, 10);
//     // insertNode(head, 10);
//     // insertNode(head, 10);
//     // insertNode(head, 10);
//     // insertNode(head, 10);
//     // display(head);

//     // deleteByValue(head, 10);
//     // display(head);
//     // deleteByValue(head, 20);
//     // display(head);


//     // insertAtPosition(head, 35, 3);
//     // display(head);
//     // deleteAtHead(head);
//     // display(head);
//     // deleteAtTail(head);
//     // display(head);
//     // deleteAtPosition(head, 3);
//     // display(head);


//     // cout<<length(head)<<endl;
//     // insertAtHead(head, 5);
//     // display(head);
//     // cout<<length(head)<<endl;
//     // insertAtTail(head, 60);
//     // display(head);
// }















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

bool check(Node* head1, Node* head2){
    while(head1 != NULL && head2 != NULL){
        cout<<head1->data<<endl;
        cout<<head2->data<<endl;
        if(head1->data != head2->data){
            return false;
        }
        else{
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    return true;
}

bool isPalindrome(Node* head) {
    Node* middle = middleNode(head, head);
    Node* head2 = middle->next;
    middle->next = NULL;
    head2 = reverseList(NULL, head2);
    return check(head, head2);
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