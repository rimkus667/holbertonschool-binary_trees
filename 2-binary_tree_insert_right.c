#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insère un nœud en tant qu'enfant droit
 * @parent: Ptr vers le noeud parent a qui on veut ajt 1 enfnt droit
 * @value: Valeur à mettre dans le nouveau nœud
 * Return: Pointeur vers le nœud, ou NULL si erreur ou parent NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
	return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
	new_node->right = parent->right;
	parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
