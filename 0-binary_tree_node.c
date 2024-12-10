#include "binary_trees.h"
/**
 * binary_tree_node - Crée un nœud d'arbre binaire
 * @parent: Pointeur vers le noeud parent
 * @value: Valeur à stocker dans le nouveau noeud
 * Return: Pointeur vers le nouveau noeud, ou NULL en cas d'échec
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new; /* création noeud */
new = malloc(sizeof(binary_tree_t)); /* allocation mémoire noeud */
if (new == NULL) /* vérification allocation */
return (NULL);
new->n = value; /* assignation champ n avec paramètre */
new->parent = parent; /* assignation champ parent avec paramètre */
new->left = NULL; /* initialise le fils gauche à NULL */
new->right = NULL; /* initialise le fils droit à NULL */
return (new);
}
