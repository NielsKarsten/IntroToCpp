#include <iostream>

using namespace std;

struct Node
{
    int val;    // contains the value
    int depth;  // contains the depth of the node
    Node *left; // left child
    Node *right;// right child
};

int FibTreeLeafs(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return FibTreeLeafs(root->left) + FibTreeLeafs(root->right);
}

int FibTreeSize(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return 1 + FibTreeSize(root->left) + FibTreeSize(root->right);
}

int FibbTreeDepth(Node *node)
{
    if (node == NULL)
        return 0;
    else if (node->left == NULL && node->right == NULL)
        return node->depth;
    else
        if (node->left == NULL)
            return node->depth + FibbTreeDepth(node->right);
        else if (node->right == NULL)
            return node->depth + FibbTreeDepth(node->left);
        else
            return max(FibbTreeDepth(node->left), FibbTreeDepth(node->right));
}

Node * fibbTree(int n, int depth)
{
    Node *root = new Node;
    root->depth = depth;
    if (n == 0)
    {
        root->val = 1;
    }
    else if (n == 1)
    {
        root->val = 1;
    }
    else
    {
        Node * left = fibbTree(n - 1, depth + 1);
        Node * right = fibbTree(n - 2, depth + 1);
        root->left = left;
        root->right = right;
        root->val = root->left->val + root->right->val;
    }
    return root;
}
string GetCallOrder(Node *root)
{
    string str = "";
    if (root == NULL)
        return "";
    str += to_string(root->val) + " ";
    if (root-> left != NULL)
        str += GetCallOrder(root->left);
    if (root->right != NULL)
        str += GetCallOrder(root->right);
    return str;
}
int main(){
    int n;
    cin >> n;
    Node * root = fibbTree(n, 1);
    string callorder = GetCallOrder(root);
    cout << "Call tree in pre-order: " << callorder << endl;
    cout << "Call tree size: " << FibTreeSize(root) << endl;
    cout << "Call tree depth: " << FibbTreeDepth(root) << endl;
    cout << "Call tree leafs: " << FibTreeLeafs(root) << endl;
}