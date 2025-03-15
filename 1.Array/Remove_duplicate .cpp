//Remove Duplicate elimenent in array Ex for input :122333334  outpur:1234
//problem : https://www.naukri.com/code360/problems/remove-duplicates-from-sorted-array_1102307?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM
int removeDuplicates(vector<int> &arr, int n) {
	int i=0;
	for(int j=1; j<n; j++)
	{
		if(arr[j]!=arr[i])
		{
			arr[i+1]=arr[j];
			i++;

		}
	}
	return i+1;
}
