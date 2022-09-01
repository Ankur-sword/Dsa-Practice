# Dsa-Practice <br>
## Recursion Easy <br>
### Task 1 :- [Sum triangle from array](https://www.geeksforgeeks.org/sum-triangle-from-array/)
### Task 2 :- [Min and Max of array ](https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/)
### Task 3 :- [First upperCase letter in a string](https://www.geeksforgeeks.org/first-uppercase-letter-in-a-string-iterative-and-recursive/)
### Task 4:- [Reverse String](https://leetcode.com/problems/reverse-string/)
### Task 5:- [Special Fibonacci](https://www.codechef.com/problems/FIBXOR01)
### Task 6:- Write a recursive function for given n and a to determine x:
       n = a ^ x 
      a = 2, 3, 4
      (2 ^ -31) <= n <= (2 ^ 31) - 1      
      
 ## Basic Mathematics <br>
### Task 7:- [Prime Number](https://github.com/Ankur-sword/Dsa-Practice/blob/main/primeNumber.cpp)
### Task 8:- [Prime Factorisation](https://github.com/Ankur-sword/Dsa-Practice/blob/main/PrimeFactorisation.cpp)
### Task 9:- [Seive Of Eratosthenes](https://github.com/Ankur-sword/Dsa-Practice/blob/main/SeiveOfEratosthenes.cpp)

##Binary Search <br>
###Task 10:- Upper Bound -Element Just greater then given element   <br>
     ''
int Upper_bounds(vector<int>& a,int key)
{
     int lo=0;
     int hi=a.size()-1;
     while(hi-lo>1)
     {
        int mid=(lo+hi)/2;

        if(a[mid]<=key)
         lo=mid+1;
         else
         hi=mid;
     }
     if(a[lo]>key)
     return lo;
     if(a[hi]>key)
     return hi;

     return -1;
}    ''
