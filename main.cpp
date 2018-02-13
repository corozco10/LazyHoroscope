//Authors:Christian Orozco
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first, last;
int lucky;
  //get user input
cout<< "Please enter your first and last name.";
cin>>first>>last;

  //tell fortune
cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"." "here is your fortune...";
lucky=first.length();
cout<<"Your lucky number is " <<lucky<<endl;
  return 0;
}
