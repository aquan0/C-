#include<iostream>
using namespace std;



int binarySearch(int a[],  int left, int right,  int x)
{
	if(left > right) return -1;
	
	int mid = (left + right)/2;
	
	if(x == a[mid])
		return mid;
		
	if(x < a[mid])
		return binarySearch(a, left, mid-1, x);
	
	if(x > a[mid])
		return binarySearch(a, mid+1, right, x);
	
	return 0;
}
int a[] = {1, 5, 6, 7, 9};
int main(int argc, char** argv)
{
  
  int s_val;
  do {
	    cin >> s_val;
  
  unsigned int num = sizeof(a)/sizeof(a[0]);
  int ret1 = binarySearch(a, 0, num -1, s_val);
 
  if (ret1 != -1)
    cout << "Vi tri cua 5 la: " << ret1;
  else 
  cout << "Khong tim dc";
  } while (true);
  return 0;
}