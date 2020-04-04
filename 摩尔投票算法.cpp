/*题目：给定一个无序数组，有n个元素，找出其中的一个多数元素，多数元素出现的次数大于⌊n/2⌋，注意数组中也可能不存在多数元素。
采用摩尔投票算法，设定一个候选值candidate，以及记录次数的变量times，当前值如果等于候选值时times加一，否则times减一，即将两个不同的值同时消除；
这样的话最终剩下的值即为大于一半的数
数组中没有出现次数大于⌊n/2⌋的数的情况：需要进行第二次遍历，将candidate在数组中出现的次数与⌊n/2⌋比较
*/

int majorityElement(vector<int>& nums) 
{
	int m = 0, count = 0;
	for (int i = 0; i < nums.size(); i++) 
	{
		if (count == 0)
		{
			m = nums[i];
			count++;
		}
		else if (nums[i] == m) 
			count++;
		else
			count--; 
	}
	return m;
}
