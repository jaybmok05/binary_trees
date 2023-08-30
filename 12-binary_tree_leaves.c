#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, left_height = 0, right_height = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		left_height = binary_tree_leaves(tree->left);
		right_height = binary_tree_leaves(tree->right);
		leaf = left_height + right_height;
		return ((!left_height && !right_height) ? leaf + 1 : leaf + 0);
	}
}
