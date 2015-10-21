#include<iostream>

using namespace std;

int mult2(int a, int b);
//#define TEST_MODE


int main()
{
    //int a,b;
#ifdef TEST_MODE
    int n = 4;
    int arr[] = {3,4,12, 5,7,34, 6,3,18, -100,-5000,+500000};
    cout << "begin test...\n";
    for(int i = 0; i<n; i++) {
	int result = mult2(arr[i*3], arr[i*3+1]);
    if(result != arr[i*3+2])
	cout << "ERROR!!!!! in mult2!: " << i << endl;
    }
    cout << "end test...\n";
    
#else 
    int a,b;
    cin >> a >> b;
    cout << mult2(a, b);
#endif
    cout << endl;



    return 0;
}

int mult2(int a, int b) 
{
    return a*b;
}
