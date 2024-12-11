#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insère un noeud enfant de droite d'un parent
 * @parent: Pointeur vers le noeud parent
 * @value: Valeur à stocker dans le nouveau noeud
 * Return: Pointeur vers le noeud créé, ou NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_child; /* création noeud */
if (parent == NULL) /* vérification paramètre valide */
return (NULL);
new_child = malloc(sizeof(binary_tree_t)); /* allocation mémoire */
if (new_child == NULL) /* vérification allocation mémoire */
return (NULL);
new_child->n = value; /* assignation champ n avec paramètre */
new_child->parent = parent; /* assignation champ parent à paramètres */
new-child->left = NULL;
new_child->right = parent->right;
/* assignation noeud droit parent devient neoud droit new_child */
if (parent->right != NULL) /* vérification parent à déjà un enfant */
parent->right->parent = new_child;
/* Si parent a déjà enfant, MAJ champ parent pointer vers new_child */
parent->right = new_child; /* new_child devient enfant de droite parent */
return (new_child);
}
