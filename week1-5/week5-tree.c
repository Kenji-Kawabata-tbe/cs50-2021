// (tree)二分探索木
// ルートが左の子より大きく、右の子より小さい。連結リストよりも早い。0(log n)。

// Implements a list of numbers as a binary search tree

#include <stdio.h>
#include <stdlib.h>

// Represents a node
typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

void free_tree(node *root);
void print_tree(node *root);

int main(void)
{
    // Tree of size 0
    node *tree = NULL;

    // Add number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;

    // Add number to list
    n = malloc(sizeof(node));
    if ( n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    // treeのnumberは2、今のnは1なのでleftにnの値を入れる
    tree->left = n;

    // Add number to list
    n = malloc(sizeof(node));
    if ( n == NULL)
    {
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    // treeのnumberは2、今のnは3なのでrightにnの値を入れる
    tree->right = n;

    // Print tree
    print_tree(tree);

    // Free tree
    free_tree(tree);
}

void free_tree(node *root)
{
    // print_treeと同じ
    if (root == NULL)
    {
        return;
    }
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // 再帰性の利用
    // ここではtreeのleftを引数にprint_treeを呼ぶので、prntfのroot->numberはleftの値になる
    //   その中で呼ぶprint_tree(root->left);はleftが存在しないノードなのでroot = NULLの条件に一致して終了する
    print_tree(root->left);
    printf("%i\n", root->number);
    // leftと同じ
    print_tree(root->right);

}