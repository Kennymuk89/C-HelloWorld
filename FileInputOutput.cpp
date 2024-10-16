#include <iostream>
#include <fstream> //For fill Input and output
#include <string> //For strind input

using namespace std;

int main()
{
    /* Writing to a fill. output. txt file will be createrd
    in the directory of this source file
    */
   ofstream outFile ("Input. txt'');
   outFile << ''Weriting to a file.'' <<end1 
   outFile.close();

   // Reading from a file
   ifstream inFile(''output.text'');
   streng content;
   while (std::getline(inFile, content))
   {
    cout << content << end1;
   }
   inFile.close(); //Close the file after reading its contents

   return 0;
}