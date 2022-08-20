/*******************************************
36_2 Add Array Element Simi Dynamic.cpp 

Write a program to dynamically read number and save them in an array Max size of arry 100 
allocate simi-dynamic array length.

OutPut:										
please enter a number?10
Do you want to add more number ?[0]:no,[1]:yes?1

please enter a number?20
Do you want to add more number ?[0]:no,[1]:yes?1

please enter a number?30
Do you want to add more number ?[0]:no,[1]:yes?0

Array Length:3
Arry elements: 10 20 30 

********************************************/
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
 using namespace std; 
 
 
 int ReadNumber() {
  int Number;    
   cout << "\nPlease enter a number? ";    
    cin >> Number; 
	return Number; 
	} 
	
	void AddArrayElement(int Number, int arr[100], int& arrLength)
 { 
 //its a new element so we need to add the length by 1
 arrLength++; 
 arr[arrLength - 1] = Number; 
 } 
 
 void InputUserNumbersInArray(int arr[100], int& arrLength) { 
 bool AddMore = true;
  do    {         
  AddArrayElement(ReadNumber(), arr, arrLength);        
   cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";          
   cin >> AddMore;     
   } while (AddMore); } 
   
   void PrintArray(int arr[100], int arrLength) { 
   for (int i = 0; i < arrLength; i++)         
   cout << arr[i] << " ";     cout << "\n"; 
   } 
int main() { int arr[100], arrLength = 0;    
 InputUserNumbersInArray(arr, arrLength);     
 cout << "\nArray Length: " << arrLength << endl;    
  cout << "Array elements: ";     
PrintArray(arr, arrLength);
 return 0; } 
