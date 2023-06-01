#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp = NULL;

	if (!value || !parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->right = NULL;
	new_node->left = NULL;
	new_node->n = value;
	new_node->parent = parent;
	if (parent->left)
	{
		temp = parent->left;
		temp->parent = new_node;
	}
	parent->left = new_node;
	new_node->left = temp;
	temp = NULL;

	return (new_node);
}

