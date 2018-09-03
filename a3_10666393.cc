#include <iostream>
using namespace std;

int main(){
	double scores;
	cout<<"Enter your score:  ";
	cin>>scores;

if (scores <= 100 && scores>=80){
		cout<<"Your grade is A\n";
		}
		else if(scores >=75 && scores <=79){
			cout<<"Your grade is B+\n";
		}
		else if(scores >= 70 && scores <= 74){
			cout<<"Your grade is B\n";
			}
		else if(scores>=65 && scores <= 69){
			cout<<"Your grade is C+\n";
			}
		else if(scores >= 60 && scores <= 64){
			cout<<"Your grade is C\n";
			}
		else if(scores>=55 && scores<=59){
			cout<<"Your grade is D+\n";
			}
		else if(scores>=50 && scores<=54){
			cout<<"Your grade is D\n";
		}
		else if (scores>=40 && scores<=49){
			cout<<"Your grade is E\n";
		}
		else if(scores<40){
			cout<<"Your grade is F\n";
		}
		
		
		
		
		return 0;
}
