#include <binary_trees.h>
#include "stdlib.h"
/**
 * binary_tree_insert_left - function that inserts node on the left side of a tree
 * parent: A pointer to the node to insert
 * Value: Value of the new node
 * Return: Return the new node pointer of NULL when failed
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return NULL;

    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = parent->left;
    new_node->right = NULL;

    if (parent->left != NULL)
        parent->left->parent = new_node;

    parent->left = new_node;

    return new_node;
}
