#include "binary_trees.h"

/**
 * binary_tree_height_2 - Measures the height of a binary tree
 * @tree: Pointer to the root node of a tree
 * Return: Height of the tree or 0 if tree is NULL
 */

size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);

	left_h = binary_tree_height_2(tree->left);
	right_h = binary_tree_height_2(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of a binary tree
 * Return: Balance factor of the tree or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	left_h = binary_tree_height_2(tree->left);
	right_h = binary_tree_height_2(tree->right);

	return (left_h - right_h);
}
