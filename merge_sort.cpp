#include <iostream>

using namespace std;

//Array we'll use in our function
int tmp[100];

void merge_sort(int vec[], int left, int right)
{
	if(left < right)
	{
		int half = (left + right) / 2;
		merge_sort(vec, left , half);
		merge_sort(vec, half + 1 , right);
		//Interclasare
		int i = left, j = half + 1, k = 0;
		while( i <= half && j <= right )
			if( vec[i] < vec[j])
				tmp[++k] = vec[i++];
			else
				tmp[++k] = vec[j++];
		while(i <= half)
			tmp[++k] = vec[i++];
		while(j <= right)
			tmp[++k] = vec[j++];
		for(i = left , j = 1 ; i <= right ; i ++ , j ++)
			vec[i] = tmp[j];
	}
}
int main() {
     // vector<int> test_vec = {1, 8, 4, 3, 10, 9, 2};
    int test_vec[7] = {1, 8, 4, 3, 10, 9, 2};
    merge_sort(test_vec, 0, 6);
    for(auto i: test_vec){
        cout << i << endl;
    }
}

