#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

class DoubleLinkedlist{
    public:
    Node *last;
    DoubleLinkedlist():last(NULL){}
    Node* createnode(int data){
        Node *newnode = new Node;
        newnode->data = data;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
    
    Node* Insertnode_first(Node *node ,int data){
        if(node==NULL){
            return last = createnode(data);
        }
        else{
            node->left = Insertnode_first(node->left,data);
            node->left->right = node->left;
            last = node;
        }
        return node;
    }
    void Display_Inorder(Node *node){
        if(node!=NULL){
            Display_Inorder(node->right);
            cout<<node->left<<"<-->"<<node->data<<"<-->"<<node->right<<endl;
        }
    }
    void Display_revorder(Node *lastpoint){
        cout<<"Last node :"<<last<<endl;
        if(lastpoint!=NULL){
            Display_revorder(lastpoint->left);
            cout<<lastpoint->left<<"<-->"<<lastpoint->data<<"<-->"<<lastpoint->right<<endl;
        }
    }
};

int main()
{
    bool flag=1;
    DoubleLinkedlist Object;
    Node *root = NULL;
    int  ch;
    int num;
    while(flag){
        cout<<"1.Insert"<<endl;
        cout<<"2.Display_Inorder"<<endl;
        cout<<"3.Display_revorder"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter choice:";cin>>ch;
        switch(ch){
            case 1:cin>>num;
                   if(root==NULL)
                   root =Object.Insertnode_first(root,num);
                   else
                   Object.Insertnode_first(root,num);
                   
                   break;
            case 2:Object.Display_Inorder(root);break;
            case 3:Object.Display_revorder(Object.last);break;
            case 5:flag=0;
        }
    }    
  
    return 0;
}
