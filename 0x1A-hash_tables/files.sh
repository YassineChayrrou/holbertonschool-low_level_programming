#!/bin/bash
echo "#include \"hash_tables.h\"" >> 0-hash_table_create.c
echo "#include \"hash_tables.h\"" >> 1-djb2.c
echo "#include \"hash_tables.h\"" >> 2-key_index.c
echo "#include \"hash_tables.h\"" >> 3-hash_table_set.c
echo "#include \"hash_tables.h\"" >> 4-hash_table_get.c
echo "#include \"hash_tables.h\"" >> 5-hash_table_print.c
echo "#include \"hash_tables.h\"" >> 6-hash_table_delete.c
echo "#include \"hash_tables.h\"" >> 100-sorted_hash_table.c
for i in {0..6}
do
	touch $i-main.c
done
