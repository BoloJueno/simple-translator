/*********************************************************************************************************
This is to certify that this project is our own work, based on our personal efforts in studying and applying the concepts
learned. We have constructed the functions and their respective algorithms and corresponding code by ourselves. The
program was run, tested, and debugged by our own efforts. We further certify that we have not copied in part or whole or
otherwise plagiarized the work of other students and/or persons.

Jonathan Angelo C. Bueno, DLSU ID# 12115908
Kevin Michael H. Pajarillo, DLSU ID# 12145122
*********************************************************************************************************/
#include <stdio.h>
#include <string.h>

//========================typedef========================

typedef char String20[21];
typedef char String150[151];//string input translation

//========================typedef========================

//========================Structs========================

struct languageTranslationPair{
  String20 language;
  String20 translation;
}; // language translation pair

//========================Structs========================

//========================Functions========================

/* howToUse prints the title and what the translator does
*/	
void howToUse() {
	
	printf("\n========================================\n");
	printf("\n%28s\n", "Simple Translator"); //prints center at 20 spaces
	printf("\n----------------------------------------\n");
	
	printf("\n%s\n%s\n%s\n\n%s\n%s\n%s\n%s\n%s\n%s\n\n%s\n",
	
		"Simple Translator is a tool that allows ",
		"for the translation of words, sentences, ",
		"or even entire paragraphs. ",
    
		"It lets users initialize language ",
		"translation pairs that will tell the ",
		"program what to translate. These ",
		"initializations can then be exported to ",
		"a text file so that it may be reused in ",
		"the future.", 
	
		"Thank You and Enjoy!"
		
	);
	
	printf("\n========================================\n");
	
}//howToUse function

/* enterNumber prints the string that tells the user to enter a number of their desired option
*/	
void enterNumber() {
	
	printf("\nEnter the number of your desired option: ");
	
}//enterNumber

/* invalidInput prints if what the user inputted is invalid
*/
void invalidInput() {
	
	printf("\nInvalid Input\n");
	
}//invalidInput

/* mainMenu prints the main menu
*/
void mainMenu() {
	
	printf("\n1 - Manage Data\n");
	printf("2 - Translate Menu\n");
	printf("3 - Exit Program\n");
	
}//mainMenu

/* manageDataMenu prints the manage data menu
*/
void manageDataMenu() {
	
	printf("\n1 - Add Entry\n");
	printf("2 - Add Translations\n");
	printf("3 - Delete Entry\n");
	printf("4 - Delete Translation\n");
	printf("5 - Display All Entries\n");
	printf("6 - Search Word\n");
	printf("7 - Search Translation\n");
	printf("8 - Export\n");
	printf("9 - Import\n");
	printf("10 - Exit\n");
	
}//manageDataMenu

/* translateMenu prints the translate menu
*/
void translateMenu() {
	
	printf("\n1 - Translate\n");
	printf("2 - Exit\n");
	
}//translateMenu

/* returnMain prints a string of going back to main menu
*/
void returnMain() {
	
	printf("\nReturning to Main Menu...\n");
	
}//returnMain

/* returnManageData prints a string of going back to manage data menu
*/
void returnManageData() {
  
  printf("\nReturning to Manage Data Menu...\n");
  
}//returnManageData

/* returnTranslate prints a string of going back to translate menu
*/
void returnTranslate() {
	
	printf("\nReturning to Translate Menu...\n");
	
}//returnTranslate

/* translateConfirm prints a string if user wants to translate a new word and its choices
*/
void translateConfirm() {
	
	printf("\nDo you want to translate a new text with the same source and translated language?\n");
    printf("1 - Yes\n");
    printf("2 - No\n");
    
}//translateConfirm

/* addEntryText prints a string of entering the language
*/
void addEntryText() {
	
	printf("\nEnter the language: ");
	
}//addEntryText

/* newEntryText prints a string if it is a new entry and its choices
*/
void newEntryText() {
  
  printf("\nIs this a new entry?\n");
  printf("1 - Yes\n");
  printf("2 - No\n");
  
}//newEntryText

/* inputPairText prints a string for tinputting another pair under an entry
*/
void inputPairText() {

  printf("\nInput another pair under this entry?\n");
  printf("1 - Yes\n");
  printf("2 - No\n");
  
}//inputPairText

/* noEntries prints a string that there are no entries yet
*/
void noEntries() {

  printf("\nThere are no entries initialized\n");
  
}//noEntries

/* addedEntryText prints that an entry was added after using the add entry function based on the current entryNumber

 @param entryNumber - int containing current number of entries

 Pre-condition: entryNumber should accuratly represent the current number of entries
*/
void addedEntryText(int entryNumber) {

  entryNumber++;
  
  if (entryNumber % 10 == 1) {
    printf("\n*Added a %dst entry*\n", entryNumber);
  } else if (entryNumber % 10 == 2) {
    printf("\n*Added a %dnd entry*\n", entryNumber);
  } else if (entryNumber % 10 == 3) {
    printf("\n*Added a %drd entry*\n", entryNumber);
  } else {
    printf("\n*Added a %dth entry*\n", entryNumber);
  }
  
}//addedEntryText()

/* addedPairText prints that translation pair was added after using the add translation function
 @param entryNumber - int containing current number of entries
 Pre-condition: entryNumber should accuratly represent the current number of entries
*/
void addedPairText(int entryNumber) {

  entryNumber++;

  printf("\n*Added a new translation pair under entry #%d*\n", entryNumber);
  
}//addedPairText

/* thickSep prints a separator made up of equal signs; used to present text in an orderly manner
*/
void thickSep() {
  
  printf("\n========================================\n");
  
}//thickSep

/* thinSep prints a separator made up of dashes; used to present text in an orderly manner
*/
void thinSep() {

  printf("\n----------------------------------------\n");
  
}//thinSep

/* entryFoundText prints if an entry is found
 @param count - number of entries that were found to have similarities
 Pre-condition: count should accuratly represent the number of entries that were found to have similarities
*/
void entryFoundText(int count) {

  if (count == 1) {
    printf("\n%14d Entry Found\n", count);
  } else {
    printf("\n%13d Entries Found\n", count);
  }
  
}//entryFoundText

/* entryNumberText prints which entry is being accesed
 @param entryNumber - int containing index of entry being accessed
 Pre-condition: entryNumber should accuratly represent the index of entry being accessed
*/
void entryNumberText(int entryNumber) {

  printf("\n%23s%d\n", "Entry #", entryNumber);
  
}//entryNumberText

/* deletionPrompt prints prompt telling user if deletion is going to be continued
*/
void deletionPrompt() {

  printf("\nWill deletion still be done?\n");
  printf("1 - Yes\n");
  printf("2 - No\n");
  
}//deletionPrompt

/* scrollText prints a sort of scrolling system
 @param type - indicates which printf statement should be executed
 Pre-condition: type is correct because this part of the code is hardcoded
*/
void scrollText(int type) {

  if (type == 1){//only one entry left
    printf("%25s", "[2] Exit");
  } else if (type == 2) {//at first entry
    printf("%37s", "[2] Exit  [3] Next ->");
  } else if (type == 3) {//at last entry
    printf("%24s", "<- [1] Prev  [2] Exit");
  } else if (type == 4) {//in between first and last entry
    printf("%37s", "<- [1] Prev  [2] Exit  [3] Next ->");
  }
  
}//scrollText

/* scrollDeleteText prints a sort of scrolling system for delete translation and entry
 @param type - indicates which printf statement should be executed
 Pre-condition: type is correct because this part of the code is hardcoded
*/
void scrollDeleteText(int type) {

  if (type == 1){//only one entry left
    printf("%26s", "[2] Delete");
  } else if (type == 2) {//at first entry
    printf("%38s", "[2] Delete  [3] Next ->");
  } else if (type == 3) {//at last entry
    printf("%25s", "<- [1] Prev  [2] Delete");
  } else if (type == 4) {//in between first and last entry
    printf("%38s", "<- [1] Prev  [2] Delete  [3] Next ->");
  }
  
}//scrollDeleteText

/* stringTrim trims string of leading white spaces and trailing white spaces
 @param str - string to be trimmed
 Pre-condition: str is within its range of characters
*/
void stringTrim(char *str) {
	
	int i, j;
	int leading = 0;
	int last = strlen(str);

  //deletes leadin whitespaces
	while (str[leading] == ' ') {
		i = leading;
		
		for(j = leading + 1; j < strlen(str) + 1; j++) {
			str[i] = str[j];
			
			i++;
		}

	}

  //deletes trailing white spaces
  while (str[last] == ' ' || str[last] == '\t' || str[last] == '\n' || str[last] == 0) {
    last--;
  }

  str[last + 1] = '\0';
  
}//stringTrim

/* inputString function that allows for user input of string. It automatically removes the newline char at the end of the string by making it a null byte
 @param str - string to be inputted
 Pre-condition: str is within its range of characters
*/
void inputString(char *str) {
	
	fgets(str, 150, stdin);
	str[strlen(str) - 1] = '\0';
	
}//inputString

/* inputInt function that allows for user input of integer. Automatically flushes out newline that messes with inputString()'s fgets
 @param n - integer to be inputted
 Pre-condition: n is an integer
*/
void inputInt(int* n) {
	
	int temp;
	
	scanf("%d", &temp);
	
	*n = temp;
	
	scanf("%c", (char *) stdin);
	
}//inputInt

/* tokenizer tokenizes a string based on a given separator
 @param tokenizedString - array of tokenized strings
 @param str - string to be tokenized
 @param s - separator
 @param stringSize - size of the string to be tokenized

 Pre-condition: str is within its range of characters
 Pre-condition: s is within the string
 Pre-condition: stringSize accurately stores the size of the string to be tokenized
*/
void tokenizer(String150 tokenizedString[150], char *str, char *s, int *stringSize) {
	
	int i;
	char *token = strtok(str, s);
						
	for (i = 0; token != NULL; i++) {
    	strcpy(tokenizedString[i], token);
      token = strtok(NULL, s);
      *stringSize += 1;
	}
	
}//tokenizer

/* inputChecker decides whether an input is within the range of inputs allowed
 @param input - inputted string
 @param minVal - minimum value the input could take
 @param maxVal - maximum value the input could take

 @return 1 if input is within range, 0 if otherwise

 Pre-condition: input is an integer
 Pre-condition: minVal and maxVal are correct. This part of the code is hardcoded
*/
int inputChecker(int input, int minVal, int maxVal) {
	
	if (input >= minVal && input <= maxVal) {
		return 1;//input is within range
	}
	
	return 0;//input is outside range
	
}//inputChecker

/* letterChecker determines whether a char is a letter, space, null byte, or a number
 @param c - inputted character

@return 1 if character is a letter, space, null byte, or a number. 0 if otherwise

 Pre-condition: c is a character
*/
int letterChecker(char c) {
	
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || //char is a letter (65-90 & 97-122)
		c == 32 || //char is a space (32)
		c == 0 || //char is null (0)
		(c >= 49 && c <= 57) //char is a number (49-57)
	) {
		return 1;//char is a letter
	}
	
	return 0;//char is not a letter
	
}//letterChecker

/* symbolRemover removes symbols from a string
 @param stringInput - inputted string
 @param n - size of stringInput

 Pre-condition: stringInput is within its range of characters
 Pre-condition: n accurately represents the size of stringInput
*/
void symbolRemover(String150 stringInput, int n) {
	
	int i, j, k;
	
	for (i = 0; i < n; i++) {
	
		if (letterChecker(stringInput[i]) == 0) {
			k = i;
			
			//push all chars from right of symbol to the left by one, deleting the symbol
			for (j = k + 1; j < n + 1; j++) {
				stringInput[k] = stringInput[j];
				k++;//increments with j
			}//for
			
			i--;
		}//if
	}//for
	
}//symbolRemover

/* stringCapitalization capitalizes first letter of a string and lower cases the rest
 @param str - inputted string

 Pre-condition: str is within its range of characters
*/
void stringCapitalization(char* str) {

  int i;

  //capitalizes first letter
  if (str[0] >= 97 && str[0] <= 122) {
    str[0] -= 32;
  }

  // uncapitalizes the rest of the string
  for (i = 1; i < strlen(str); i++) {
    if (str[i] >= 65 && str[i] <= 90) {
      str[i] += 32;
    }
  }//for
  
}//stringCapitalization

/* addEntryInput gets a translation pair input
 @param pair - array to store the inputted language translation pair

 Pre-condition: pair can store 2 strings
*/
void addEntryInput(String20 pair[]) {
	
	printf("\nEnter the language of the word: ");
	inputString(pair[0]);
  stringTrim(pair[0]);
  stringCapitalization(pair[0]);
  
	printf("\nEnter the word: ");
	inputString(pair[1]);  
  stringTrim(pair[1]);
  // stringCapitalization(pair[1]);
	
}//addEntryInput

/* entrySorter sorts an entry alphabetically based on the initialized languages
 @param entries - array of structs that contains all entries
 @param entrySize - size of an entry

 Pre-condition: entries should be correctly initialized with string declarations for the language translation pairs
 Pre-condition: entrySize should accurately represent the size of an entry
*/
void entrySorter(struct languageTranslationPair entries[], int entrySize) {

  int i, j, lowestIndex;
  String150 temp[2];
  
  if (entrySize > 1) {
    for (i = 0; i < entrySize; i++) {
      lowestIndex = i;
      for (j = i + 1; j < entrySize; j++) {
        if (strcmp(entries[lowestIndex].language, entries[j].language) > 0) {
          lowestIndex = j;
        }
      }
  
      strcpy(temp[0], entries[i].language);
      strcpy(temp[1], entries[i].translation);
      
  		strcpy(entries[i].language, entries[lowestIndex].language);
      strcpy(entries[i].translation, entries[lowestIndex].translation);
      
  		strcpy(entries[lowestIndex].language, temp[0]);
      strcpy(entries[lowestIndex].translation, temp[1]);
    }//for
  }//if  
  
}//entrySorter

/* entryFoundPrint prints the entry that was found to have similarities with the input in add entry and translation
 @param count - count of entries that have similarities
 @param simIndex - array of integers that stores the indexes of the entries that have similarities
 @param entrySize - array of integers that contains the size of an entry per index
 @param entries - array of structs that contains all entries

 Pre-condition: count, simIndex, and entrySize accurately represents their respective values
 Pre-condition: entries should be correctly initialized with string declarations for the language translation pairs
*/
void entryFoundPrint(int count, int simIndex[], int entrySize[], struct languageTranslationPair entries[150][10]) {

  int i, j;

      for (i = 0; i < count; i++) {

        if (i == 0) {
          thickSep();
        } else {
          thinSep();
        }

        printf("\n[%d]\n", i + 1);

        //sorts entry
        entrySorter(&entries[simIndex[i]][0], entrySize[simIndex[i]]);

        //prints entries with similarities
        for (j = 0; j < entrySize[simIndex[i]]; j++) {
          printf("\nLanguage: %s - Translation: %s", entries[simIndex[i]][j].language, entries[simIndex[i]][j].translation);
        }//for
        
        printf("\n");
        
      }//for
  
}//entryFoundPrint

/* displayAllEntries displays all entries based on simIndex primarily used in display all entries
 @param entryNumber - int containing index of entry being accessed
 @param simIndex - array of integers that stores the indexes of the entries that have similarities
 @param entrySize - array of integers that contains the size of an entry per index
 @param entries - array of structs that contains all entries

 Pre-condition: entryNumber, simIndex, and entrySize accurately represents their respective values
 Pre-condition: entries should be correctly initialized with string declarations for the language translation pairs
*/
void displayAllEntries(struct languageTranslationPair entries[150][10], int entrySize[], int entryNumber, int simIndex[]) {

  int i, j, input;

  for (i = 0; i < entryNumber; i++) {
    //text of current entry number
    thickSep();
    entryNumberText(i + 1);
    thickSep();

    entrySorter(entries[i], entrySize[i]);
    //prints langTran pairs under entry
    for (j = 0; j < entrySize[simIndex[i]]; j++) {
      printf("\nLanguage: %s - Translation: %s", entries[simIndex[i]][j].language, entries[simIndex[i]][j].translation);
    }//for

    printf("\n");
    thinSep();
    
    if (entryNumber == 1) {
      scrollText(1);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 2, 2) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    } else if (i == 0) {//if first entry is displayed
      scrollText(2);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 2, 3) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    } else if (i == entryNumber - 1) {//last entry displayed
      scrollText(3);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 1, 2) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    } else {//in between first and last entries displayed
      scrollText(4);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 1, 3) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    }//if else

    //processes input
    if (input == 1) {
      i -= 2;
    } else if (input == 2) {
      i = entryNumber - 1;
    }
    
  }//for
  
}//displayAllEntries

/* deleteEntries executes delete entries function. displays all entries based on simIndex then asks user which entry to delete and deletes them
 @param entryNumber - int containing index of entry being accessed
 @param simIndex - array of integers that stores the indexes of the entries that have similarities
 @param entrySize - array of integers that contains the size of an entry per index
 @param entries - array of structs that contains all entries

 Pre-condition: entryNumber, simIndex, and entrySize accurately represents their respective values
 Pre-condition: entries should be correctly initialized with string declarations for the language translation pairs
*/
void deleteEntries(struct languageTranslationPair entries[150][10], int entrySize[], int* entryNumber, int simIndex[]) {

  int i, j, n, m, input;

  for (i = 0; i < *entryNumber; i++) {
    //text of current entry number
    thickSep();
    entryNumberText(i + 1);
    thickSep();

    entrySorter(entries[i], entrySize[i]);
    //prints langTran pairs under entry
    for (j = 0; j < entrySize[i]; j++) {
      printf("\nLanguage: %s - Translation: %s", entries[simIndex[i]][j].language, entries[simIndex[i]][j].translation);
    }//for

    printf("\n");
    thinSep();

    if (*entryNumber == 1) {
      scrollDeleteText(1);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 2, 2) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    } else if (i == 0) {//if first entry is displayed
      scrollDeleteText(2);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 2, 3) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    } else if (i == *entryNumber - 1) {//last entry displayed
      scrollDeleteText(3);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 1, 2) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    } else {//in between first and last entries displayed
      scrollDeleteText(4);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 1, 3) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    }//if else

    //processes input
    if (input == 1) {
      i -= 2;
    } else if (input == 2) {
      i = *entryNumber - 1;
    }
    
  }//for

  printf("Enter the number of the entry to delete: ");
  inputInt(&input);

  //deleting entry
  if (inputChecker(input, 1, *entryNumber) == 1) {//deleting entry
    //deleting entry
    *entryNumber -= 1;
    
    for (n = input - 1; n < *entryNumber; n++) {
      entrySize[n] = entrySize[n + 1];
      //printf("Only input numbers from 1 - %d", entryNumber);
      
      for(m = 0; m < entrySize[n]; m++) {
        strcpy(entries[n][m].language, entries[n + 1][m].language);
        strcpy(entries[n][m].translation, entries[n + 1][m].translation);
      }//for
      
    }//for

    printf("\n%30s%d *\n", "* Deleted Entry #", input);
  } else {
    invalidInput();
    if (*entryNumber > 1) {
      printf("Only input numbers from 1 - %d\n", *entryNumber);
    } else {
      printf("Only input the number 1\n");
    }
    
  }//if else
  
}//deleteEntries

/* deleteTranslations executes delete translation function. displays all entries based on simIndex then asks uer which entry to delete from then which pair to delete
 @param entryNumber - int containing index of entry being accessed
 @param simIndex - array of integers that stores the indexes of the entries that have similarities
 @param entrySize - array of integers that contains the size of an entry per index
 @param entries - array of structs that contains all entries

 Pre-condition: entryNumber, simIndex, and entrySize accurately represents their respective values
 Pre-condition: entries should be correctly initialized with string declarations for the language translation pairs
*/
void deleteTranslations(struct languageTranslationPair entries[150][10], int entrySize[], int* entryNumber, int simIndex[]) {

  int i, j, n, m, input, inputTrans, prevEntrySize;
  int input2 = 1;
  String20 deletedLanguage, deletedTranslation;

  for (i = 0; i < *entryNumber; i++) {
    //text of current entry number
    thickSep();
    entryNumberText(i + 1);
    thickSep();

    entrySorter(entries[i], entrySize[i]);
    //prints langTran pairs under entry
    for (j = 0; j < entrySize[i]; j++) {
      printf("\nLanguage: %s - Translation: %s", entries[simIndex[i]][j].language, entries[simIndex[i]][j].translation);
    }//for

    printf("\n");
    thinSep();

    if (*entryNumber == 1) {
      scrollDeleteText(1);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 2, 2) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    } else if (i == 0) {//if first entry is displayed
      scrollDeleteText(2);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 2, 3) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    } else if (i == *entryNumber - 1) {//last entry displayed
      scrollDeleteText(3);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 1, 2) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    } else {//in between first and last entries displayed
      scrollDeleteText(4);//print scroll
      thickSep();

      enterNumber();
      inputInt(&input);

      //input checker
      while (inputChecker(input, 1, 3) == 0) {
        invalidInput();
        
        enterNumber();
        inputInt(&input);
      }//input checker
    }//if else

    //processes input
    if (input == 1) {
      i -= 2;
    } else if (input == 2) {
      i = *entryNumber - 1;
    }
    
  }//for

  printf("Enter the number of the entry to delete from: ");
  inputInt(&input);

  //deleting entry
  if (inputChecker(input, 1, *entryNumber) == 1) {//deleting entry
    prevEntrySize = entrySize[input - 1] + 1;
    
    while (input2 == 1 && prevEntrySize > entrySize[input - 1]) {
      if (entrySize[input - 1] == 0) {//if there is only one pair in the entry 
        //deleting entry
        prevEntrySize = entrySize[input - 1];
        *entryNumber -= 1;
        
        for (n = input - 1; n < *entryNumber; n++) {
          entrySize[n] = entrySize[n + 1];
          //printf("Only input numbers from 1 - %d", entryNumber);
          
          for(m = 0; m < entrySize[n]; m++) {
            strcpy(entries[n][m].language, entries[n + 1][m].language);
            strcpy(entries[n][m].translation, entries[n + 1][m].translation);
          }//for
          
        }//for

        printf("\n%29s%d *\n", "* Deleted Entry #", input);
      } else {//deleting translation pair
        entrySorter(entries[input - 1], entrySize[input - 1]);

        thinSep();
        //prints langTran pairs under entry
        for (j = 0; j < entrySize[input - 1]; j++) {
          printf("\n[%d] Language: %s - Translation: %s", j + 1, entries[simIndex[input - 1]][j].language, entries[simIndex[input - 1]][j].translation);
        }//for
        printf("\n");
        thinSep();
  
        printf("\nEnter the number of the pair to delete: ");
        inputInt(&inputTrans);
  
        //input checker
        if (inputChecker(inputTrans, 1, entrySize[input - 1]) == 0) {
          invalidInput();
          
          deletionPrompt();
          enterNumber();
          inputInt(&input2);
  
          //input checker
          while (inputChecker(input2, 1, 2) == 0) {
            invalidInput();
          
            deletionPrompt();
            enterNumber();
            inputInt(&input2);
          }//while
        } else {
          //storing for print
          strcpy(deletedLanguage, entries[input - 1][inputTrans - 1].language);
          strcpy(deletedTranslation, entries[input - 1][inputTrans - 1].translation);
          
          //deleting translations
          prevEntrySize = entrySize[input - 1];
          entrySize[input - 1] -= 1;
          
          for (n = inputTrans - 1; n < entrySize[input - 1]; n++) {
            //moves elements
            strcpy(entries[input - 1][n].language, entries[input - 1][n + 1].language);
            strcpy(entries[input - 1][n].translation, entries[input - 1][n + 1].translation);
          }//for

          printf("\n\n%28s%d:", "Deleted Pair #", inputTrans);
          printf("\n[%d] Language: %s - Translation: %s\n", inputTrans, deletedLanguage, deletedTranslation);
        }//if else
      }//else if   
    }//while
  } else {
    invalidInput();
    if (*entryNumber > 1) {
      printf("Only input numbers from 1 - %d\n", *entryNumber);
    } else {
      printf("Only input the number 1\n");
    }
    
  }//if else
  
}//deleteTranslations

/* entrySimChecker iterates through every entry to determine if langTranPair exists in them and stores the index in simIndex 
 @param langTranPair - array of strings that store a user's input of a language translation pair
 @param simIndex - array of integers that stores the indexes of the entries that have similarities
 @param count - count of entries that have similarities
 @param entries - array of structs that contains all entries

 Pre-condition: count and simIndex accurately represents their respective values
 Pre-condition: entries should be correctly initialized with string declarations for the language translation pairs
 Pre-condition: inputs in langTranPair should be within the range of characters
*/
void entrySimChecker(struct languageTranslationPair entries[150][10], String20 langTranPair[], int simIndex[], int* count) {

  int i, j;

  for (i = 0; i < 150; i++) {
    for (j = 0; j < 10; j++) { 
      if (strcasecmp(entries[i][j].language, langTranPair[0]) == 0) {
        if (strcasecmp(entries[i][j].translation, langTranPair[1]) == 0) {

          simIndex[*count] = i;//stores index of entries that are similar to the input
          *count += 1;//number of entries that are similar to the input
          
        }//if
      }//if
    }//for
  }//for
  
}//entrySimChecker

/* searchSimChecker iterates through every entry to determine if searchWord exists in them and stores the index in simIndex 
 @param searchWord - string to search in the entries
 @param simIndex - array of integers that stores the indexes of the entries that have similarities
 @param count - count of entries that have similarities
 @param entries - array of structs that contains all entries

 Pre-condition: count and simIndex accurately represents their respective values
 Pre-condition: entries should be correctly initialized with string declarations for the language translation pairs
 Pre-condition: searchWord should be within the range of characters
*/
void searchSimChecker(struct languageTranslationPair entries[150][10], String20 searchWord, int simIndex[], int* count) {

  int i, j;

  for (i = 0; i < 150; i++) {
    for (j = 0; j < 10; j++) { 
      if (strcasecmp(entries[i][j].translation, searchWord) == 0) {

        simIndex[*count] = i;//stores index of entries that are similar to the input
        *count += 1;//number of entries that are similar to the input
        
      }//if
    }//for
  }//for
  
}//entrySimChecker


/* addEntryTran adds a language translation pair in an entry
 @param n - entry index
 @param j - index of language translation pair
 @param langTranPair - array of strings that store a user's input of a language translation pair
 @param entries - array of structs that contains all entries

 Pre-condition: n and j are non-negative numbers
 Pre-condition: entries should be correctly initialized with string declarations for the language translation pairs
 Pre-condition: inputs in langTranPair should be within the range of characters
*/
void addEntryTran(int n, int j, struct languageTranslationPair entries[150][10], String20 langTranPair[]) {

  strcpy(entries[n][j].language, langTranPair[0]);
  strcpy(entries[n][j].translation, langTranPair[1]);
  
}//addEntryTran

/* translator excutes translate deature. Iterates through tokenizedStrings and searches entries with the same translation
 @param tokenizedStrings - array of tokenized strings
 @param lSource - language of the original string
 @param lTranslated - language of the string to be translated to
 @param entrySize - array of integers that contains the size of an entry per index
 @param entries - array of structs that contains all entries
 @param entryNumber - int containing index of entry being accessed
 @param stringSize - size of the string to be tokenized

 Pre-condition: entryNumber, stringSize, and entrySize accurately represents their respective values
 Pre-condition: tokenizedStrings should contain at least 1 character
 Pre-condition: lSource and lTranslated should be in initialized entries for the string to be translated
 Pre-condition: entries should be correctly initialized with string declarations for the language translation pairs
*/
void translator(String150 tokenizedStrings[], String20 lSource, String20 lTranslated, struct languageTranslationPair entries[150][10], int entryNumber, int entrySize[], int stringSize) {

  int i, j, k, n;
  int count = 0;

  for (k = 0; k < stringSize; k++) {//iterates through tokenizedStrings[]
    count = 0;
    for (i = 0; i < entryNumber && count == 0; i++) {//iterates through entries col
      for (j = 0; j < entrySize[i] && count == 0; j++) {// iterates through entries row
        
        if (strcasecmp(lSource, entries[i][j].language) == 0) {//if lSource matches in the entry i
          if (strcasecmp(tokenizedStrings[k], entries[i][j].translation) == 0) {//if string matches in the entry i
            for (n = 0; n < entrySize[i] && count == 0; n++) {//loops through entry i elements
              if (strcasecmp(lTranslated, entries[i][n].language) == 0) {//checks if lTranslated is matches
                count++;
                strcpy(tokenizedStrings[k], entries[i][n].translation);//replaces word
              }//if
            }//for
          }//if
        }//if
        
      }//for
    }//for
  }//for
  
}//translator

/* exportEntries executes export feature
 @param entryNumber - int containing index of entry being accessed
 @param entrySize - array of integers that contains the size of an entry per index
 @param entries - array of structs that contains all entries
 @param simIndex - array of integers that stores the indexes of the entries that have similarities

 Pre-condition: entryNumber, simIndex, and entrySize accurately represents their respective values
 Pre-condition: entries should be correctly initialized with string declarations for the language translation pairs
*/
void exportEntries(struct languageTranslationPair entries[150][10], int entrySize[], int entryNumber, int simIndex[]){

  int i, j;
  char fileName[30];
  FILE *fp;  
  
  fprintf(stdout, "Input filename with .txt to export to\n");
  fscanf(stdin, "%s", fileName);
  fp = fopen(fileName, "w");
  printf("\n");
  for (i = 0; i < entryNumber; i++) {
     entrySorter(entries[i], entrySize[i]);
    //prints langTran pairs under entry
    for (j = 0; j < entrySize[i]; j++) {
      fprintf(fp, "%s: %s\n", entries[simIndex[i]][j].language, entries[simIndex[i]][j].translation);
    }//for
    fprintf(fp, "\n");
  }//for
  
  fclose(fp);
}// export entries

/* importPrompt prints a string asking the user if this will be added an entry to the current list
*/
//importPrompt
void importPrompt() {

  fprintf(stdout, "Would you like to add this entry to the current list?\n");
  fprintf(stdout, "1 - Yes\n");
  fprintf(stdout, "2 - No\n");
  
}//importPrompt

/* importEntries executes import feature
 @param *entryNumber - int containing index of entry being accessed and to be updated
 @param entrySize - array of integers that contains the size of an entry per index
 @param entries - array of structs that contains all entries
 @param simIndex - array of integers that stores the indexes of the entries that have similarities

 Pre-condition: *entryNumber, simIndex, and entrySize accurately represents their respective values
 Pre-condition: user imports a proper list with the correct format
*/
//import entries
void importEntries(struct languageTranslationPair entries[150][10], int entrySize[], int* entryNumber, int simIndex[]){

  int i = 0, j, stringSize = 0;
  int tempEntrySize = 0;
  int input = 0;
  char fileName[30];
  FILE *fp;  
  String150 langTranPair[10];
  char string40[41];
  struct languageTranslationPair tempEntries[150][10];
  
  fprintf(stdout, "Input filename with .txt to import\n");
  fscanf(stdin, "%s", fileName);
  fp = fopen(fileName, "r");
  printf("\n");
  
  for (i = 0; strcmp(string40, "\n") != 0; i++) {
     entrySorter(entries[i], entrySize[i]);
    
    //imports langTran pairs into entry
    for (j = 0; strcmp(string40, "\n") != 0; j++) {

      printf(" ");
      //inputs pair
      if (i == 0) {
        fgets(string40, 150, fp);
      } else if (i > 0 && j > 0) {
        fgets(string40, 150, fp);
      }
      
      if (strcmp(string40, "\n") != 0) {//deletes the new line
        string40[strlen(string40) - 1] = '\0';
      }
      //tokenizes pair
      tokenizer(langTranPair, string40, ": ", &stringSize);     

      //inputs pairs in temp struct
      if (strcmp(string40, "\n") != 0) {
        strcpy(tempEntries[i][j].language, langTranPair[0]);
        strcpy(tempEntries[i][j].translation, langTranPair[1]);
        tempEntrySize++;
      }

    }//for

    thinSep();
    printf("\n");
    //prints temp entry
    for (j = 0; j < tempEntrySize; j++) {
      printf("Language: %s - Translation: %s\n", tempEntries[i][j].language, tempEntries[i][j].translation); 
    }
    thinSep();

    printf("\n");
    
    importPrompt();

    enterNumber();
    inputInt(&input);
    
    //input checker
    while (inputChecker(input, 1, 2) == 0) {
      invalidInput();
    
      importPrompt();
      enterNumber();
      inputInt(&input);
    }//input checker
    
    if (input == 1){//user adds entry to main entry
      fprintf(stdout, "This entry has been added to the list\n");

      //inputs temp entry to main entry
      for (j = 0; j < tempEntrySize; j++) {
        strcpy(entries[*entryNumber][j].language, tempEntries[i][j].language);
        strcpy(entries[*entryNumber][j].translation, tempEntries[i][j].translation);
      }

      entrySize[*entryNumber] = tempEntrySize;
      *entryNumber += 1;
    } else if (input == 2){//user skips entry
      fprintf(stdout, "Entry has been skipped\n");
    }//else if
    
    tempEntrySize = 0;//restarts tempEntrySize
    fgets(string40, 150, fp);//checks if nextline is end of the entries
  }//for
  fclose(fp);
  returnManageData();
}// import entries

//========================Functions========================
	
int main() {
	
	//========================variable declarations========================
	
	int input, mInput, tInput, i, entryInput;
  int mDInput = 0;
  int stringSize = 0;
  int entryNumber = 0; //6;//number of entries
  int count = 0;
  int entrySize[150] = {0};//{6, 5, 1, 1, 1, 1}{0};//number of pairs in x entries
  int simIndex[150];
	char separator[2] = " ";
	String20 lSource, lTranslated, langTranPair[10], searchInput;
	String150 stringInput, tokenizedStrings[150];
	struct languageTranslationPair entries[150][10];

	// strcpy(entries[0][0].language, "English");
	// strcpy(entries[0][0].translation, "love");
	
	// strcpy(entries[0][1].language, "Tagalog");
	// strcpy(entries[0][1].translation, "mahal");
	
	// strcpy(entries[0][2].language, "Hiligaynon");
	// strcpy(entries[0][2].translation, "gugma");
	
	// strcpy(entries[0][3].language, "Cebuano");
	// strcpy(entries[0][3].translation, "gugma");
	
	// strcpy(entries[0][4].language, "Spanish");
	// strcpy(entries[0][4].translation, "amor");
	
	// strcpy(entries[0][5].language, "Chinese");
	// strcpy(entries[0][5].translation, "ai");
	
	// //*************************
	
	// strcpy(entries[1][0].language, "Tagalog");
	// strcpy(entries[1][0].translation, "mahal");
	
	// strcpy(entries[1][1].language, "Kapampangan");
	// strcpy(entries[1][1].translation, "mal");
	
	// strcpy(entries[1][2].language, "Cebuano");
	// strcpy(entries[1][2].translation, "mahal");
	
	// strcpy(entries[1][3].language, "English");
	// strcpy(entries[1][3].translation, "expensive");
	
	// strcpy(entries[1][4].language, "Chinese");
	// strcpy(entries[1][4].translation, "gui");

 //  //*************************
	
	// strcpy(entries[2][0].language, "English");
	// strcpy(entries[2][0].translation, "love");

 //  //*************************
	
	// strcpy(entries[3][0].language, "English");
	// strcpy(entries[3][0].translation, "love");

 //  //*************************
	
	// strcpy(entries[4][0].language, "English");
	// strcpy(entries[4][0].translation, "love");

 //  //*************************
	
	// strcpy(entries[5][0].language, "English");
	// strcpy(entries[5][0].translation, "love");
	
	//========================variable declarations========================

	howToUse();
	
	while (mInput != 3) {
	  
		mainMenu();
		enterNumber();
		inputInt(&mInput);
		
		//input checker
		while (inputChecker(mInput, 1, 3) == 0) {
			invalidInput();
			
			mainMenu();
			enterNumber();
			inputInt(&mInput);
		}//input checker
		
		if (mInput == 1) {//Manage Data Menu
      while (mDInput != 1){
      mDInput = 0;
			manageDataMenu();
			enterNumber();
			inputInt(&input);
			
			//input checker
			while (inputChecker(input, 1, 10) == 0) {
				invalidInput();
				
				manageDataMenu();
				enterNumber();
				inputInt(&input);
			}//input checker
	    
		    switch(input){
		      case 1:
            //================================add entry=================================
            //================================add entry=================================
            //================================add entry=================================
            //================================add entry=================================
            //================================add entry=================================
            //================================add entry=================================
            while (input != 2){
  		        addEntryInput(langTranPair);
  
              count = 0;
              
              //checks if entry exists in the database
              entrySimChecker(entries, langTranPair, simIndex, &count);

              thickSep();
              entryFoundText(count);

              if (count > 0) {
                //prints entries with matching tranLang pair
                entryFoundPrint(count, simIndex, entrySize, entries);
              }

              thickSep();

              //is this a new entry?
              newEntryText();
              enterNumber();
              inputInt(&input);

              //input checker
              while (inputChecker(input, 1, 2) == 0) {
                invalidInput();

                ////is this a new entry?
                newEntryText();
                enterNumber();
                inputInt(&input);
              }//input checker

              if(input == 1) {//creating entry
                
                //creates entry
                addEntryTran(entryNumber, 0, entries, langTranPair);

                entrySize[entryNumber] = 1;

                addedEntryText(entryNumber);

                //inputing translation pair under entry
                inputPairText();
                enterNumber();
                inputInt(&input);

                //input checker
                while (inputChecker(input, 1, 2) == 0) {
                  invalidInput();

                  //inputing translation pair under entry
                  inputPairText();
                  enterNumber();
                  inputInt(&input);
                }//input checker

                while (input != 2) {
                
                  addEntryInput(langTranPair);
                  addEntryTran(entryNumber, entrySize[entryNumber], entries, langTranPair);

                  addedPairText(entryNumber);
                  entrySize[entryNumber]++;

                  //inputing translation pair under entry
                  inputPairText();
                  enterNumber();
                  inputInt(&input);
  
                  //input checker
                  while (inputChecker(input, 1, 2) == 0) {
                    invalidInput();

                    //inputing translation pair under entry
                    inputPairText();
                    enterNumber();
                    inputInt(&input);
                  }//input checker     
                  
                }//while
              }//if

              entryNumber++;
              
            }//while loop for add more entries

            returnManageData();
		        break;
          
		      case 2:
            //===============================add translations=======================
            //===============================add translations=======================
            //===============================add translations=======================
            //===============================add translations=======================
            //===============================add translations=======================
            //===============================add translations=======================
            addEntryInput(langTranPair);

            count = 0;
            
            //checks if entry exists in the database
            entrySimChecker(entries, langTranPair, simIndex, &count);

            thickSep();
            entryFoundText(count);

            if (count > 0){//if there is an entry that matches pair
              
              //prints entries with matching tranLang pair
              entryFoundPrint(count, simIndex, entrySize, entries);

              thickSep();
              
              if (count == 1){//if entry that matches pair is one
                
                //translation should be added to same entry
                addEntryInput(langTranPair);
                addEntryTran(simIndex[0], entrySize[simIndex[0]], entries, langTranPair);

                addedPairText(simIndex[0]);
                entrySize[simIndex[0]]++;

                //inputing translation pair under entry
                inputPairText();
                enterNumber();
                inputInt(&input);

                //input checker
                while (inputChecker(input, 1, 2) == 0) {
                  invalidInput();

                  //inputing translation pair under entry
                  inputPairText();
                  enterNumber();
                  inputInt(&input);
                }//input checker

                while (input == 1) {
                  //translation should be added to same entry
                  addEntryInput(langTranPair);
                  addEntryTran(simIndex[0], entrySize[simIndex[0]], entries, langTranPair);

                  addedPairText(simIndex[0]);
                  entrySize[simIndex[0]]++;
  
                  //inputing translation pair under entry
                  inputPairText();
                  enterNumber();
                  inputInt(&input);
  
                  //input checker
                  while (inputChecker(input, 1, 2) == 0) {
                    invalidInput();

                    //inputing translation pair under entry
                    inputPairText();
                    enterNumber();
                    inputInt(&input);
                  }//input checker
                }//while

              } else {//if entry that matches pair is more than one
                
                printf("\nWhich entry would you like this to be added to?\n");
                enterNumber();
                inputInt(&entryInput);
                
                //translation should be added to same entry
                addEntryInput(langTranPair);
                addEntryTran(simIndex[entryInput - 1], entrySize[simIndex[entryInput - 1]], entries, langTranPair);

                addedPairText(simIndex[entryInput - 1]);
                entrySize[simIndex[entryInput - 1]]++;

                //inputing translation pair under entry
                inputPairText();
                enterNumber();
                inputInt(&input);

                //input checker
                while (inputChecker(input, 1, 2) == 0) {
                  invalidInput();

                  //inputing translation pair under entry
                  inputPairText();
                  enterNumber();
                  inputInt(&input);
                }//input checker

                while (input == 1) {
                  //translation should be added to same entry
                  addEntryInput(langTranPair);
                  addEntryTran(simIndex[entryInput - 1], entrySize[simIndex[entryInput - 1]], entries, langTranPair);

                  addedPairText(simIndex[entryInput - 1]);
                  entrySize[simIndex[entryInput - 1]]++;
  
                  //inputing translation pair under entry
                  inputPairText();
                  enterNumber();
                  inputInt(&input);
  
                  //input checker
                  while (inputChecker(input, 1, 2) == 0) {
                    invalidInput();

                    //inputing translation pair under entry
                    inputPairText();
                    enterNumber();
                    inputInt(&input);
                  }//input checker
                }//while
                
              }//if else

            } else {//no entry matches pair
              
              thickSep();
              
              printf("\nThat entry does not exist\n");
              printf("Please use the Add Entry option\n");
              
            }//else for non existing entry
            
            returnManageData();
            break;
		      case 3: //Delete Entry
            //===============================Delete Entry=======================
            //===============================Delete Entry=======================
            //===============================Delete Entry=======================
            //===============================Delete Entry=======================
            //===============================Delete Entry=======================
            //===============================Delete Entry=======================

            if (entryNumber > 0) {
              //puts all index of entries in simIndex to display all entries
              for (i = 0; i < entryNumber; i++) {
                simIndex[i] = i;
              }
              
              deleteEntries(entries, entrySize, &entryNumber, simIndex);
            } else if (entryNumber == 0) {
              noEntries();
            }

            returnManageData();
		        break;
		      case 4: //Delete Translation
            //===============================Delete Translation=======================
            //===============================Delete Translation=======================
            //===============================Delete Translation=======================
            //===============================Delete Translation=======================
            //===============================Delete Translation=======================
            //===============================Delete Translation=======================

            if (entryNumber > 0) {
  		        //puts all index of entries in simIndex to display all entries
              for (i = 0; i < entryNumber; i++) {
                simIndex[i] = i;
              }
              
              deleteTranslations(entries, entrySize, &entryNumber, simIndex);
            } else if (entryNumber == 0) {
              noEntries();
            }

            returnManageData();
		        break;
		      case 5: //Display All Entries
            //===============================Display All Entries=======================
            //===============================Display All Entries=======================
            //===============================Display All Entries=======================
            //===============================Display All Entries=======================
            //===============================Display All Entries=======================
            //===============================Display All Entries=======================

            if (entryNumber > 0) {
              //puts all index of entries in simIndex to display all entries
              for (i = 0; i < entryNumber; i++) {
                simIndex[i] = i;
              }
              
              displayAllEntries(entries, entrySize, entryNumber, simIndex);
            } else if (entryNumber == 0) {
              noEntries();
            }
            
            returnManageData();
		        break;
		      case 6: //Search Word
            //===============================Search Word=======================
            //===============================Search Word=======================
            //===============================Search Word=======================
            //===============================Search Word=======================
            //===============================Search Word=======================
            //===============================Search Word=======================

            printf("\nEnter the word to search: ");
            
            //input search query
            inputString(searchInput);
            stringTrim(searchInput);

            count = 0;//number of similarities
            searchSimChecker(entries, searchInput, simIndex, &count);//iterates through entries and checks similarities

            if (count > 0) {
              displayAllEntries(entries, entrySize, count, simIndex);//displays all entries with similarities
            } else {
              printf("\nThat word does not exist in any entry\n");
            }
            
            returnManageData();
		        break;
		      case 7: //Search Translation
            //===============================Search Translation=======================
            //===============================Search Translation=======================
            //===============================Search Translation=======================
            //===============================Search Translation=======================
            //===============================Search Translation=======================
            //===============================Search Translation=======================
            
            //input search query
            addEntryInput(langTranPair);

            count = 0;//number of similarities
            entrySimChecker(entries, langTranPair, simIndex, &count);//iterates through entries and checks similarities
            
            if (count > 0) {
              displayAllEntries(entries, entrySize, count, simIndex);//displays all entries with similarities
            } else {
              printf("\nThat pair does not exist in any entry\n");
            }
            
            returnManageData();
		        break;
		      case 8: //Export
            //===============================Export=======================
            //===============================Export=======================
            //===============================Export=======================
            //===============================Export=======================
            //===============================Export=======================
            //===============================Export=======================

            //puts all index of entries in simIndex to display all entries
            for (i = 0; i < entryNumber; i++) {
              simIndex[i] = i;
            }
            
            printf("\nCreate a .txt beside the program to \nexport its contents\n\n");
            exportEntries(entries, entrySize, entryNumber, simIndex);
		        break;
		      case 9: //Import
            //===============================Import=======================
            //===============================Import=======================
            //===============================Import=======================
            //===============================Import=======================
            //===============================Import=======================
            //===============================Import=======================
            printf("\nHave the import file in the same folder \nas the program to import\n\n");
            importEntries(entries, entrySize, &entryNumber, simIndex);
		        break;
		      case 10://exit
		        returnMain();
            mDInput = 1;
		        break;
		    }//switch case for manage data        
      }//while loop for Manage data Menu
		} else if (mInput == 2) {//Translate Menu
		    input = 1;
		    
		    while(input != 2) {//translate menu loop
		  		translateMenu();
		  		enterNumber();
		  		inputInt(&input);
		  		
		  		//input checker
		  		while (inputChecker(input, 1, 2) == 0) {
		  			invalidInput();
		  			
		  			translateMenu();
		  			enterNumber();
					  inputInt(&input);
		  		}//input checker
		      
		      	if(input == 1) {
		      		
			        printf("\nWhat is the language of the text?\n");
					    inputString(lSource);
			        
			        printf("\nWhat is the text you want to translate?\n");			        
					    inputString(stringInput);
					    tokenizer(tokenizedStrings, stringInput, separator, &stringSize);//tokenizes string
					
			        printf("\nWhat is the language you want it translated to?\n");					
					    inputString(lTranslated);

              //translate tokenized strings
              translator(tokenizedStrings, lSource, lTranslated, entries, entryNumber, entrySize, stringSize);

              //prints translated string
              thinSep();
              printf("\nResult:");
              for (i = 0; i < stringSize; i++) {
                printf("%s ", tokenizedStrings[i]);
              }
              printf("\n");
              thinSep();
			
			        translateConfirm();
			        inputInt(&tInput);
			
			        //input checker
			        while(inputChecker(tInput, 1, 2) == 0){
			          invalidInput();
			          
			          translateConfirm();
			          inputInt(&tInput);
			        }//while
			
			        while (tInput == 1){//while translate new text
			        
						    printf("\nWhat is the text you want to translate?\n");				        
						    inputString(stringInput);						
						    tokenizer(tokenizedStrings, stringInput, separator, &stringSize);

                //translate tokenized strings
                translator(tokenizedStrings, lSource, lTranslated, entries, entryNumber, entrySize, stringSize);
  
                //prints translated string
                thinSep();
                printf("\nResult:");
                for (i = 0; i < stringSize; i++) {
                  printf("%s ", tokenizedStrings[i]);
                }
                printf("\n");
                thinSep();
						
						    translateConfirm();
						    inputInt(&tInput);
						
						    //input checker
    						while(inputChecker(tInput, 1, 2) == 0) {
    							invalidInput();
    							
    							translateConfirm();
    							inputInt(&tInput);
    						}//input checker
						
			        }//while translate new text

              returnTranslate();
			        
		      	}//if statement for new text          
		    }//translate menu while loop

		    returnMain();		    
		    
		}//else if Manage Data Menu
	}//while loop for exit
	
	printf("\nThank you!");
	return 0;
	
}//main

