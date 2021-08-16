#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        
        node(int val){
            data = val;
            next = NULL;
        }
};

void insertAthead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void inMiddle(node* &head, int val, int pos){
    int count = 2;
    node* n = new node(val);
    node* temp = head;
    
    if(pos == 1){
        insertAthead(head, val);
        return;
    }
    while(temp->next != NULL){
        if(count == pos){
            n->next = temp->next;
            temp->next = n;
            return;
        }
        count++;
        temp=temp->next;
    }
}

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

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{
    node* head = NULL;
    int t, val; 
    cin >> t;
    cout << "Enter elements"<<"\n";
    for(int i = 0; i < t; i++){
        cin >> val;
        insertAttail(head, val);
    }
    
    display(head);
    //insertAthead(head, 0);
    //display(head);
    inMiddle(head, 10, 1);
    display(head);
    inMiddle(head, 11, 3);
    display(head);
    inMiddle(head, 11, 2);
    display(head);
    return 0;
}
