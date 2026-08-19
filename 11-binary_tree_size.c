#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: If tree is NULL, the function must return 0, else return the size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Safety check: if the tree is empty, its size is 0 */
	if (tree == NULL)
		return (0);

	/* Size is equal to: 1 (current node) + size of left + size of right */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

