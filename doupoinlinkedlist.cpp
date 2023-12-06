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
    

    return 0;
}
