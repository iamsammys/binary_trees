#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right_tree = 0, left_tree = 0;

	if (!tree)
		return (0);

	right_tree = binary_tree_heights(tree->right);
	left_tree = binary_tree_heights(tree->left);
	return (left_tree - right_tree);
}

/**
 * binary_tree_heights - measures the height of the tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree
 */
int binary_tree_heights(const binary_tree_t *tree)
{
	int height_r = 0, height_l = 0;

	if (!tree)
		return (0);

	height_l += 1 + binary_tree_heights(tree->left);
	height_r += 1 + binary_tree_heights(tree->right);
	if (height_r > height_l)
		return (height_r);

	return (height_l);
}
