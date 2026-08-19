#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;


/*binary_tree_print.c file function*/
void binary_tree_print(const binary_tree_t *tree);
/*Task 0 function Parent node*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/*Task 1 function Left node*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/*Task 2 function Right node*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/*Task 3 function Delete*/
void binary_tree_delete(binary_tree_t *tree);
/*Task 4 function Leaf nodes*/
int binary_tree_is_leaf(const binary_tree_t *node);
/*Task 5 function Root node*/
int binary_tree_is_root(const binary_tree_t *node);
/*Task 6 function Pre-order traversal*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/*Task 7 function In-order traversal*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/*Task 8 function Post-order traversal*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/*Task 9 function Height*/
size_t binary_tree_height(const binary_tree_t *tree);

#endif
