#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root to measure
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0, height_l = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		height_l += 1;
		height_l += binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		height_r += 1;
		height_r += binary_tree_height(tree->right);
	}
	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}
