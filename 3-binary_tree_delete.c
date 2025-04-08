#include "binary_trees.h"
/**
 * binary_tree_delete - Fonction qui supprime un arbre binaire entier
 * @tree: Pointeur sur le nœud racine de l'arbre à supprimer
 * Return : Rien car type de retour void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);

}
