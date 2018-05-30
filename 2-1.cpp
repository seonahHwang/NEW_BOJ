#include<iostream>
using namespace std;
class Node{
    friend class List;
    public:
        Node(){
            data=0;
            next=NULL;
        }
        Node(int i){
            data=i;
            next=NULL;
        }
    private:
        Node *next;
        int data;    
};

class List{
    private:
        Node *head;
    public:
        List(){
            head=NULL;
        };
    List(Node *instertNode){
        head=NULL;
        insert(insertNode);
    };
    void insert(Node *insertNode);
    void del(int delNum);       
};

void List::insert(Node *insertNode){
    if(head==NULL){
        head==insertNode;
    }
    else{
        Node *current=head;
        Node *beforeCurrent=NULL;
        for(Node *ptr=head;ptr!=NULL;ptr=ptr->next) current=ptr;
        current ->next=insertNode;
    }
};