#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"\t Welcome to THE NUMBER GUESSING GAME\n\n";
    cout<<"\t\tGeneral Instructions:\n\n";
    cout<<"1)System will generate a secret number between 1-100,\nYour task is to guess that number\n";
    cout<<"2) You need to choose the level of difficulty out of 1,2,3\n";
    cout<<"1:Easy - 10 lives\n2:Medium - 7 lives\n3:Hard - 5 lives\n0: Leaving Game\n";

    while(true){

      int difficulty_level;
      cout<<" To start game, Choose difficulty: ";
      cin>>difficulty_level;

      srand(time(0));
      int secret_num = (rand()%100)+1;
      
      if(difficulty_level==1)//easy level
      {
        cout<<"You will get 10 LIVES!!\n";
        int lives_left = 10;
        for(int i = 1 ;i<=10 ; i++){
            int user_guess;
            cout<<"Guess number : ";
            cin>>user_guess;

            if(user_guess==secret_num){
                cout<<"Congratulations!!\nYou guessed the right number!!\n\n";
                break;
            }
            else{

                if(user_guess>secret_num){
                    cout<<"NOPE!!\nSecret number is smaller than your entered number: \n\n";
                }
                else{
                    cout<<"NOPE!!\nSecret number is larger than your entered number: \n\n";
                }
                lives_left--;
                cout<<"Lives Left = "<<lives_left<<endl;
                if(lives_left==0){
                    cout<<"GAME OVER!!\nBetter Luck Next Time!!\n\n";
                    cout<<"The correct Answer is: "<<secret_num<<"\n\n";
                }
            }
        }
        
      }
      
      else if(difficulty_level==2)//medium level
      {
        cout<<"You will get 7 LIVES!!\n";
        int lives_left = 7;
        for(int i = 1 ;i<=7 ; i++){
            int user_guess;
            cout<<"Guess number : ";
            cin>>user_guess;

            if(user_guess==secret_num){
                cout<<"Congratulations!!\nYou guessed the right number!!\n\n";
                break;
            }
            else{

                if(user_guess>secret_num){
                    cout<<"NOPE!!\nSecret number is smaller than your entered number: \n\n";
                }
                else{
                    cout<<"NOPE!!\nSecret number is larger than your entered number: \n\n";
                }
                lives_left--;
                cout<<"Lives Left = "<<lives_left<<endl;
                if(lives_left==0){
                    cout<<"GAME OVER!!\nBetter Luck Next Time!!\n\n";
                    cout<<"The correct Answer is: "<<secret_num<<"\n\n";
                }
            }
        }
        
      }

      else if(difficulty_level==3)//hard level
      {
        cout<<"You will get 5 LIVES!!\n";
        int lives_left = 5;
        for(int i = 1 ;i<=5 ; i++){
            int user_guess;
            cout<<"Guess number : ";
            cin>>user_guess;

            if(user_guess==secret_num){
                cout<<"Congratulations!!\nYou guessed the right number!!\n\n";
                break;
            }
            else{

                if(user_guess>secret_num){
                    cout<<"NOPE!!\nSecret number is smaller than your entered number: \n\n";
                }
                else{
                    cout<<"NOPE!!\nSecret number is larger than your entered number: \n\n";
                }
                lives_left--;
                cout<<"Lives Left = "<<lives_left<<endl;
                if(lives_left==0){
                    cout<<"GAME OVER!!\nBetter Luck Next Time!!\n\n";
                    cout<<"The correct Answer is: "<<secret_num<<"\n\n";
                }
            }
        }
        
      }


      else if(difficulty_level==0){
        exit(0);
      }
      else{
        cout<<"enter a valid input: \n";
      }

    }


return 0;

}