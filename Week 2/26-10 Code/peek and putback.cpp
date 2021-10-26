//Functions peek and putback
#include <iostream> 

using namespace std; 
int main()
{ 
	char ch; 
	
	cout << "Enter a string: ";
	//Input: abcd
	 
	cin.get(ch);
	//ch = a 
	cout << endl; 
	cout << "After first cin.get(ch); "
		 << "ch = " << ch << endl; 
	
	cin.get(ch); 
	//ch = b
	cout << "After second cin.get(ch); "
		 << "ch = " << ch << endl; 
	//ch = c
	cin.putback(ch);
	//input previous character which is b
	cin.get(ch);
	//ch= b 
	cout << "After putback and then "
		 << "cin.get(ch); ch = " << ch << endl; 
	
	ch = cin.peek();
	//check next character which is c 
	cout << "After cin.peek(); ch = "
		 << ch << endl; 
	
	cin.get(ch);
	//ch=c 
	cout << "After cin.get(ch); ch = "
		 << ch << endl; 
	
	return 0; 
}
