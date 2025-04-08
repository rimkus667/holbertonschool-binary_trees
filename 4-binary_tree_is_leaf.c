#include "binary_trees.h"
/**
 * binary_tree_is_leaf - fctn qui vérifie si un nœud est une feuille
 * @node: pointeur sur le nœud à vérifier
 * Return: Renvoie 1 si feuille, 0 sinon ou si le nœud est NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
