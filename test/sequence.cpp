#include"sequence.h"
using namespace std;
Sequence::Sequence(){
    head.next=NULL;
}
Sequence::~Sequence(){
/*    node *ptr=head.next;
    node *temp;
    while(ptr!=NULL){
        temp=ptr;
        ptr=ptr->next;	
        delete temp;
    }*/
this->delete_all();
}
int Sequence::add(val_type a){
    node *first=head.next;
    head.next=new node;
    head.next->next=first;
    head.next->value=a;
    return 0;
}
int Sequence::copy_all(const Sequence& a){
    node *src=a.head.next;
    node *des=&head;
    node *temp;
    if(a==this){
        while

    }
    while(src!=NULL){
       temp=des->next;
       des->next=new node;
       des=des->next;
       des->value=src->value;
       src=src->next;
       des->next=temp;
    }
}
int Sequence::delete_all(){
    node *ptr=head.next;
    node *temp;
    while(ptr!=NULL){
        temp=ptr;
        ptr=ptr->next;	
        delete temp;
    }
    return 0;
}
Sequence::Sequence(const Sequence& a){
    //this->delete_all();
    copy_all(a);
}
Sequence& Sequence::operator=(const Sequence& a){
    if(this==&a)
        return *this;
    delete_all();
    copy_all(a);
    return *this;
}
Sequence& Sequence::operator+(const Sequence& a){
    Sequance *b=new Sequance;
    b.copy_all(a);
    b.copy_all(this);
    return b;
}
int Sequence::print_all(){
    node *ptr=head.next;
    while(ptr!=NULL){
        cout<< ptr->value << "\n";
        ptr=ptr->next;
    }
}
