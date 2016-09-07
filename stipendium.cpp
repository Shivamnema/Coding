#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#define pb push_back

//[Andrash and Stipendium]]problem codechef. Date : [6 sep, 2016]. 
//Shivamnema05
using namespace std;
/* 
Contraints to receive stipend:
~University follows 5 point grading system. In an exam, a student can receive any score from 2 to 5. 2 is called an F grade, meaning that student has failed that exam.
~Student should not have fail any of the exams.
~Student must obtain a full score in some of his/her exams to show that he/she is excellent in some of the subjects.
~He/She must have a grade point average not less than 4.0
<===Input===>
*The first line of input contains a single integer T denoting the number of test cases. 
*The first line of each test case contains an integer N denoting the number of examinations.
*The next line of each test case contains N space separated integers denoting Andrash's score for each exam.

<===Output===>
*For each of the T test cases, output a single line - "Yes" (without quotes) if Andrash will receive stipendium, or "No" (without quotes) - otherwise.
*/
int avg (vector<int> scores){
    int totalScore=0, avg = 0, length = scores.size() ;
    for (int i = 0; i <= length ; i++){
        totalScore += scores[i];
    }
    avg = totalScore/length;
    return avg;
}
bool check (vector<int> scores , int average){
    bool flag = false; // means initiliting all the scores as negative ; or false.
    for(int i=0; i < scores.size() ; i++){
        if ((scores[i] <= 2 || scores[i] >= 4 ) && (average >= 4)) flag = true;
    }
    return flag;
}
int main(void) {
    int T;
    cin >> T;
    while (T--)
    {   int no_of_exams, average=0;
        
        cin>>no_of_exams;

        vector<int> score_of_each_exam;
        int score;
        while (no_of_exams--){
            cin>>score;
            score_of_each_exam.pb(score);
        }
        average = avg(score_of_each_exam);
        bool result = check(score_of_each_exam, average);
        
        if (result) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
