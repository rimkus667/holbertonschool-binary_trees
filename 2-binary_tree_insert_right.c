#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insère un nœud en tant qu'enfant de droite d'un autre nœud
 * @parent: Pointeur vers le noeud parent du nouveau noeud
 * @value: Valeur à stocker dans le nouveau nœud
 * Return: pointeur sur le noeud créé, ou NULL en cas d'échec ou si parent est NULL
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
	new_node->right = parent->right;

	parent->right = new_node;

	return (new_node);
 }
