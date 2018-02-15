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
        cout<< "What is  your first name and last name?";
        cin>>first>>last;

        //tell fortune
        cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"." "here is your fortune...";
        lucky=first.length();
        cout<<"Your lucky number is " <<lucky<<endl;
        firstlet=first[0];
        if(firstlet == 65||firstlet == 69||firstlet == 73||firstlet == 79||firstlet == 85||firstlet == 97||firstlet == 101||firstlet == 105||firstlet == 111||firstlet == 117)
        {
                cout<< "You are destined to be famous!";
        }
        else if((firstlet>65 &&firstlet<90) ||(firstlet>97 &&firstlet<122))
        {
                cout<< "You should keep a low profile.";
        }
        lastlet=last[last.length()-1];
        if(lastlet == 97||lastlet == 101||lastlet == 105||lastlet == 111||lastlet == 117)
        {
                cout<< "You have already met your true love.";
      } cout<< "Have a good day!";
               
               return 0;
  }
