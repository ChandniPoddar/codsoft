#include <iostream>

using namespace std;

int main() { 
  int us;
  int var;
  string name;
  char input;
  cout<<"enter your name:";
  getline(cin,name);
  cout<<"\n";
  do{

    var=rand()%5+1;
    cout<<"enter a number between 1 and 5:";
    cin>>us;
    if (us==var){
      cout<<"congchulation!! you choosed the right number";
      cout<<"You win!! ";
    }
      
      else{
        cout<<"You lose!!";
      }
      cout<<"you want to play again?";
    cout<<"write y for yes and n for no";
      cin>>input;
    cout<<"\n";    
  }while(input!='N'||'n');
    cout<<"game end\n";
}
