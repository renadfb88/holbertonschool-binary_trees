#include "binary_trees.h"

/**
 * tree_stats - Measures the depth and checks leaf levels.
 * @tree: A pointer to the node.
 *
 * Return: The height of the tree.
 */
size_t tree_stats(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree->left ? 1 + tree_stats(tree->left) : 1;
	right_h = tree->right ? 1 + tree_stats(tree->right) : 1;

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL return 0, else 1 if perfect or 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	/* Case 1: A leaf node is perfect by default */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Case 2: If it misses one of the children, it cannot be perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Check if the heights of both subtrees are equal */
	left_h = tree_stats(tree->left);
	right_h = tree_stats(tree->right);

	if (left_h == right_h)
	{
		/* Recursively check if both left and right subtrees are perfect */
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}

