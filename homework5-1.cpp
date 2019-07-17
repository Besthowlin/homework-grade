#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter score " << endl;
	cin >> score;
	if ((score >=90)&&(score <=100)) cout << "grade A" << endl;
	else if ((score >=80)&&(score <=89)) cout << "grade B" << endl;
	else if ((score >=70)&&(score <=79)) cout << "grade C" << endl;
	else if ((score >=60)&&(score <=69)) cout << "grade D" << endl;
	else if ((score >=0)&&(score <=59)) cout << "grade F" << endl;
	else cout << "error" << endl;
   return(0);
}

