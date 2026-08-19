#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Safety check: if the tree/node is empty, return 0 */
	if (tree == NULL)
		return (0);

	/* If the node has at least one child (left OR right) */
	if (tree->left != NULL || tree->right != NULL)
	{
		/* Count this node as 1, and search its left and right subtrees */
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

	/* If it has no children (it's a leaf node), return 0 */
	return (0);
}

