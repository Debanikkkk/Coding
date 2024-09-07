#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    one=new node();
    two=new node();
    three=new node();

    one->data=12;
    two->data=3;
    three->data=56;

    head=one;

    one->next=two;
    two->next=three;
    three->next=NULL;

    struct node* i=NULL;
    i=new node();
    i=head;
    while(i!=NULL){
            cout<< i->data<< "->";
            i=i->next;
    }
}