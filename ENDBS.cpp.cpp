#include <iostream>
using namespace std;

int main()
{
   int india, xeros ,input , click;
   char str[10000];
   mm:
   cout << "Please enter a message :\t";
   cin >> str;

   cout << "\nPlease choose following options:\n";
   cout << "1 = Encrypt the message.\n";
   cout << "2 = Decrypt the message.\n";
   cin >> xeros;

   //using switch case statements
   switch(xeros)
   {
      //first case for encrypting a string
      case 1:
         for(india = 0; (india < 10000 && str[india] != '\0'); india++)
            str[india] = str[india] - 12; //the key for encryption is 3 that is added to ASCII value
            

         cout << "\nEncrypted string: " << str << endl;
         cin>>input;
    cout<<"    |-----------------------------------|\n";
    cout<<"    | [1] RETURN                        |\n";
    cout<<"    | [2] EXIT                          |\n";
    cout<<"    |-----------------------------------|\n";      
    cin>>click;
      if(click==1)
      {
        goto mm;
      }
      if(click==2)
      {
        exit;
        return 0;
      }
         break;

      //second case for decrypting a string
      case 2:
         for(india = 0; (india < 10000 && str[india] != '\0'); india++)
         str[india] = str[india] + 12; //the key for encryption is 3 that is subtracted to ASCII value

      cout << "\nDecrypted string: " << str << endl;
      cin>>input;
   

  
    cout<<"    |-----------------------------------|\n";
    cout<<"    | [1] RETURN                        |\n";
    cout<<"    | [2] EXIT                          |\n";
    cout<<"    |-----------------------------------|\n";                 
    exm :
    cin>>click;
      if(click==1)
      {
        goto mm;
      }
      if(click==2)
      {
        exit;
        return 0;
      }
      break;

      default:
         cout << "\nInvalid Input !!!\n";
   }
   return 0;
}
