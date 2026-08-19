#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree for balance factor.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: If tree is NULL return 0, else return the height.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree->left ? 1 + tree_height(tree->left) : 1;
	right_h = tree->right ? 1 + tree_height(tree->right) : 1;

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	/* Calculate height for left and right sides */
	left_height = tree->left ? (int)tree_height(tree->left) : 0;
	right_height = tree->right ? (int)tree_height(tree->right) : 0;

	/* Balance Factor = Left Height - Right Height */
	return (left_height - right_height);
}

