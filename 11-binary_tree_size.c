#include "binary_trees.h"
/**
 * binary_tree_size - Fonction qui mesure la taille d'un arbre binaire
 * @tree: Pointeur sur le nœud racine de l'arbre dont on veut mesurer la taille
 * Return: Taille de l'arbre (nombre total de nœuds), ou 0 si NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;

	if (tree == NULL)
	return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	return (size_left + size_right + 1);
}
