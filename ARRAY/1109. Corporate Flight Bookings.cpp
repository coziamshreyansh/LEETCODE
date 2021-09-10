class Solution {
public:
    // O(N*SIZE)
//     vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
//         int x = bookings.size(); int y = bookings[0].size();
//         vector<int> ans(n, 0); int first, last, seats;
//         for(int i=0; i<x; i++){
//             first=bookings[i][0]; last = bookings[i][1];
//             seats = bookings[i][2];
//              while(first<=last){
//                  ans[first-1] +=seats; first++;
//              }
            
//         }
//     return ans;
//     }
    // O(N)
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n){
        
        int first, last, seats;
        vector<int> ans(n,0);
        
        for(auto &booking : bookings){
             first = booking[0]-1;
             last = booking[1]-1;
             seats = booking[2];
             ans[first] += seats;
            if(last+1 < n){ans[last+1] -= seats;}
        }
        for(int i=1; i<n; i++){
            ans[i] += ans[i-1];
        }
        return ans;
    }
    
};
