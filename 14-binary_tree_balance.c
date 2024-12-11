#include "binary_trees.h"
/**
 * binary_tree_height - Mesure la hauteur d'un arbre binaire.
 * @tree: Pointeur noeud racine de l'arbre pour mesurer la hauteur.
 * Return: Hauteur de l'arbre. Si l'arbre est NULL 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;
if (tree == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return ((left_height > right_height ? left_height : right_height)+1);
}
/**
 * binary_tree_balance - Mesure le facteur d'équilibre d'un arbre binaire.
 * @tree: Pointeur noeud racine de l'arbre pour mesurer facteur d'équilibre.
 * Return: Facteur d'équilibre. Si l'arbre est NULL, le résultat est 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height = 0, right_height = 0;
if (tree == NULL) /* vérification paramètre valide */
return (0);
if (tree->left) /* vérification sous-arbre existe */
left_height = binary_tree_height(tree->left);
/* appel fontion calcul hauteur de ce dernier */
if (tree->right) /* vérification sous-arbre existe */
right_height = binary_tree_height(tree->right);
/* appel fontion calcul hauteur de ce dernier */
return (left_height - right_height);
/* calcul facteur d'équilibre */
}
