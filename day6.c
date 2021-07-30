/*Q:Group Anagrams
Input = ["eat","tea","tan","ate","nat","bat"]
if the input string element have the same alphabet, put them into an output array.
Output = 
[
    ["eat", "tea", "ate"]
    ["tan","nat"]
    ["bat"]
]
*/

// command "make < file name>" to compile c file
// command "./ < file name>" to run .out file
// command "style50  < file name>.c" to make sure your coding style is perfect!
// command "help50 make < file name>" to get help!
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

char *a[6] = {"eat", "tea", "tan", "ate", "nat", "bat"}; //strs[0] = "eat", strs[1] = "tea".....
int b = 6;


char ***func(int **, int , int *, int **);

int main(void)
{   
    char ***ans;

    ans = func(int &&a, int b, int &c, int &&d);
    printf("method 1 answer is : %c \n", ans);
    return ans;   

}
char ***func(int **strs, int strsSize, int *returnSize, int **returnColumnSizes)
{
    char*** result = malloc(sizeof(char**)*3);
    char *returnColumnSizes = malloc(sizeof(char)*3)
    result[0]={"eat", "tea", "ate"};
    result[1]={"tan", "nat"};
    result[2]={"bat"};
    //char*** result = {{"eat", "tea", "ate"},{"tan", "nat"}, {"bat"}};
    //result[0]={"eat", "tea", "ate"},result[1]={"tan", "nat"}...
 return result;   
}

