#include <iostream>
using namespace std;

struct doublynode {
    struct doublynode* prev;
    int data;
    struct doublynode* next;
};

struct doublynode* head = NULL;
struct doublynode* tail = NULL;

void createnode(int value) {
    struct doublynode* temp = new doublynode;
    temp->prev = NULL;
    temp->data = value;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertatbegin(int value){
    struct doublynode*newnode=new doublynode;
    newnode->prev=NULL;
    newnode->data=value;
    newnode->next=head;
    if(head!=NULL){
        head->prev=newnode;
    }
    head=newnode;
}
void insertatend(int value){
    struct doublynode*newnode=new doublynode;
    struct doublynode*temp=head;
    newnode->prev=NULL;
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
    head=newnode;}
    
    while(temp->next!=NULL){
        temp=temp->next;  
        
    }
    newnode->prev=temp;
    temp->next=newnode;
}
void insertatanyposition(int newdata) {
    int n;
    cout << "At which position you want to insert node:" << endl;
    cin >> n;
    struct doublynode* newnode = new doublynode;
    newnode->prev = NULL;
    newnode->data = newdata;
    newnode->next = NULL;
    if (n <= 1) {
        newnode->next = head;
        head = newnode;
    } else {
        struct doublynode* temp = head;
        int position = 1;
        while (position < n - 1 && temp != NULL) {
            temp = temp->next;
            position++;
        }
        if (temp !=NULL) {
            newnode->next = temp->next;
            temp->next = newnode;
            newnode->prev = temp;
            if (newnode->next !=NULL) {
                newnode->next->prev = newnode;
            }
        } else {
            cout << "Invalid position. The list is not long enough." << endl;
        }
    }
}

void print() {
    struct doublynode* current = head;
    int nodeNumber = 1;
    while (current != NULL) {
        cout << "Node " << nodeNumber << ": " << current->data << endl;
        current = current->next;
        nodeNumber++;
    }
}

int main() {
    cout << "Enter how many nodes you want to make: ";
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        createnode(a);
    }
    insertatbegin(6);
    insertatend(10);
    insertatanyposition(5);
    print();

    return 0;
}
