#include "binary_trees.h"
/**
 * binary_tree_height - Mesure la hauteur d'un arbre binaire
 * @tree: Pointeur vers noeud racine de l'arbre pour mesurer la hauteur
 * Return: Hauteur de l'arbre ou 0 si l'arbre est NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height; /* stockage hauteur sous-arbre */
size_t right_height; /* stockage hauteur sous-arbre */
if (tree == NULL) /* vérification paramètre */
return (0);
if (tree->left == NULL && tree->right == NULL)
/* vérification noeud courant est une feuille */
return (0);
left_height = binary_tree_height(tree->left);
/* appel récursif pour calculer la hauteur */
right_height = binary_tree_height(tree->right);
/* appel récursif pour calculer sla hauteur */
if (left_height > right_height)
/* comparaison hauteur pour savoir qui est le plus grand*/
return (1 + left_height);
/* si hauteur sous-arbre gauche plus grande retourne h+1 */
return (1 + right_height);
/* sinon retourne h+1 sous-arbre droit */
}
