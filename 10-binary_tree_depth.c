#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)

	{
		size_t depth_left = 0, depth_right = 0;

		if (tree->parent)
			return (1 + binary_tree_depth(tree->parent));
		return (0);
	}
	return (0);
}
