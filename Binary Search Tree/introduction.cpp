#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *insertIntoBST(node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }

    if (root->data < d)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child ndoes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node *&root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *&root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *&root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

bool search(node *root, int x)
{

    node *temp = root;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return true;
        }
        else if (temp->data > x)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return false;
}

node* minimum(node* root){
    node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

node* maximum(node* root){
    node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

node* deleteFromBSt(node* root,int val){
    if(root == NULL){
        return root;
    }

    if(root->data==val){

        // 0 child

        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        // 1 child 
            // right vala 
        if(root->left==NULL && root->right!=NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
            // left vala

        if(root->left!=NULL && root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        // 2 child 

        if(root->left!=NULL && root->right!=NULL){
            int mini = minimum(root->right)->data;
            root->data = mini;
            root->right = deleteFromBSt(root->right,mini);
            return root;
        }

    }

    else if(root->data>val){
        root->left = deleteFromBSt(root->left,val);
        return root;
    }

    else{
        root->right = deleteFromBSt(root->right,val);
        return root;
    }

}


int main()
{

    // 10 8 21 7 27 5 4 3 -1

    node *root = NULL;
    cout << "BST banane ke data: " << endl;
    takeInput(root);

    cout << "BST ke level order traversal: " << endl;
    levelOrderTraversal(root);
    cout << endl;
    cout << "Inorder Transversal: ";
    inorder(root);
    cout << endl;
    cout << "Preorder Transversal: ";
    preorder(root);
    cout << endl;
    cout << "Postorder Transversal: ";
    postorder(root);
    cout << endl;
    int d = 21;
    if(search(root,d)){
        cout<<"mil gya "<<d<<endl;
    }
    else{
        cout<<"nhi mila "<<d<<endl;
    }

    cout<<"Maximum value: "<<maximum(root)->data<<endl;
    cout<<"Minimum value: "<<minimum(root)->data<<endl;

    root = deleteFromBSt(root,10);

    cout<<"After deletion 8 "<<endl<<endl;
    cout << "BST ke level order traversal: " << endl;
    levelOrderTraversal(root);
    cout << endl;
    cout << "Inorder Transversal: ";
    inorder(root);
    cout << endl;
    cout << "Preorder Transversal: ";
    preorder(root);
    cout << endl;
    cout << "Postorder Transversal: ";
    postorder(root);
    cout << endl;
    cout<<"Maximum value: "<<maximum(root)->data<<endl;
    cout<<"Minimum value: "<<minimum(root)->data<<endl;

    return 0;
}