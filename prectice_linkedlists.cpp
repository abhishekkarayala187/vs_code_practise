#include<bits/stdc++.h>
using namespace std;

//node builder

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

void insertAttail(node* &head, int val){
    node* n = new node(val);
    node* temp = head;

    if(head == NULL){
        head = n;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
}

void deleteAthead(node* &head){
    node* todelete = head;
    head = head->next;

    delete todelete;
}

void deleteNode(node* &head, int val){
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

void display(node *head){
    node *temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout<< "NULL" <<endl;
}

int main(){

    node *head = NULL;
    insertAttail(head, 2);
    insertAttail(head, 3);
    insertAttail(head, 4);
    insertAttail(head, 5);
    display(head);
    deleteNode(head, 3);
    display(head);
    deleteAthead(head);
    display(head);

    return 0;
}