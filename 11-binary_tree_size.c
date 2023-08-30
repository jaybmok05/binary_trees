#include "binary_trees.h"

/**
 * binary_tree_size - function that return the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, right_height = 0, left_height = 0;

	if (!tree)
	{
		return (0);
	}

	else
	{
		left_height = binary_tree_size(tree->left);
		right_height = binary_tree_size(tree->right);
		size = right_height + left_height + 1;
	}
	return (size);
}
