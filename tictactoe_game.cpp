#include<iostream>
using namespace std;

int arr[3][3]={{00,01,02},{10,11,12},{20,21,22}};
int row;
bool tie;
int column;
char token;

void functionOne{
  
  string n1;
  string n2;
  cout<<"enter the name of first player:\n";
  getline(cin,n1);
  cout<<"enter the name of second player:\n";
  getline(cin,n2);
  cout<<n1<<"is player1 so he/she will play: \n";
  cout<<n2<<"is player2 so he/she will play: \n";
  cout<<"     |     |     \n";
  cout<< arr[0]<<"|"<<arr[0][1]<<"|"<< arr[0][2]<<"\n";
  cout<<"_____|_____|_____\n";
  cout<<"     |     |     \n";
  cout<<arr[0][1]<<"|"<<arr[1][1]<<"|"<< arr[1][2]<<"\n";
  cout<<"_____|_____|_____\n";
  cout<<"     |     |     \n";
  cout<<arr[2][0]<<"|"<<arr[2][1]<<"|"<< arr[2][2]<<"\n";
  cout<<"     |     |     \n";

}
int finctionTwo{
  int digit;
  if(token=='x'){
    cout<<n1<<"please enter:";
    cin>>digit;
  }
  if(token=='0'){
    cout<<n1<<"please enter:";
    cin>>digit;
  }
  if(digit==1){
    row=0;
    column=0;
  }
  if(digit==2){
    row=0;
    column=1;
  }
  if(digit==3){
    row=0;
    column=2;
  }
  if(digit==4){
    row=1;
    column=0;
  }
  if(digit==5){
    row=1;
    column=1;
  }
  if(digit==6){
    row=1;
    column=2;
  }
  if(digit==7){
    row=2;
    column=0;
  }
  if(digit==8){
    row=2;
    column=1;
  }
  if(digit==9){
    row=2;
    column=2;
  }
  else{
    cout<<"invalid digit";
  }
  if(token=='x'&& arr[row][column]!='x'&& arr[row][column]!='0'){
    arr[row][column]='x';
      token='0';

  }
  else if{
    cout<<"there is no empty space";
    functionTwo();
  }
  bool fuctionThree(){
    for(int i=0;i<3;i++)
      {
        if(arr[i][0]==arr[i][1]&& arr[i][0]==arr[i][2]&& arr||arr[0][i]==arr[1][i]&& arr[0][i]==arr[2][i])])
          return true;
      }
    if(arr[0][0]==arr[1][1]&& arr[0][0]==arr[2][2]||arr[2][0]==arr[1][1]&& arr[2][0]==arr[0][2])&& arr[1][1]!='_')
      return true;
  }
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
 if(arr[i][j]!='x'&& arr[i][j]!='0']){
      return false;
 }
  }
}
tie=true;
}
int main(){
  while(!functionThree()){
    functionOne();
    functionTwo();
    functionThree();
  })

}
