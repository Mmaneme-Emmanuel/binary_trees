#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor of a tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_height - function that measures the height of a tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, return 0
 */
int binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
