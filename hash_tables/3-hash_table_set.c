#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _POSIX_C_SOURCE 200809L

/**
 * hash_table_set - adds or updates a key/value pair to
 * a hash table
 *
 * @ht: the hash table to add or update the key/value to
 * @key: the key of the key/value pair. Key can not be an
 * empty string
 * @value: the value of the key/value pair. Value must be
 * duplicated. Value can be an empty string
 *
 * Return: 1 if the function succeeds, 0 otherwise
 *
 * This function adds or updates a key/value pair to a hash
 * table. If the key already exists in the
 * hash table, the value associated with it is updated with
 * the new value. If there is a collision
 * when adding a new key/value pair, the new node is added
 * at the beginning of the linked list
 * associated with the hash table's index.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    if (ht == NULL || key == NULL || *key == '\0') {
        return 0;
    }

    unsigned long int index = key_index((const unsigned char *)key,
	ht->size);
    hash_node_t *node = ht->array[index];

    /* Check if the key already exists */
    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            free(node->value);
            node->value = strdup(value);
            if (node->value == NULL) {
                return 0;
            }
            return 1;
        }
        node = node->next;
    }

    /* new node born !!! XD */
    hash_node_t *new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL) {
        return 0;
    }
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->key == NULL || new_node->value == NULL) {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return 0;
    }

    /* set the new node to the beginning of the list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}


