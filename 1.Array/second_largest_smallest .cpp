//to find second largest and second smallest number
//code Link: https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM
int secondlargest(vector<int> &a, int n)
{
    int largest= a[0];
    int seclargest= -1;

    for (int i=0; i<n; i++)
    {
        if(a[i]>largest)
        {
            seclargest = largest;
            largest = a[i];
            

        }else if (a[i]<largest && a[i]>seclargest)
        {
            seclargest= a[i];
        }
    }

    return seclargest;
}

int secondsmallest(vector<int> &a, int n)
{
    int smallest= a[0];
    int secsmallest= INT_MAX;

    for (int i=0; i<n; i++)
    {
        if(a[i]<smallest)
        {
            secsmallest= smallest;
            smallest = a[i];
            

        }else if(a[i]!=smallest && a[i]<secsmallest)
        {
            secsmallest= a[i];
        }
    }

    return secsmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int seclargest = secondlargest(a,n);
    int secsmallest = secondsmallest(a,n);

    return{seclargest,secsmallest}; 
}
