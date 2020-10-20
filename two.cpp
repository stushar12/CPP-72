int isSumProperty(Node *root)
{
if(root==NULL)
return 1;
if(root->left==NULL&&root->right==NULL)
return 1;
else
{
    int sum=0;
    if(root->right!=NULL)
    sum=sum+root->right->data;
    if(root->left!=NULL)
    sum=sum+root->left->data;
    if(root->data==sum && isSumProperty(root->left) &&isSumProperty(root->right))
    return 1;
}
}