#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right == NULL)
	{
		new_node->parent = parent;
		parent->right = new_node;
		return (new_node);
	}
	else
	{
		temp = parent->right;
		new_node->parent = parent;
		parent->right = new_node;
		temp->parent = new_node;
		new_node->right = temp;
		return (new_node);
	}
}
