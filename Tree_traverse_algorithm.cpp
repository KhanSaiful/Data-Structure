void pre_order(Node *node)
{
    printf("%d ", node->data);

    if(node->left != NULL)
        pre_order(node->left);

    if(node->right != NULL)
        pre_order(node->right);

}

void post_order(Node *node)
{


    if(node->left != NULL)
        post_order(node->left);

    if(node->right != NULL)
        post_order(node->right);

    printf("%d ", node->data);

}

void in_order(Node *node)
{


    if(node->left != NULL)
        in_order(node->left);

    printf("%d ", node->data);

    if(node->right != NULL)
        in_order(node->right);



}
