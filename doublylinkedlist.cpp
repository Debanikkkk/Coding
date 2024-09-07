#include <iostream>
using namespace std;

struct node{
    public:
    struct node *prev;
    int data;
    struct node *next;
};


void display(node *head, node *tail) {
    // Forward traversal from head to tail
    node *current = head;
    while (current != NULL) {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "\n";

    // Backward traversal from tail to head
    node*currentt = tail;
    while (currentt != NULL) {
        cout << currentt->data << "<-";
        currentt = currentt->prev;
    }
    cout << "\n";
}

void addToStart(node *&head, int data){
    struct node* newnode=new node();
    newnode->data=data;
    head=newnode;
    newnode->next=head;
    newnode->prev=NULL;

};
int main(){
    struct node *head;
    struct node *tail;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;

    // one=new node();
    one=new node();
    two=new node();
    three=new node();

    one->data=12;
    two->data=77;
    three->data=54;

    one->next=two;
    two->next=three;
    three->next=NULL;

    head= one;
    tail=three;


    one->prev=NULL;
    two->prev=one;
    three-> prev=two;

    // struct node* i = NULL;
    // i=new node();
    // i=tail;
    // while(i!=NULL){
    //     cout << i->data<< "->";
    //     i=i->prev;
    // }
    addToStart(head, 17);
    display(head,tail);
    return 0;

}   