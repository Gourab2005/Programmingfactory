// Count occurrences of a substring recursively
#include <iostream>
#include <string>
using namespace std;

int countSubstring(string str1, string str2){
    int count=0;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1.substr(i, str2.length())== str2)
        {
            count++;
        }
    }
    return count;
}

// Driver function
int main()
{
    // Test case
    string str1 = "abababab", str2 = "ab";
    
    // Output the result of countSubstring function for the given strings
    cout << "Occurrences: " << countSubstring(str1, str2) << endl;

    return 0;
}

// gfg method
/*// Recursive C++ program to count the number of
// times string str2 occurs in string str1 

#include <iostream>
#include <string>
using namespace std;

// Function to count the number of
// times string str2 occurs in string str1
int countSubstring(string str1, string str2)
{
	int n1 = str1.length();
	int n2 = str2.length();

	// Base Case
	if (n1 == 0 || n1 < n2)
		return 0;

	// Recursive Case
	// Checking if the first substring matches
	if (str1.substr(0, n2).compare(str2) == 0)
		return countSubstring(str1.substr(1), str2) + 1;

	// Otherwise, return the count from
	// the remaining index
	return countSubstring(str1.substr(1), str2);
}


// Driver function
int main()
{
	string str1 = "geeksforgeeks", str2 = "geeks";
	cout << countSubstring(str1, str2) << endl;

	str1 = "aaaaa", str2 = "aaa";
	cout << countSubstring(str1, str2) << endl;

	return 0;
}
*/

/*Chatgpt method
#include <iostream>
#include <string>
using namespace std;

// Function to count the occurrences of substring str2 in string str1 recursively
int countSubstring(string str1, string str2, int index = 0, int count = 0)
{
    // Get the length of the input strings
    int n1 = str1.length();
    int n2 = str2.length();

    // Base Case: If the index reaches the end of the string
    if (index == n1)
        return count;

    // Check if substring starting from the current index matches str2
    if (str1.substr(index, n2) == str2)
        count++;

    // Call the function recursively with the next index
    return countSubstring(str1, str2, index + 1, count);
}

// Driver function
int main()
{
    // Test case
    string str1 = "abababab", str2 = "ab";
    
    // Output the result of countSubstring function for the given strings
    cout << "Occurrences: " << countSubstring(str1, str2) << endl;

    return 0;
}

*/
