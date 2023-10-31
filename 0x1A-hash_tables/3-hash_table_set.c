#include "hash_tables.h"


/**
 * hash_table_set - Add or update an element in the hash table
 * @ht: The hash table to add or update the key/value pair
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key (can be an empty string)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (!ht || !key || key[0] == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
			if (!new_node->key || !new_node->value)
			{
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (0);
			}

			new_node->next = ht->array[index];
			ht->array[index] = new_node;

			return (1);
}
