#include "binary_trees.h"

/**
 * recursive_solution - function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int recursive_solution(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right == NULL) ||
		(tree->left != NULL && tree->right != NULL))
	{

		if (recursive_solution(tree->left) == 0 &&
			recursive_solution(tree->right) == 0)
		return (0);

	else
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_solution(tree));
}
