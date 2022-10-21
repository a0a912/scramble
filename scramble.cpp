#include <iostream>
#include <cstdlib>
#include <stdio.h>

	#include <stdlib.h>

	#include <string.h>

	 
	using namespace std;

	 

	char* scramble(char* str)

	{

	    int i,m,k;

	 

	    for(i=1;i<10;i++){

	        m = rand() % 7;

	            k = rand() % 7;

	        if(m == k)

	          {

	            i--;

	            continue;

	        }

	            char temp = str[k];

	            str[k] = str[m];

	            str[m] = temp;

	    }

	    return str;

	}

	 

	int main()

	{

	    char *word1 = new char[10];//allocate some memory for your pointer

	   strcpy(word1, "randomString");

	 /*

	    if (word1 == NULL){

	        printf("Memmory allocation failed.");

	        exit(EXIT_FAILURE);

	    }

	    strcpy(word1, "computer");
	    */

	 //   printf(word1);

	  //  printf(scramble(word1));
	   scramble(word1) ;
	  // cout << endl << scramble(word1) << endl;

 
 strcpy(word1, "Ahmed");
scramble(word1) ;
scramble(word1) ;
 // cout << endl << scramble(word1) << endl;
	 
//cout << endl << scramble(word1) << endl;

string input;
int input_confirm = 1;
int num_of_guesses1 = 0;

std::cout << "Unscrample the following: " << word1 << std::endl << endl;

do {
    cin >> input;
    
    if (input != "Ahmed")
    {
        cout << "Incorrect answer" << endl<< endl;
        num_of_guesses1++;
        
        if (num_of_guesses1 == 3)
        {
            cout << "Out of guesses" << endl<< endl;
            return 0;
        }
    }
    
    else {
        cout << "Correct" << endl<< endl;
        
        input_confirm = 0;
    }
}


while (input_confirm == 1);



free(word1);
//free(word2);


	   return 0;
	   

	}

