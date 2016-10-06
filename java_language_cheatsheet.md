| PRIMITIVE TYPES |             |
|-----------------|-------------|
| Integer: byte (8bit), short (16bit), int (32bit), long (64bit) | **Decim:** float (32bit), double (64bit) | **Other:** boolean (1bit), char (Unicode) | **Hex:** 0x1AF | **Binary:** 0b00101 | **Long:** 888888888888L |

| java.lang.String Methods |                |
|--------------------------|----------------|
| // Operator +, e.g. "fat" + "cat" -> "fatcat" | boolean equals(String *other*) | int length(); | char charAt(int *i* ); | String substring(int *i*, int *j* ); // j not incl. | boolean contains(String *sub* ); | boolean startsWith(String *pre* ); | boolean endsWith(String *post* ); | int compareTo(String *other* ); | String replaceAll(String *str*, String *find* ); | String[] split(String *delim* ); |

| StringBuffer, StringBuilder |               |
|-----------------------------|---------------|
| StringBuffer is synchronised StringBuilder. Use StringBuilder unless multithreaded. Use the .append (xyz ) methods to concat. toString() converts back to string. |

 
