#ifndef PROJECT_H
#define PROJECT_H


class Project
{
    public:
        Project();
        virtual ~Project();
        void multiples_of_3_and_5();
        void Largest_prime_factor_of_600851475143();
        void sum_squares_diff();
        void Even_fibonacci();
        void Smallest_multiple();
        void Largest_Palindrome_Product();
        void Summation_of_primes();
        void special_phyto_triplet();
        void prime_10001st();
        void largest_product_in_series();
        void Counting_sundays();
        bool isLeapYear(int year);
        void Largest_product_grid();
        void Number_letter_counts();
        void Largest_sum();
        int charToInt(char line);
        //void Diophantine_reciprocals_a();
        //void seive(int n);
        void Longest_collatz_sequence();
        void max_path_sum();
        int maxsum (int num1, int num2, int up);
        int path(int num, int tri[][15]);
        void Divisible_Triangular_Number();
        void Factorial_digit_sum();
        void Power_Digit_Sum();
        void Name_scores();
        void truncable_primes();
        void first_1000_digit_fibonacci();


    protected:
    private:
        void Number_letter_count(int hundred ,int ten,int value);
};

#endif // PROJECT_H
