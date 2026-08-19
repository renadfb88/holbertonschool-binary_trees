#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves.
 *
 * Return: If tree is NULL, the function must return 0, else return leaf count.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Safety check: if the tree/node is empty, it is not a leaf */
	if (tree == NULL)
		return (0);

	/* If a node has no left child AND no right child, it is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Otherwise, sum the leaves found in the left and right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

