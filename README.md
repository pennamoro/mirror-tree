# mirror-tree

### The mirror of a binary tree T, esp(T), is the binary tree defined recursively as follows:

- If T is empty then esp(T) is the empty tree;
- If T has root Tr, left subtree Te and right subtree Td, then esp(T) is the binary tree with root Tr, left subtree esp(Td) and right subtree esp(Te).

The function `"eh_espelho¨` returns 1 if two trees are mirrors of each other and 0 otherwise.

`int eh_mirror(Tree * arv_a, Tree * arv_b);`

The function `"cria_espelho"` returns a new tree that mirrors the tree passed as a parameter;

`Tree * crea_espelho(Tree * arv_a);`
