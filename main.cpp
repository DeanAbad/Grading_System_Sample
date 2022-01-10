#include <iostream>
using namespace std;

// Prelim
int prelim_week1, prelim_week2, prelim_week3, prelim_week4, prelim_week5;           // 10%
int prelim_quiz1, prelim_quiz2, prelim_quiz3;                                       // 30%
int prelim_recitation1, prelim_recitation2, prelim_recitation3, prelim_recitation4; // 40%
int prelim_project1, prelim_project2;                                               // 20%

int prelim_major_exam_score;
int prelim_total_week_score, prelim_total_quiz_score, prelim_total_recitation_score, prelim_total_project_score;
int prelim_class_standing, prelim_grade;

// Midterm
int midterm_week1, midterm_week2, midterm_week3, midterm_week4, midterm_week5;
int midterm_quiz1, midterm_quiz2, midterm_quiz3;
int midterm_recitation1, midterm_recitation2, midterm_recitation3, midterm_recitation4;
int midterm_project1, midterm_project2;

int midterm_major_exam_score;
int midterm_total_week_score, midterm_total_quiz_score, midterm_total_recitation_score, midterm_total_project_score;
int midterm_class_standing, midterm_grade;

// Finals
int finals_week1, finals_week2, finals_week3, finals_week4, finals_week5;
int finals_quiz1, finals_quiz2, finals_quiz3;
int finals_recitation1, finals_recitation2, finals_recitation3, finals_recitation4;
int finals_project1, finals_project2;

int finals_major_exam_score;
int finals_total_week_score, finals_total_quiz_score, finals_total_recitation_score, finals_total_project_score;
int finals_class_standing, finals_grade;

int remarks;

int main() {
    // Prelim
    cout << "\nPRELIM\n";
    cout << "Enter your score in 1st week, prelim: ";
    cin >> prelim_week1;
    cout << "Enter your score in 2nd week, prelim: ";
    cin >> prelim_week2;
    cout << "Enter your score in 3rd week, prelim: ";
    cin >> prelim_week3;
    cout << "Enter your score in 4th week, prelim: ";
    cin >> prelim_week4;
    cout << "Enter your score in 5th week, prelim: ";
    cin >> prelim_week5;

    cout << "Enter your score in 1st quiz, prelim: ";
    cin >> prelim_quiz1;
    cout << "Enter your score in 2nd quiz, prelim: ";
    cin >> prelim_quiz2;
    cout << "Enter your score in 3rd quiz, prelim: ";
    cin >> prelim_quiz3;

    cout << "Enter your score in 1st recitation, prelim: ";
    cin >> prelim_recitation1;
    cout << "Enter your score in 2nd recitation, prelim: ";
    cin >> prelim_recitation2;
    cout << "Enter your score in 3rd recitation, prelim: ";
    cin >> prelim_recitation3;
    cout << "Enter your score in 4th recitation, prelim: ";
    cin >> prelim_recitation4;

    cout << "Enter your score in 1st project, prelim: ";
    cin >> prelim_project1;
    cout << "Enter your score in 2nd project, prelim: ";
    cin >> prelim_project2;

    cout << "Enter your score in major exam, prelim: ";
    cin >> prelim_major_exam_score;

    prelim_total_week_score = ((prelim_week1 + prelim_week2 + prelim_week3 + prelim_week4 + prelim_week5) / 5) * 0.1;
    prelim_total_quiz_score = ((prelim_quiz1 + prelim_quiz2 + prelim_quiz3) / 3) * 0.3;
    prelim_total_recitation_score = ((prelim_recitation1 + prelim_recitation2 + prelim_recitation3 + prelim_recitation4) / 4) * 0.4;
    prelim_total_project_score = ((prelim_project1 + prelim_project2) / 2) * 0.2;

    prelim_class_standing = prelim_total_week_score + prelim_total_quiz_score + prelim_total_recitation_score + prelim_total_project_score;

    prelim_grade = ((prelim_class_standing * 2) + prelim_major_exam_score) / 3;

    cout << "\nYour total score in weeks in prelim is " << prelim_total_week_score << ".\n";
    cout << "Your total score in quizzes in prelim is " << prelim_total_quiz_score << ".\n";
    cout << "Your total score in recitations in prelim is " << prelim_total_recitation_score << ".\n";
    cout << "Your total score in projects in prelim is " << prelim_total_project_score << ".\n";
    cout << "Your total score in major exam in prelim is " << prelim_major_exam_score << ".\n";
    cout << "Your class standing in prelim is " << prelim_class_standing << ".\n";
    cout << "Overall, your total grade in prelim is " << prelim_grade << ".\n";

    // Midterm
    cout << "\nMIDTERM\n";
    cout << "Enter your score in 1st week, midterm: ";
    cin >> midterm_week1;
    cout << "Enter your score in 2nd week, midterm: ";
    cin >> midterm_week2;
    cout << "Enter your score in 3rd week, midterm: ";
    cin >> midterm_week3;
    cout << "Enter your score in 4th week, midterm: ";
    cin >> midterm_week4;
    cout << "Enter your score in 5th week, midterm: ";
    cin >> midterm_week5;

    cout << "Enter your score in 1st quiz, midterm: ";
    cin >> midterm_quiz1;
    cout << "Enter your score in 2nd quiz, midterm: ";
    cin >> midterm_quiz2;
    cout << "Enter your score in 3rd quiz, midterm: ";
    cin >> midterm_quiz3;

    cout << "Enter your score in 1st recitation, midterm: ";
    cin >> midterm_recitation1;
    cout << "Enter your score in 2nd recitation, midterm: ";
    cin >> midterm_recitation2;
    cout << "Enter your score in 3rd recitation, midterm: ";
    cin >> midterm_recitation3;
    cout << "Enter your score in 4th recitation, midterm: ";
    cin >> midterm_recitation4;

    cout << "Enter your score in 1st project, midterm: ";
    cin >> midterm_project1;
    cout << "Enter your score in 2nd project, midterm: ";
    cin >> midterm_project2;

    cout << "Enter your score in major exam, midterm: ";
    cin >> midterm_major_exam_score;

    midterm_total_week_score = ((midterm_week1 + midterm_week2 + midterm_week3 + midterm_week4 + midterm_week5) / 5) * 0.1;
    midterm_total_quiz_score = ((midterm_quiz1 + midterm_quiz2 + midterm_quiz3) / 3) * 0.3;
    midterm_total_recitation_score = ((midterm_recitation1 + midterm_recitation2 + midterm_recitation3 + midterm_recitation4) / 4) * 0.4;
    midterm_total_project_score = ((midterm_project1 + midterm_project2) / 2) * 0.2;

    midterm_class_standing = midterm_total_week_score + midterm_total_quiz_score + midterm_total_recitation_score + midterm_total_project_score;

    midterm_grade = ((midterm_class_standing * 2) + midterm_major_exam_score) / 3;

    cout << "\nYour total score in weeks in midterm is " << midterm_total_week_score << ".\n";
    cout << "Your total score in quizzes in midterm is " << midterm_total_quiz_score << ".\n";
    cout << "Your total score in recitations in midterm is " << midterm_total_recitation_score << ".\n";
    cout << "Your total score in projects in midterm is " << midterm_total_project_score << ".\n";
    cout << "Your total score in major exam in midterm is " << midterm_major_exam_score << ".\n";
    cout << "Your class standing in midterm is " << midterm_class_standing << ".\n";
    cout << "Overall, your total grade in midterm is " << midterm_grade << ".\n";

    // Finals
    cout << "\nFINALS\n";
    cout << "Enter your score in 1st week, finals: ";
    cin >> finals_week1;
    cout << "Enter your score in 2nd week, finals: ";
    cin >> finals_week2;
    cout << "Enter your score in 3rd week, finals: ";
    cin >> finals_week3;
    cout << "Enter your score in 4th week, finals: ";
    cin >> finals_week4;
    cout << "Enter your score in 5th week, finals: ";
    cin >> finals_week5;

    cout << "Enter your score in 1st quiz, finals: ";
    cin >> finals_quiz1;
    cout << "Enter your score in 2nd quiz, finals: ";
    cin >> finals_quiz2;
    cout << "Enter your score in 3rd quiz, finals: ";
    cin >> finals_quiz3;

    cout << "Enter your score in 1st recitation, finals: ";
    cin >> finals_recitation1;
    cout << "Enter your score in 2nd recitation, finals: ";
    cin >> finals_recitation2;
    cout << "Enter your score in 3rd recitation, finals: ";
    cin >> finals_recitation3;
    cout << "Enter your score in 4th recitation, finals: ";
    cin >> finals_recitation4;

    cout << "Enter your score in 1st project, finals: ";
    cin >> finals_project1;
    cout << "Enter your score in 2nd project, finals: ";
    cin >> finals_project2;

    cout << "Enter your score in major exam, finals: ";
    cin >> finals_major_exam_score;

    finals_total_week_score = ((finals_week1 + finals_week2 + finals_week3 + finals_week4 + finals_week5) / 5) * 0.1;
    finals_total_quiz_score = ((finals_quiz1 + finals_quiz2 + finals_quiz3) / 3) * 0.3;
    finals_total_recitation_score = ((finals_recitation1 + finals_recitation2 + finals_recitation3 + finals_recitation4) / 4) * 0.4;
    finals_total_project_score = ((finals_project1 + finals_project2) / 2) * 0.2;

    finals_class_standing = finals_total_week_score + finals_total_quiz_score + finals_total_recitation_score + finals_total_project_score;

    finals_grade = ((finals_class_standing * 2) + finals_major_exam_score) / 3;

    cout << "\nYour total score in weeks in finals is " << finals_total_week_score << ".\n";
    cout << "Your total score in quizzes in finals is " << finals_total_quiz_score << ".\n";
    cout << "Your total score in recitations in finals is " << finals_total_recitation_score << ".\n";
    cout << "Your total score in projects in finals is " << finals_total_project_score << ".\n";
    cout << "Your total score in major exam in finals is " << finals_major_exam_score << ".\n";
    cout << "Your class standing in finals is " << finals_class_standing << ".\n";
    cout << "Overall, your total grade in finals is " << finals_grade << ".\n";

    remarks = (prelim_grade + midterm_grade + finals_grade) / 3;
    cout << "\nREMARKS\n";
    cout << "Finally, your remarks for the 1st semester is " << remarks << ".\n";

    cout << "\nCOMPLETION\n";
    if (remarks > 100) {
        cout << "The remarks is invalid.\n\n";
    }
    else if (remarks >= 75) {
        cout << "Therefore, you have passed.\n\n";
    }
    else if (remarks >= 70) {
        cout << "Therefore, you have failed.\n\n";
    }
    else {
        cout << "The remarks is invalid.\n\n";
    }

    return 0;
}