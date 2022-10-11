// maxSubArray solution by Nirmal Shah
// An important leetcode problem which has been asked in many competitive exams as well as interview questions.

class Solution {
public:
    int maxSubArray(vector<int>& numbers) 
    {
        int total=numbers[0];
        for(int i=1;i<numbers.size();i++)
        {
            int t=numbers[i-1]+numbers[i];
            numbers[i]=max(numbers[i],t);
            total=max(total,numbers[i]);
        }
        return total;
    }
};
