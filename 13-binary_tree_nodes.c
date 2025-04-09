#include "binary_trees.h"
/**
 * binary_tree_nodes - Compte noeuds avec 1 avec au moins 1 enfants
 * @tree: pointeur sur le nœud racine de l'arbre pr compter le nbr de nœuds
 * Return: Le nombres de nœuds ou 0 si arbre NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t compte_gauche;
	size_t compte_droite;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (0);

	compte_gauche = binary_tree_nodes(tree->left);

	compte_droite = binary_tree_nodes(tree->right);

	return (compte_gauche + compte_droite + 1);

}

