//template <typename val_type>
typedef int val_type;
struct node {
	val_type value;
	node *next;
};
class Sequence{
private:
	node head;
	int recursive_copy(node*);
public:
	Sequence(){};
	//Sequence(val_type);
	Sequence(Sequence&);
	Sequence& operator=(Sequence&);
	~Sequence();
	node* ad(val_type, node*);// adds node after the one that is pointed to by the pointer
	node* ad(val_type);//adds node after head
	node* del(node*);// deletes a node after the one that is pointed to by the pointer
	node* delal();//deletes all elements
	bool pn(node*);//print the value of the node pointed by pointer
	int pnal();//print all node values
};
	/*struct iterator{
		node* curr;
		node* prev;
		iterator operator++();
		iterator operator++(int);
		node& operator*();
		iterator(){curr=head; prev=NULL}
	}*/
