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
void insertatbegin(int newvalue){
    struct node*newnode=new node;
    newnode->data=newvalue;
    newnode->next=head;
    head=newnode;
}
void insertatend(int newdata){
    struct node*newnode=new node;
    newnode->data=newdata;
    newnode->next=NULL;
    tail->next=newnode;
}
void insertatanyposition(int newdata) {
    int n;
    cout << "At which position you want to insert node:" << endl;
    cin >> n;
    struct node* newnode = new node;
    newnode->data = newdata;
    if (n <= 1) {
        newnode->next = head;
        head = newnode;
    } else {
        struct node* pred = head;
        int position = 1;
        while (position < n - 1 && pred != NULL) {
            pred = pred->next;
            position++;
        }
        if (pred != NULL) {
            newnode->next = pred->next;
            pred->next = newnode;
        } else {
            cout << "Invalid position. The list is not long enough." << endl;
        }
    }
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
insertatbegin(4);
insertatend(7);
insertatanyposition(63);
print();
    

    return 0;
}
