  #ifndef HASH_TABLES_H
  #define HASH_TABLES_H_

  hash_table_t *hash_table_create(unsigned long int size);
  unsigned long int hash_djb2(const unsigned char *str);
  unsigned long int key_index(const unsigned char *key, unsigned long int size);
  int hash_table_set(hash_table_t *ht, const char *key, const char *value);
  char *hash_table_get(const hash_table_t *ht, const char *key);
  void hash_table_print(const hash_table_t *ht);
 void hash_table_delete(hash_table_t *ht);
 shash_table_t *shash_table_create(unsigned long int size);
 int shash_table_set(shash_table_t *ht, const char *key, const char *value);
 char *shash_table_get(const shash_table_t *ht, const char *key);
 void shash_table_print(const shash_table_t *ht);
 void shash_table_print_rev(const shash_table_t *ht);
 void shash_table_delete(shash_table_t *ht); 

#endif
