#include "binary_trees.h"

void check_balance(avl_t **node, avl_t **tree);

/**
 * avl_in - checks if node is inserted
 *
 * @tree: tree root
 * @value: node value
 * Return: pointer to the new node
 */
avl_t *avl_in(avl_t **tree, int value)
{
	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		else
		{
			return (avl_in(&((*tree)->left), value));
		}
	}

	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		else
		{
			return (avl_in(&((*tree)->right), value));
		}
	}

	return (NULL);
}

/**
 * pre_rotation - pre-rotate for special case
 * @tree: tree root
 * @node: node to be checked
 * Return: 1 if rotate and 0 if not
 */
int pre_rotation(avl_t **node, avl_t **tree)
{
	if ((*node)->left && (*node)->left->left == NULL && (*node)->left->right)
	{
		((*node)->left) = binary_tree_rotate_left((*node)->left);
		check_balance(&((*node)->parent), tree);
		return (1);
	}

	if ((*node)->right && (*node)->right->right == NULL && (*node)->right->left)
	{
		(*node)->right = binary_tree_rotate_right((*node)->right);
		check_balance(&((*node)->parent), tree);
		return (1);
	}
	return (0);
}

/**
 * check_balance - checks balance and rotate if necesary
 *
 * @tree: tree root
 * @node: node to be checked
 */
void check_balance(avl_t **node, avl_t **tree)
{
	int balance;

	if (*node == NULL)
		return;

	balance = binary_tree_balance(*node);

	if (balance == 2)
	{
		if (pre_rotation(node, tree) == 0)
		{
			if ((*node)->parent == NULL)
			{
				*tree = binary_tree_rotate_right(*node);
			}
			else
			{
				if (*node == (*node)->parent->left)
					(*node)->parent->left = binary_tree_rotate_right(*node);
				else
					(*node)->parent->right = binary_tree_rotate_right(*node);
			}
		}
	}
	else if (balance == -2)
	{
		if (pre_rotation(node, tree) == 0)
		{
			if ((*node)->parent == NULL)
			{
				*tree = binary_tree_rotate_left(*node);
			}
			else
			{
				if (*node == (*node)->parent->left)
					(*node)->parent->left = binary_tree_rotate_left(*node);
				else
					(*node)->parent->right = binary_tree_rotate_left(*node);
			}
		}
	}
	else
	{
		check_balance(&((*node)->parent), tree);
	}
}


/**
 * avl_insert - inserts a value in a Binary Search Tree
 *
 * @tree: tree root
 * @value: node value
 * Return: pointer to the new node
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *node;

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	node = avl_in(tree, value);

	check_balance(&node, tree);

	return (node);
}
