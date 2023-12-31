#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is leaf
 * @node: Pointer to the node to check
 * Return: 1 if it's a leaf else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!node->left && !node->right);
}
