#include "binary_trees.h"
/**
 * binary_tree_leaves - Compte les feuilles dans un arbre binaire
 * @tree: Pointeur nœud racine de l'arbre pour compter les feuilles
 * Return: Nombre de feuilles, ou 0 si l'arbre est NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL) /* vérification paramètre valide */
return (0);
if (tree->left == NULL && tree->right == NULL)
/* vérification noeud courant est une feuille */
return (1);
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
/* appel récursif calcul nb de feuilles */
}
