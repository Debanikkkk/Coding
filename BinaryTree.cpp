#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};
int main(){
struct node *head;
struct node *one=new node();
struct node *two=new node();
struct node *three=new node();



one->data=1;
two->data=2;
three->data=3;

head=one;

one->left=two;
one->right=three;


two->left=NULL;
two->right=NULL;


three->left=NULL;
three->right=NULL;

struct node *i=new node();
i=head;
while(i!=NULL){
    if(i->left==nullptr){
        cout<<"left is null";
    }
    else if(i->right==nullptr){
        cout<<"right is null";
    }
    cout<<i->data<<i->left->data<<" & "<<i->right->data;
    i=i->right;
}
return 0;

}