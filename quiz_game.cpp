// new Gk game anamika
// Inspired by typical C++ quiz tutorials
#include <iostream>
#include <string>
using namespace std;
int age;
char start;
char option;

int score=0; //initialize game start score as zero
void play_GK_quiz()
{
     cout<<"\t\t\t***********************************************************************"<<endl;
    cout<<"\t\t\t                                                                        "<<endl;
	cout<<"\t\t\t                       WELCOME TO General Knowledge Quiz                            "<<endl;
    cout<<"\t\t\t                                                                        "<<endl;
    cout<<"\t\t\t***********************************************************************"<<endl<<endl<<endl;
    cout << "\n";
	cout << "------ Please Follow The Guidelines ------" << endl;
	cout << "Step 1 : Age 10+ is qualified for this quiz" << endl;
	cout<<"enter your age: ";
	cin>>age;
	if (age>=10)
	{cout<<"You may continue your quiz!"<<endl;
	cout << "Step 2 : This quiz contains a total of 15 Questions." << endl;
	cout << "Step 3 : Each correct answer is worth 1 point. " << endl;
	cout << "Step 4 : There is no negative marking for wrong answers." << endl;
	cout << "Step 5 : Press 's' to start the quiz." << endl;
	cout << "Step 6 : Select your answer from the options: a, b, c, or d " << endl;
	cout << "Step 7 : A score of 8 or more points is required to pass the quiz. " << endl;
	
	cin>>start;
	if(start=='s' || start=='S'){
	    cout << "Q1. What is the smallest Union of Bangladesh?" << endl;
		cout << "(a) Saint Martin"<< endl;
		cout <<"(b) Cox's Bazar"<< endl;
		cout <<"(c) Bihar Camp"<< endl;
		cout <<"(d) Redcliff" << endl;	
		cin >> option;
		if(option == 'a' || option == 'A') {
			score++;
		    
		}
		cout << "Q2. In how many sectors was Bangladesh divided during the liberation war?" << endl;
		cout << "(a) 9 "<< endl;
		cout <<"(b) 10 "<< endl;
		cout <<"(c) 11 "<< endl;
		cout <<"(d) 12" << endl;	
		cin >> option;
		if(option == 'c' || option == 'C') {
			score++;
		}
		cout << "Q3. When was the first parliamentary election held in Bangladesh?" << endl;
		cout << "(a) 1972" << endl;
		cout <<"(b) 1973" << endl;
		cout << "(c) 1974" << endl;
		cout <<"(d) 1975" << endl;	
		cin >> option;
		if(option == 'b' || option == 'B') {
			score++;
		}
		cout << "Q4. Where is the Bangladesh Postal Academy located?" << endl;
		cout << "(a) Dhaka "<< endl;
		cout <<"(b) Khulna" << endl;
		cout <<"(c) Rajshahi" << endl;
		cout <<"(d) Rangpur" << endl;	
		cin >> option;
		if(option == 'c' || option == 'C') {
			score++;
		}
		cout << "Q5. What is the national tree?" << endl;
		cout << "(a) Jackfruit tree"<<endl;
		cout<<"(b) Mango tree"<<endl;
		cout<<"(c) Banana tree"<<endl;
		cout<<"(d) Cyrus tree" << endl;	
		cin >> option;
		if(option == 'b' || option == 'B') {
			score++;
		}
		cout << "Q6. Where is the national museum?" << endl;
		cout << "(a) Shahbag"<< endl; 
		cout <<"(b) Gulshan"<< endl; 
		cout <<"(c) Banani" << endl;
		cout <<"(d) Mohammadpur" << endl;	
		cin >> option;
		if(option == 'a' || option == 'A') {
			score++;
		}
		cout << "Q7. Who is the sculptor of the sculpture named Durjoy located in Rajarbag Police Lines?" << endl;
		cout << "(a) Mrinal Haque"<< endl; 
		cout <<"(b) Durjoy Sen"<< endl; 
		cout <<"(c) Abul Kalam"<< endl; 
		cout <<"(d) APJ" << endl;	
		cin >> option;
		if(option == 'a' || option == 'A') {
			score++;
		}
		cout << "Q8. What is the earning per head of Bangladeshi?" << endl;
		cout << "(a) 1700" << endl;
		cout <<"(b) 1702" << endl;
		cout <<"(c) 1725" << endl;
		cout <<"(d) 1752 usd" << endl;	
		cin >> option;
		if(option == 'd' || option == 'D') {
			score++;
		}
		cout << "Q9. In which year Bangladesh became a member of the United Nations?" << endl;
		cout << "(a) 1971" << endl;
		cout <<"(b) 1972" << endl;
		cout <<"(c) 1973" << endl;
		cout <<"(d) 1974" << endl;	
		cin >> option;
		if(option == 'd' || option == 'D') {
			score++;
		}
		cout << "Q10. Which river is known as the 'Lifeline of Bangladesh'?" <<endl;
		cout << "(a) The Padma river" << endl;
		cout <<"(b) The meghna river" << endl;
		cout <<"(c) The Jamna river"<< endl;
		cout <<"(d) The Surma river" << endl;	
		cin >> option;
		if(option == 'a' || option == 'A') {
			score++;
		}
		cout << "Q10. What is the largest port in Bangladesh?" << endl;
		cout << "(a) Jessore" << endl;
		cout <<"(b) Shylhet" << endl;
		cout <<"(c) Buriganga port" << endl;
		cout <<"(d) Chittagong port" << endl;	
		cin >> option;
		if(option == 'd' || option == 'D') {
			score++;
		}
		cout << "Q11. Who was the first person to land on the moon?" << endl;
		cout << "(a) Neil Armstrong" << endl;
		cout <<"(b) John Glenn" << endl;
		cout <<"(c) Sally Ride" << endl;
		cout <<"(d) Alan Shepard" << endl;	
		cin >> option;
		if(option == 'a' || option == 'A') {
			score++;
		}
		cout << "Q12. Which is the smallest country in the world?" << endl;
		cout << "(a) somalia city" << endl;
		cout <<"(b) Vatican City" << endl;
		cout <<"(c) tandon city" << endl;
		cout <<"(d) roman city" << endl;	
		cin >> option;
		if(option == 'b' || option == 'B') {
			score++;
		}
		cout << "Q13. What is the capital of Australia?" << endl;
		cout << "(a) Sydney" << endl;	
		cout <<"(b) Melbourne" << endl;	
		cout <<"(c) Canberra" << endl;	
		cout <<"(d) Hopetoun" << endl;	
		cin >> option;
		if(option == 'c' || option == 'C') {
			score++;
		}
		cout << "Q14. What is the fastest bird in the world?" << endl;
		cout << "(a) Eghoort" << endl;	
		cout <<"(b) Eagal" << endl;	
		cout <<"(c) Canb" << endl;	
		cout <<"(d) Peregrine Falcon" << endl;	
		cin >> option;
		if(option == 'd' || option == 'D') {
			score++;
		}
		cout << "Q15. Which element is used in making batteries?" << endl;
		cout << "(a) Lithium" << endl;
		cout <<"(b) silver" << endl;
		cout <<"(c) gold" << endl;
		cout <<"(d) iron" << endl;	
		cin >> option;
		if(option == 'a' || option == 'A') {
			score++;
		}            
	}
	else exit(0);
	}
	
	else 
	{
	    cout << "Oops! You failed..." << endl;
        exit(0); // to stop the program immedietly
	}
	 
}
bool playAgain() {
    char choice;
    cout << "\nDo you want to play again? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        return true;
    } else {
        return false;
    }
}


int main() {
   do {
    play_GK_quiz();
    	cout << "Your Total Score is : " << score << endl;
}

while (playAgain());


    return 0;
}
