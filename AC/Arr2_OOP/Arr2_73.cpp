#include<iostream>
using namespace std;

int month = 0, cnt[50] = {0}, count = 0;
// past month, store count table, counter
int recursive(int); 

int recursive(int count) {
    if(count == 0 || count == 1) {  
        cout << "1 ";       // initialization
        count++, cnt[0] = 1, cnt[1] = 1; // count == 0 & count == 1
        return recursive(count);    // for next step 
    }else if(count == 2) {
        cout << cnt[count - 2] + cnt[count - 1]; 
        count++, cnt[count-1] = cnt[count - 2] + cnt[count - 3];
        return recursive(count);
    }else if(count < month) {   // count >= 2 && count < month
        cout << " " << cnt[count - 2] + cnt[count - 1];     // output
        count++, cnt[count-1] = cnt[count - 2] + cnt[count - 3];// fill the count table
        return recursive(count);// find the next            
    }else if(count == month) {  // terminate the count and output endline
        cout << endl;
        return 0;
    }
}

int main() {
    int num;
    cin >> num;     // # of for loop
    for(int i = 0; i < num; i++){
        cin >> month;   // past month
        count = 0;      // initialization
        recursive(count);   // recursive to find 
    }

    return 0;
}