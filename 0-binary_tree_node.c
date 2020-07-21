#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);
	new_node->n = value;

	new_node->parent = (binary_tree_t *)malloc(sizeof(binary_tree_t *));
	if (!new_node->parent)
		return (NULL);
	new_node->parent = parent;

	return (new_node);
}
