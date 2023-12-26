// CPP program to find the lexicographically maximum substring.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// method 1

string lexicographically_maximum_substring (string str){
    
    string storage = str;
    for (size_t i = 0; i < str.length(); i++)
    {
        storage = max(storage,str.substr(i));
    }
    return storage;
}

int main(){
    string str="Gourab";
    cout<<"result is = "<<lexicographically_maximum_substring(str);
    return 0;
}

/* LeetCode solution

class Solution {
public:
    string lastSubstring(string s) {
        int i = 0, j = 1, k = 0;
        
        while (j + k < s.length()) {
            if (s[i + k] == s[j + k]) {
                k++;
            } else if (s[i + k] < s[j + k]) {
                i = max(i + k + 1, j);
                j = i + 1;
                k = 0;
            } else {
                j = j + k + 1;
                k = 0;
            }

            if (i == j) {
                j++;
            }
        }
        
        return s.substr(i);
    }
};


explanation

Certainly! Let's break down the provided C++ code step by step:

```cpp
class Solution {
public:
    string lastSubstring(string s) {
        int i = 0, j = 1, k = 0;
        
        while (j + k < s.length()) {
            if (s[i + k] == s[j + k]) {
                k++;
            } else if (s[i + k] < s[j + k]) {
                i = max(i + k + 1, j);
                j = i + 1;
                k = 0;
            } else {
                j = j + k + 1;
                k = 0;
            }

            if (i == j) {
                j++;
            }
        }
        
        return s.substr(i);
    }
};
```

Explanation:

1. **Initialization**:
   - `i`: The starting index of the current potential lexicographically maximum substring.
   - `j`: The starting index of the next potential substring to compare with the current one.
   - `k`: The common prefix length between the substrings being compared.

2. **While Loop**:
   - The loop continues as long as the sum of `j` and `k` is less than the length of the input string `s`.
   - The loop compares the characters of the substrings starting at indices `i + k` and `j + k`.

3. **Character Comparison**:
   - If `s[i + k]` is equal to `s[j + k]`, it means that the common prefix continues, so increment `k`.
   - If `s[i + k]` is less than `s[j + k]`, it means that the substring starting at index `j` is lexicographically greater than the current substring starting at index `i`. Update `i` to `max(i + k + 1, j)` to skip unnecessary comparisons and set `j` to `i + 1`. Reset `k` to 0.
   - If `s[i + k]` is greater than `s[j + k]`, it means that the current substring starting at index `i` is lexicographically greater. Update `j` to `j + k + 1` and reset `k` to 0.

4. **Additional Check**:
   - If `i` becomes equal to `j`, increment `j` by 1. This step ensures that there is always a difference between `i` and `j`, avoiding unnecessary comparisons.

5. **Return Statement**:
   - After the while loop, return the lexicographically maximum substring by extracting it using `s.substr(i)`.

This algorithm efficiently finds the lexicographically maximum substring without explicitly comparing all possible substrings. The use of the `k` variable helps in skipping unnecessary character comparisons, making the algorithm more efficient.

*/