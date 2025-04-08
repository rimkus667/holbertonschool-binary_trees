#include "binary_trees.h"
/**
 * binary_tree_depth - Mesure la profondeur d'un nœud dans un arbre binaire
 * @tree: pointeur sur le nœud pour mesurer la profondeur
 * Return: 0 si arbre NULL, sinon profondeur du nœud
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t compteur = 0;
	
	if (tree == NULL)
	return (0);

	while (tree->parent != NULL)
	{
	compteur ++;
	tree = tree->parent;
	}

	return (compteur);
} 
