#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	new_node->left = parent->left;
	if (new_node->left)
		new_node->left->parent = new_node;
	parent->left = new_node;

	return (new_node);
}

