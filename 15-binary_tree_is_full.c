#include "binary_trees.h"
/**
 * binary_tree_is_full - Vérifie si un arbre binaire est plein.
 * @tree: Pointeur vers le noeud racine de l'arbre à vérifier.
 * Return: 1 si l'arbre est plein, sinon 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL) /* vérification paramètre valide */
return (0);
if (tree->left == NULL && tree->right == NULL) /* vérification feuille */
return (1); /* si oui, c'est un arbre plein */
if ((tree->left) && (tree->right)) /* Si noeuds à deux enfants */
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
/* vérification récursive sous-arbre */
return (0); /* sinon, arbre non plein */
}
