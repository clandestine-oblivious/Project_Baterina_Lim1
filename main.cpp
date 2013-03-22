#include <iostream>
#include <string>
#include <cstdlib>
#include "string.h"
#include "Project.h"

using namespace std;

const string Problems[] = {"Multiples of 3 And 5", "Even Fibonacci Numbers", "Largest Prime Factor", "Largest Palindrome Product",
"Smallest Multiple", "Sum Square Difference", "10001st Prime", "Largest Product in Series", "Special Phytagorean Triplet", "Summation of Primes",
"Largest Product in a Grid", "Triangular Number", "Large Sum", "Longest Collatz Sequence", "Power Digit Sum",  "Number Letter Counts", "Max Path Sum",
 "Counting Sundays", "Factorial Digit Sum", "Name Scores", "Truncatable Primes", "1000-digit Fibonacci number", "Exit"};
const int NUM_PROBLEMS=22;
const int EXIT = NUM_PROBLEMS+1;

int main()
{
    bool done= false;
    int i=0;
    int ch=0;
    Project proj;

        while(done==false){
        system("cls");

        for (i=0; i < (NUM_PROBLEMS+1); i++)
        {cout << (i+1) << " ." << Problems[i] << endl; }

        cout << endl << "Welcome!" << endl << "Choose Problem Number: ";
        cin >> ch;
        cout << endl;

        switch(ch) {

            case 1:
                proj.multiples_of_3_and_5();
                break;
            case 2:
                proj.Even_fibonacci();
                break;
            case 3:
                proj.Largest_prime_factor_of_600851475143();
                break;
            case 4:
                proj.Largest_Palindrome_Product();
                break;
            case 5:
                proj.Smallest_multiple();
                break;
            case 6:
                proj.sum_squares_diff();
                break;
            case 7:
                proj.prime_10001st();
                break;
            case 8:
                proj.largest_product_in_series();
                break;
            case 9:
                proj.special_phyto_triplet();
                break;
            case 10:
                proj.Summation_of_primes();
                break;
            case 11:
                proj.Largest_product_grid();
                break;
            case 12:
                proj.Divisible_Triangular_Number();
                break;
            case 13:
                proj.Largest_sum();
                break;
            case 14:
                proj.Longest_collatz_sequence();
                break;
            //case 16:
              //  proj.Diophantine_reciprocals_a();
               // break;
            case 15:
                proj.Power_Digit_Sum();
                break;
            case 16:
                proj.Number_letter_counts();
                break;
            case 17:
                proj.max_path_sum();
                break;
            case 18:
                proj.Counting_sundays();
                break;
            case 19:
                proj.Factorial_digit_sum();
                break;
            case 20:
                proj.Name_scores();
                break;
            case 21:
                proj.truncable_primes();
                break;
            case 22:
                proj.first_1000_digit_fibonacci();
                break;

            case EXIT:
                done=true;
                cout << "THANK YOU SO MUCH! CIAO!" << endl << endl;
                break;
        }
        system ("PAUSE");
        }
};
