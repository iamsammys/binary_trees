#include "binary_trees.h"

/**
 * binary_trees_nodes - counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to the root node of the
 * tree to count the number of nodes
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (tree->right || tree->left)
		nodes += 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return(nodes);
}
