#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insère noeud enfant gauche d'un autre noeud
 * @parent: Pointeur vers le noeud parent
 * @value: Valeur à stocker dans le nouveau noeud
 * Return: Pointeur vers le noeud créé, ou NULL en cas d'échec
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_child; /* création noeud */
if (parent == NULL) /* vérification paramètre valide */
return (NULL);
new_child = malloc(sizeof(binary_tree_t)); /* allocation mémoire noeud */
if (new_child == NULL) /* vérification allocation */
return (NULL);
new_child->n = value; /* assignation champ n avec paramètre */
new_child->parent = parent; /* assignation champ parent à paramètres */
new_child->left = parent->left;
/* assignation noeud gauche parent devient neoud gauche new_child */
if (parent->left != NULL) /* vérification parent à déjà un enfant */
parent->left->parent = new_child;
/* Si parent a déjà enfant, MAJ champ parent pointer vers new_child */
parent->left = new_child; /* new_child devient enfant de gauche parent */
return (new_child);
}