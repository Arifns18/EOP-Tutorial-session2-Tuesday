#include <iostream>

using namespace std;

int main(){
	cin >> z >> ch >> a; 
	//Input: 36.78B34 
	//Value stored: z = 36.78, ch = 'B', a = 34
	
	cin >> z >> ch >> a; 
	//Input: 36.78 B34
	//Value stored: z = 36.78, ch = 'B', a = 34
	
	cin >> a >> b >> z; 
	//Input: 11 34 
	//Value stored: a = 11, b = 34, computer waits for the next number
	
	cin >> a >> z; 
	//Input: 78.49 
	//Value stored a = 78, z = 0.49
	
	cin >> ch >> a;
	//Input: 256 
	//Value stored: ch = '2', a = 56
	
	cin >> a >> ch; 
	//Input: 256 
	//Value stored: a = 256, computer waits for the input value for ch
	
	cin >> ch1 >> ch2; 
	//Input: A B 
	//Value stored: ch1 = 'A', ch2 = 'B'
	return 0;
}

