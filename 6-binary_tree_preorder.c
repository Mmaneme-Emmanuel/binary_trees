#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - function that traverse using pre-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: If tree or func is NULL, do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return (NULL);

	func(tree->n);
	binary_tree_preorder(tree->left func);
	binary_tree_preorder(tree->right, func);
}

