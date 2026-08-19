#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if it has none.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	/* Safety check: if node, parent, or grandparent is NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = node->parent->parent;

	/* If parent is the left child of grandparent, uncle is the right child */
	if (grandparent->left == parent)
		return (grandparent->right);

	/* If parent is the right child of grandparent, uncle is the left child */
	return (grandparent->left);
}

