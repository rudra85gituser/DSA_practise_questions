/*
data type
Problem statement
Data type refers to the type of value a variable has and the way the computer interprets it.

Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:

Integer: 4 bytes
Long: 8 bytes
Float: 4 bytes
Double: 8 bytes
Character: 1 byte
You’re given a data type. Print its size in bytes.

Example :
Input: Long

Output: 8

Explanation: The size of a Long variable is given as 8 bytes.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
Long

Sample Output 1:
8

Explanation of sample input 1 :
The size of a Long variable is given as 8 bytes.

Sample Input 2:
Float

Sample Output 2:
4

Explanation of sample input 2 :
The size of a Float variable is given as 4 bytes.

Expected time complexity :
The expected time complexity is O(1).

Constraints :
‘type’ is one of the data types given above.

Time limit: 1 second

Hints:
Use conditional statements (like if-else or switch) to determine the data type provided as input and then print its corresponding size in bytes.
C++ (g++ 11)
1234567891011121314
	else return 0;
}
*/


int dataTypes(string type) {
	// Write your code here

	
	if(type=="Integer"){return 4;}
	else if(type=="Long"){return 8;}
	else if(type=="Float"){return 4;}
	else if(type=="Double"){return 8;}
	if(type=="Character"){return 1;}

	else return 0;
}

