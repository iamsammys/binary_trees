#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t t_size = 1;

	if (!tree)
		return (0);

	t_size += binary_tree_size(tree->left);
	t_size += binary_tree_size(tree->right);
	return (t_size);
}
