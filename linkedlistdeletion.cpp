#include <iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
    
};
struct node *head=NULL;
struct node *tail=NULL;
void createnode(struct node** head,int value){
    struct node*temp=new node;
    temp->data=value;
    temp->next=NULL;
    if(*head==NULL){
        *head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}
void print(){
    struct node*current=head;
    int nodeNumber = 1;
    while(current!=NULL){

        cout<<"Node"<<":"<<nodeNumber<<" "<<current->data<<endl;
        current = current->next;
        nodeNumber++;
    }
    
}
void deletefirstnode() {
    if (head != nullptr) {
        struct node* temp = head;
        head = head->next;
        delete temp;
    } else {
        cout << "List is empty. Nothing to delete." << endl;
    }

}
void deletelastnode() {
    if (head == nullptr) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    if (head->next == nullptr) {
        // If there's only one node, delete it
        delete head;
        head = nullptr;
        return;
    }

    struct node* pred = head;
    struct node* temp = nullptr;

    while (pred->next != nullptr) {
        temp = pred; // Store the second-to-last node
        pred = pred->next; // Move to the next node
    }

    // Now, temp points to the second-to-last node, and pred points to the last node
    temp->next = nullptr; // Update the second-to-last node's next pointer
    delete pred; // Delete the last node
}

void deleteNode(struct node* nodeToDelete) {
    if (nodeToDelete == nullptr || head == nullptr) {
        cout << "Invalid node or empty list." << endl;
        return;
    }

    if (nodeToDelete == head) {
        // If the node to delete is the head node
        head = head->next;
    } else {
        struct node* current = head;
        while (current != nullptr && current->next != nodeToDelete) {
            current = current->next;
        }

        if (current != nullptr) {
            current->next = nodeToDelete->next;
        } else {
            cout << "Node not found in the list." << endl;
            return;
        }
    }

    delete nodeToDelete;
}
void deletelist() {
    struct node* current = head;
    while (current != nullptr) {
        struct node* temp = current;
        current = current->next;
        delete temp; // Delete the current node
    }
    head = nullptr; // Set the head to nullptr to indicate an empty list
}
int main()

{ cout<<"enter how many nodes you want to make";
int n;
cin>>n;

for(int i=1;i<=n;i++){
    int a;
    cin>>a;
    createnode(&head,a);
}
print();
deletefirstnode();
cout<<endl;
delete
print();
    

    return 0;
}
