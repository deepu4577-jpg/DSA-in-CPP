#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr = {3,2,1,5,2};
    sort(arr.begin(),arr.end());
    cout<<"largest element="<< arr[arr.size()-1];
}