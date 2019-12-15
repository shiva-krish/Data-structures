#include <iostream>
using namespace std;

class Linkedlist{
	private :
		class Node{
			public:
			int x;
			Node *next;
			Node(int val){
				x = val ;
				next = NULL;
			}
		};
	public:
		Node *head;
		void push (int x){
			if(head == NULL){
				head = new Node(x);
				return;
			}
			Node *temp = head;
			while(temp->next != NULL)
				temp = temp->next ;
			temp->next  = new Node(x);
		}
		
		void deletenodepos(int pos){
			Node *prev,*first = head, *second = head;
			int count = 0 ;
			while(count < pos){
				if(second == NULL)
					return;
				count++;
				second = second->next;
			}
			while(second != NULL){
				second = second->next ;
				prev = first;
				first = first->next ;
			}
			prev->next = first->next ;
			cout<<"Deleting :"<<first->x<<" "<<"address : "<<first->next <<endl;
			delete first;
		}
		void printnode(){
			Node *temp = head;
			while(temp != NULL){
				cout<<"Node address : "<<temp<<" "<<"Node : "<<temp->x<<" "<<"Address next:"<<temp->next<<endl;
				temp = temp->next ;
			}
		}
};



int main(){
	Linkedlist node;
	node.push(3);
	node.push(4);
	node.push(9);
	node.push(4);
	node.push(17);
	node.push(20);
	node.printnode();
	node.deletenodepos(2);
	node.printnode();
}
