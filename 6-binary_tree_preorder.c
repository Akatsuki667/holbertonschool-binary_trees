#include "binary_trees.h"
/**
 * binary_tree_preorder - Parcours un arbre en pré-ordre
 * @tree: Pointeur vers la racine de l'arbre à parcourir
 * @func: Pointeur vers une fonction à appeler pour chaque nœud
 *
 * Description: La fonction parcourt l'arbre en pré-ordre :
 *              - Nœud courant
 *              - Sous-arbre gauche
 *              - Sous-arbre droit
 *              Si `tree` ou `func` est NULL, elle ne fait rien.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL) /* vérification paramètres valide */
return;
func(tree->n); /* appel fonction sur noeud actuel */
binary_tree_preorder(tree->left, func); /* parcourir le sous-arbre gauche */
binary_tree_preorder(tree->right, func); /* parcourir sous-arbre droit */
}
