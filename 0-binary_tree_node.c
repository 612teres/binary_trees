#include "binary_trees.h"

/**
 * binary_tree_node - creates new node
 * @parent - pointer to the node created
 * @value - the value placed in the new node
 * Return - new node: On error NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
