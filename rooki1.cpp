#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> types(n);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
    }
    // your code goes here
    
    int arr[5]={0,0,0,0,0};
    int min = 0, max = arr[0];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < n; j++){
            if (types[j] == i+1){
                arr[i]++;
            }
        }
    }
    for (int i = 0; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
            min = i;
        }
    }
    
    for (int i = 0; i < 5; i++){
        if(i != min){
            if(arr[i]== arr[min]){
                if(min > i){
                    min = i;
                }
            }
        }
    }
    
    cout << min+1;

    
    
    
    return 0;
}
