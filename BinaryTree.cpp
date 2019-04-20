#include<bits/stdc++.h>

using namespace std;
typedef struct node Node;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

Node *create_Node(int data)
{
    Node *new_node = (struct node*)malloc(sizeof(Node));

    new_node->data = data;


    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}

void add_left_child(Node *node, Node *child)
{
    node->left = child;
}

void add_right_child(Node *node, Node *child)
{
    node->right = child;
}

Node *create_tree()
{
    Node *two = create_Node(2);
    Node *seven = create_Node(7);
    Node *nine = create_Node(9);
    add_left_child(two,seven);
    add_right_child(two, nine);

    Node *one = create_Node(1);
    Node *six = create_Node(6);
    add_left_child(seven, one);
    add_right_child(seven, six);

    Node *five = create_Node(5);
    Node *ten = create_Node(10);

    add_left_child(six, five);
    add_right_child(six, ten);

    Node *eight = create_Node(8);
    add_right_child(nine, eight);

    Node *three = create_Node(3);
    Node *four = create_Node(4);

    add_left_child(eight, four);
    add_right_child(eight, three);

    return two;
}

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
int main()
{

    Node *root = create_tree();

    pre_order(root);

    printf("\n\n");
    post_order(root);

    printf("\n\n");

    in_order(root);
    printf("\n\n");

     return 0;
}
