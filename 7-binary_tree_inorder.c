#include "binary_trees.h"
/**
 * binary_tree_inorder - Parcourt un arbre binaire en ordre infixe
 * @tree: Pointeur vers la racine de l'arbre à parcourir
 * @func: Pointeur vers une fonction à appeler pour chaque nœud
 *
 * Description: L'ordre infixe visite les nœuds dans cet ordre :
 *              - Sous-arbre gauche
 *              - Nœud courant
 *              - Sous-arbre droit
 *              Si `tree` ou `func` est NULL, ne fait rien.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
/* vérification paramètres valide */
return;
binary_tree_inorder(tree->left, func); /* parcourir le sous-arbre gauche */
func(tree->n); /* appliquer la fonction au nœud courant */
binary_tree_inorder(tree->right, func); /* parcourir le sous-arbre droit */
}
