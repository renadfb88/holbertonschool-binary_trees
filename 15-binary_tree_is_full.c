#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL return 0, else return 1 if full or 0 if not.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Safety check: if tree is empty, it is not full */
	if (tree == NULL)
		return (0);

	/* Case 1: If it is a leaf node (0 children), it meets the criteria */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Case 2: If it has BOTH left and right children, check recursively */
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}

	/* Case 3: If it has only one child, then it is NOT full */
	return (0);
}

