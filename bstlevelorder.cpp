#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node * left;
    node *right;
    node(int value){
        data=value;
        left=right=NULL;
    }
};
node *createtree(node* &root){
    cout<<"enter data"<<endl;
    int data;cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter data for inserting in left of"<<data<<endl;
    root->left=createtree(root->left);
    cout<<"enter data for inserting in right of"<<data<<endl;
    root->right=createtree(root->right);
    return root;
}
void levelordertraversal(node *root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node*temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}
int main(){
    node *root=NULL;
    createtree(root);
    cout<<"level order traversal";
    levelordertraversal(root);

}
