ASSIGNMENT 1: DATA ALIGNMENT

In the output, the sizes of each variable match the expected sizes for their respective types: int (4 bytes), char (1 byte), double (8 bytes), and short (2 bytes). The addresses show that variables are aligned to memory boundaries based on their types. For example, the double variable is likely aligned to an 8-byte boundary, and the int is aligned to a 4-byte boundary.

ASSIGNMENT 2: STRUCT PADDING

•	In both cases, the struct size is 16 bytes, but the alignment and padding may differ. The order of variables impacts how the compiler adds padding to align fields on memory boundaries.
•	The char field in the first version of the struct is padded to align with the int and double fields, which increases the total struct size and memory footprint.

ASSIGNMENT 3: DATA ALIGNMENT WITH #PRAGMA PACK

• Without #pragma pack(1), the struct size is 16 bytes because of padding to align the fields.
•	With #pragma pack(1), the struct size is reduced to 13 bytes, as no padding is applied. However, tightly packing fields may result in slower access on certain architectures, due to misaligned data.
 
