//Authors:Christian Orozco
#include<iostream>
#include<string>

using namespace std;

int main()
{
        //declare variables
        string first, last;
        int lucky;
        char firstlet;
        char lastlet;
        //get user input
        cout<< "What is your first name?\n";
        cin>>first;
        cout<< "What is your last name?\n";
        cin>>last;
        //tell fortune
        cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"." ", here is your fortune...\n";
        lucky=first.length();
        cout<<"your lucky number is " <<lucky<<endl;
        firstlet=first[0];
        if(firstlet == 65||firstlet == 69||firstlet == 73||firstlet == 79||firstlet == 85||firstlet == 97||firstlet == 101||firstlet == 105||firstlet == 111||firstlet == 117)
        {
                cout<< "you are destined to be famous!\n";
        }
        else if((firstlet>65 &&firstlet<90) ||(firstlet>97 &&firstlet<122))
        {
                cout<< "you should keep a low profile.\n";
        }
        lastlet=last[last.length()-1];
        if(lastlet == 97||lastlet == 101||lastlet == 105||lastlet == 111||lastlet == 117)
        {
                cout<< "you have already met your true love.\n";
                cout<< "have a good day!\n";
      }
      else
          {      cout<< "have a good day!\n";
           }    
               return 0;
  }
