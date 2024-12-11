#include "binary_trees.h"
/**
 * binary_tree_height - Mesure la hauteur d'un arbre binaire
 * @tree: Pointeur vers noeud racine de l'arbre pour mesurer la hauteur
 * Return: Hauteur de l'arbre ou 0 si l'arbre est NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int left_height;
int right_height;
if (tree == NULL)
return (-1);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (1 + (left_height > right_height ? left_height : right_height));
}
/**
 * binary_tree_size - Mesure la taille d'un arbre binaire
 * @tree: Pointeur noeud racine de l'arbre pour mesurer la taille
 * Return: Taille de l'arbre, ou 0 si l'arbre est NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
/**
* binary_tree_is_perfect - Vérifie si un arbre binaire est parfait
* @tree: Pointeur nœud racine de l'arbre à vérifier
* Return: 1 si l'arbre est parfait, 0 sinon
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height; /* stockage hauteur arbre*/
int size; /* stockage nb total de noeuds */
int perfect_size; /* stockage nb noeuds pour perfect tree */
if (tree == NULL) /* vérification paramètre valide */
return (0);
height = binary_tree_height(tree); /* appel fonction calcul hauteur */
size = binary_tree_size(tree); /* appel focntion calcul nb de noeuds */
perfect_size = (1 << (height + 1)) - 1; /* calcul pour perfect tree */
if (size == perfect_size)
/* comparaison taile arbre avec taille attendu perfect tree */
return (1);
return (0);
}
