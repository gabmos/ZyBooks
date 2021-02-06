/*
(1) Prompt the user to enter a string of their choosing. Output the string. (1 pt)

Ex:

Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.
(2) Complete the GetNumOfCharacters() function, which returns the number of characters in the user's string. We encourage you to use a for loop in this function. (2 pts)

(3) In main(), call the GetNumOfCharacters() function and then output the returned result. (1 pt)

(4) Implement the OutputWithoutWhitespace() function. OutputWithoutWhitespace() outputs the string's characters except for whitespace (spaces, tabs). Note: A tab is '\t'. Call the OutputWithoutWhitespace() function in main(). (2 pts)

Ex:

Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.

Number of characters: 46
String with no whitespace: Theonlythingwehavetofearisfearitself.
*/

/*
(1) Prompt the user to enter a string of their choosing. Output the string. (1 pt)

Ex:

Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.
(2) Complete the GetNumOfCharacters() function, which returns the number of characters in the user's string. We encourage you to use a for loop in this function. (2 pts)

(3) In main(), call the GetNumOfCharacters() function and then output the returned result. (1 pt)

(4) Implement the OutputWithoutWhitespace() function. OutputWithoutWhitespace() outputs the string's characters except for whitespace (spaces, tabs). Note: A tab is '\t'. Call the OutputWithoutWhitespace() function in main(). (2 pts)

Ex:

Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.

Number of characters: 46
String with no whitespace: Theonlythingwehavetofearisfearitself.
*/

#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <sstream>
#include <algorithm>

using namespace std;

void  ShortenSpace(string &userLine){
    size_t index = 0;
    while (true) {
        /* Locate the substring to replace. */
        index = userLine.find("  ");
        if (index == std::string::npos) break;
        /* Make the replacement. */
        userLine.replace(index, 2, " ");
    }
    //return userLine;
}

void ReplaceExclamation(string &userLine){
    size_t index = 0;
    //string returnString(userLine);
    while (true) {
        /* Locate the substring to replace. */
        index = userLine.find("!");
        if (index == std::string::npos) break;
        /* Make the replacement. */
        userLine.replace(index, 1, ".");
    }
    //return returnString;
}

int FindText(string searchText, string wordPhrase){
    int numWords  = 0;
    size_t pos = wordPhrase.find(searchText, 0);
    while (pos != string::npos) {
        numWords++;
        pos = wordPhrase.find(searchText, pos + 1);
    }
    return numWords;
}

//Returns the number of characters in the string, excluding all whitespace
int GetNumOfNonWSCharacters(const string usrStr){
   int totalNonWhiteSpaceChars = 0;
   int len = usrStr.length();
    for(int i= len-1; i>=0; i--){
  if(usrStr[i] != ' ' )
    totalNonWhiteSpaceChars++;
}
      
return totalNonWhiteSpaceChars;
}

//Returns the number of words in the string
int GetNumOfWords(const string usrStr){
   int totalWords = 0;
   int len = usrStr.length();
    for(int i= len-1; i>=0; i--){
     if(usrStr[i] == ' ' && i != len-1 && usrStr[i-1]!=' ') totalWords++; 
   }
      
   return totalWords+1;
}

void PrintMenu(string usrStr){

string uString = usrStr;
string searchText;
//Output the menu
char menuOption;

while (menuOption != 'q') {  
 cout << "MENU" << endl;
 cout << "c - Number of non-whitespace characters" << endl;
 cout << "w - Number of words" << endl;
 cout << "f - Find text" << endl;
 cout << "r - Replace all !'s" << endl;
 cout << "s - Shorten spaces" << endl;
 cout << "q - Quit" << endl << endl;
 cout << "Choose an option:" << endl;
 cin >> menuOption;
switch(menuOption) {
    case 'c' :
        cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(uString) <<endl << endl;
        break; 
    case 'w' :
        cout << "Number of words: " << GetNumOfWords(uString) << endl<<endl;      
        break; 
    case 'f' :
        cin.ignore();
        cout << "Enter a word or phrase to be found:"<<endl;
        getline(cin, searchText);
        cout <<"\""<< searchText <<"\" " <<"instances: " << FindText(searchText, uString) <<endl << endl;   
        break;
    case 'r' :
        ReplaceExclamation(uString);
        cout << "Edited text: " << uString <<endl<< endl;  
        break;  
    case 's' :
        ShortenSpace(uString);
        cout << "Edited text: " << uString <<endl<< endl;
        break;   
    case 'q' :
        break;   
    default :
        break; 
    }
}

}

int main (){
string userString;
cout<< "Enter a sample text:" << endl;
getline(cin,userString);
cout << endl << "You entered: " << userString << endl << endl;
PrintMenu(userString);

return 0;
}


