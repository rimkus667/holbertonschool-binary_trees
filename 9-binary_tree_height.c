#include "binary_trees.h"
/**
 * binary_tree_height - Fonction qui mesure la hauteur d'un arbre binaire
 * @tree: Pointeur sur le nœud racine de l'arbre pour mesurer la hauteur
 * Return: Hauteur de l'arbre, ou 0 si NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hauteur_gauche = 0;
	size_t hauteur_droite = 0;

	if (tree == NULL)
	return (0);

	hauteur_gauche = binary_tree_height(tree->left);

	hauteur_droite = binary_tree_height(tree->right);

	if (hauteur_gauche > hauteur_droite)
	{
		return (hauteur_gauche)+1;
	}

	else
	{
		return (hauteur_droite)+1;
	}

}
