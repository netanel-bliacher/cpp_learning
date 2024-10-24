#include <stdio.h>
#include <string>


int main()
{
    std::string input = "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC";
    int a_counter=0, g_counter=0, c_counter=0, t_counter = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'A'){
            a_counter++;
        }
        else if (input[i] == 'C')
        {
            c_counter++;
        }
        else if (input[i] == 'G')
        {
            g_counter++;
        }
        else if (input[i] == 'T')
        {
            t_counter++;
        }
        
    }
    printf("%d %d %d %d\n", a_counter, c_counter, g_counter, t_counter);
    return 0;
}