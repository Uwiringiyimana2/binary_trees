#include "binary_trees.h"

/**
 * binary_tree_height - measures the balance factor of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 *
 * Return: balance factor or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);

	right = binary_tree_height(tree->right);

	return (left > right ? left + 1 : right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 *
 * Return: balance factor or 0 if tree is NULL.
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
