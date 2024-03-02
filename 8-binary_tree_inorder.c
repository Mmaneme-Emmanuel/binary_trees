#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
        if (tree == NULL || func == NULL)
                return;


        binary_tree_inorder(tree->left, func);
        binary_tree_inorder(tree->right, func);
	func(tree->n);
}
