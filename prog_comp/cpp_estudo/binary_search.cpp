#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <array>
#include <algorithm>
#include <sstream>
#include <math.h>
using namespace std;

int main(){



    // array<int,7> lista = {2,3,5,6,8,10,12};   

    // int target = 10;

    // if (lista[lista.size()/2] == target){
    //     return lista[lista.size()/2];
    // }

class Solution {
public:
    int findMin(vector<int>& a) {
        int n = a.size();
        int left = 0, right = n - 1;
        int ans = -1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(a[mid] <= a[n-1]) {
                ans = a[mid];
                right = mid - 1; // look for something even smaller on the left
            }
            else {
                left = mid + 1;
            }
        }
        return ans;
    }
};

    

}
