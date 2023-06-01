#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the number of leaf nodes in a binaary tree
 * @tree: pointer to the root node of the tree
 * Return: number of leaf nodes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		leaves += 1;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
