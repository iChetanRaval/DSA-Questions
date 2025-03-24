// Problem statement
// You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.
// You are also given an integer 'k' which denotes the number of aggressive cows.
// You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
// Print the maximum possible minimum distance.
// Sample Input 1 :
// 6 4
// 0 3 4 7 10 9

// Sample Output 1 :
// 3
// --------------------------------------Code---------------------------------------------

bool canWePlace(vector<int> &stalls,int dist,int cows){
    int cntCows = 1;
    int last = stalls[0];
    for(int i=1; i<stalls.size(); i++){
        if(stalls[i]-last >= dist){
            cntCows++;
            last = stalls[i];
        }
        if(cntCows >= cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    int low = 1;
    int high = stalls[n-1]-stalls[0];

    while(low <= high){
        int mid = (low + high)/2; 
        if(canWePlace(stalls,mid,k)==true){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return high;
}
