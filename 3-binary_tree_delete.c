#include "binary_trees.h"
/**
 * binary_tree_delete - Supprime un arbre binaire entier.
 * @tree: Pointeur sur le noeud racine de l'arbre à supprimer.
 *
 * Description: Libère la mémoire allouée à chaque nœud
 * dans une traversée post-ordre (gauche, droite, racine).
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL) /* vérification parmaètres valide */
return;
binary_tree_delete(tree->left); /* appel récursif */
/* descente dans le sous-arbre gauche */
/* Une fois à la feuille retour sur appel fonction pour passer noeud droit */
binary_tree_delete(tree->right); /* appel récursif */
/* descente dans le sous-arbre droite */
free(tree); /* libération allocation */
}
