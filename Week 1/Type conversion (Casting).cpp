#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	
	cout << "static_cast<int>(7.9) = "
		 << static_cast<int>(7.9) //Output: 7
		 << endl;
	cout << "static_cast<int>(3.3) = "
		 << static_cast<int>(3.3) //Output: 3
		 << endl;
	cout << "static_cast<double>(25) = "
		 << static_cast<double>(25) 
//		 << endl
//		 << fixed <<setprecision(1) 
//		 << static_cast<double>(25.2)
		 << endl;
	cout << "static_cast<double>(5 + 3) = "
		 << static_cast<double>(5 + 3)
		 << endl;
	cout << "static_cast<double>(15) / 2 = "
		 << static_cast<double>(15) / 2
		 << endl;
	cout << "static_cast<double>(15 / 2) = "
		 << static_cast<double>(15 / 2)
		 << endl;
	cout << "static_cast<int>(7.8 + static_cast<double>(15) / 2) = "
		 << static_cast<int>(7.8 + static_cast<double>(15) / 2)
		 << endl;
	cout << "static_cast<int>(7.8 + static_cast<double>(15 / 2)) = "
		 << static_cast<int>(7.8 + static_cast<double>(15 / 2))
		 << endl;
		 
//		 double a = 15;
//		 cout << a/2;
//		 int b = 15;
//		 cout << b/2;

	return 0;
}


