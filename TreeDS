#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

class TreeDS{
    public:
    Node* createnode(int data){
        Node *newnode = new Node;
        newnode->data = data;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
    Node* Insertnode(Node *node ,int data){
        if(node==NULL){
            return createnode(data);
        }
        //else{
            if(data > node->data){
                node->right = Insertnode(node->right,data);
            }
            else if(data < node->data){
                node->left = Insertnode(node->left,data);
            }
        //}
        return node;
    }
    void Display_Inorder(Node *node){
        if(node!=NULL){
            Display_Inorder(node->left);
            cout<<node->data<<" ";
            Display_Inorder(node->right);
        }
    }
    void Display_Preorder(Node *node){
        if(node!=NULL){
            cout<<node->data<<" ";
            Display_Preorder(node->left);
            Display_Preorder(node->right);
        }
        
    }
    void Display_Postorder(Node *node){
        if(node!=NULL){
            Display_Postorder(node->left);
            Display_Postorder(node->right);
            cout<<node->data<<" ";
        }
      
    }
};

int main()
{
    bool flag=1;
    TreeDS Object;
    Node *root = NULL;
    int  ch;
    int num;
    while(flag){
        cout<<"1.Insert"<<endl;
        cout<<"2.Display_Inorder"<<endl;
        cout<<"3.Display_Postorder"<<endl;
        cout<<"4.Display_Preorder"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter choice:";cin>>ch;
        switch(ch){
            case 1:cin>>num;
                   if(root==NULL)
                   root =Object.Insertnode(root,num);
                   else
                   Object.Insertnode(root,num);
                   
                   break;
            case 2:Object.Display_Inorder(root);break;
            case 3:Object.Display_Postorder(root);break;
            case 4:Object.Display_Preorder(root);break;
            case 5:flag=0;
        }
    }    
    /*cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    cout<<root->left->left->data<<endl;
    cout<<root->right->left->data<<endl;

    cout<<"inorder: ";
    Object.Display_Inorder(root);
    cout<<endl;
    cout<<"Preorder:";
    Object.Display_Preorder(root);
    cout<<endl;
    cout<<"Post order:";
    Object.Display_Postorder(root);    */
    return 0;
}
