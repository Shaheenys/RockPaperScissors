#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int guess;
	string picks[3] = { "rock","paper","scissors" };

	int playerscore = 0;
	int cpuscore = 0;

	

	cout << " 0-Rock 1-Paper 2-Scissors" << endl;
	
	while ((playerscore < 3) && (cpuscore < 3)) {

		srand(time(NULL));
		int random = rand() % 3;

	cout << "please enter you guess" << endl;
	//cout << random << endl; //for test purposes
	cin >> guess;


	if (guess > 2) {

		cout << "number too high !!!! TRY AGAIN" << endl;

	}
	
		else if ((guess == 0 && random == 1) || (guess == 1 && random == 2) || (guess == 2 && random == 0)) {
			cout << picks[guess] << " attacked " << picks[random] << " and lost!" << endl;
			cpuscore++;
			cout << "player score: " << playerscore << " cpu score: " << cpuscore << endl;
		}
		else if ((guess == 0 && random == 0) || (guess == 1 && random == 1) || (guess == 2 && random == 2)) {
			cout <<picks[ guess] << " attacked " << picks[random] << " and drew!" << endl;
			cout << "player score: " << playerscore << " cpu score: " << cpuscore << endl;
		}
		else {
			cout << picks[guess] << " attacked " << picks[random] << " and won!" << endl;
			playerscore++;
			cout << "player score: " << playerscore << " cpu score: " << cpuscore << endl;
		}
	}

	cout << "the final score was " << playerscore << " vs " << cpuscore << endl;
}