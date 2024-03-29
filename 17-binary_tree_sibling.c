#include "binary_trees.h"
/**
 * binary_tree_sibling -  function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: if node is NULL or has siblings return Null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
if (node == node->parent->left)
	return (node->parent->right);
return (node->parent->left);
}
