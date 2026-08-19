#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL if it has none.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Safety check: if node is NULL or it has no parent (Root) */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If current node is the left child, return the right child */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If current node is the right child, return the left child */
	return (node->parent->left);
}

