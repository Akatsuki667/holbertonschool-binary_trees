#include "binary_trees.h"
/**
 * binary_tree_postorder - Parcourt un arbre binaire en ordre postfixe
 * @tree: Pointeur vers la racine de l'arbre à parcourir
 * @func: Pointeur vers une fonction à appeler pour chaque nœud
 *
 * Description: L'ordre postfixe visite les nœuds dans cet ordre :
 *              - Sous-arbre gauche
 *              - Sous-arbre droit
 *              - Nœud courant
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL) /* vérification param§tres valides */
return;
binary_tree_postorder(tree->left, func); /* parcourir sous-arbre gauche */
binary_tree_postorder(tree->right, func); /* parcourir sous-arbre gauche */
func(tree->n); /* appliquer la fonction noeud courant */
}
