	#include<bits/stdc++.h>
	using namespace std;
	
	vector<int> insert(vector<int> & nums,int key){
		if(nums.size()==0 || nums[nums.size()-1]<= key){
			nums.push_back(key);
			return nums;
	}
		int val = nums[nums.size()- 1];
		nums.pop_back();
		nums = insert(nums,key);
		nums.push_back(val);
		return nums;
	}
	
	vector <int> sort(vector<int> & nums){
		if(nums.size()==0)
			return nums;
		int lastnum = nums[nums.size()-1];
		nums.pop_back();
		nums = sort(nums);
		return nums = insert(nums,lastnum); 
	}
	int main(){
		int size;
		cin >> size;
		vector<int> nums;
		for(int i=0; i<size; i++)
		{
			int x; cin >> x;
			nums.push_back(x);
		}
		
		nums = sort(nums);
		for(int i=0; i<size;i++){
			cout << nums[i] << " ";
		}
	}
