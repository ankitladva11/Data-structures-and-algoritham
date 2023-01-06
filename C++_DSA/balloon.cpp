class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int k=22;
        if(points.size()==1)return 1;
        sort(points.begin(),points.end()); // Sorting 
        int cnt=1; // To burst first ballon
        int start=points[0][0],end=points[0][1]; // variables initialized with first ballons interval(range).
       for(int i=0;i<points.size();i++)
       {
           if(end < points[i][0]) // If current interval is not intersecting with previous intervals then we will require more arrows, so now the new interval to be compared will be current one..
           {
               start = points[i][0];
               end = points[i][1];
               cnt++;
           }
           else
           {
               start = max(points[i][0],start); //If the current interval intersects with previous one then we update current interval..(1,5 and 4,7 has intersection 4,5)
               end = min(points[i][1],end);
           }
       }
        return cnt;
    }
};