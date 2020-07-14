#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int total = 0;
void dfs(vector<int>& n, int pos, int target){
    if(pos == n.size()) {
        if(target == 0) total++;
        return;
    }
    
    dfs(n, pos+1, target+n[pos]);
    dfs(n, pos+1, target-n[pos]);
}

int solution(vector<int> numbers, int target) {
    
    dfs(numbers, 1, target+numbers[0]);
    dfs(numbers, 1, target-numbers[0]);
    
    return total;
}

int main(){

int myints[]={10,20,30,40,50,60,70};
  
  	vi vec(5);
	int arr[] = {1,1,1,1,1};
	copy(arr, arr+5, vec.begin());
	
	cout<<solution(vec, 3);
	return 0;
}