class Solution {
public:

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {

        // we choose the least-in-number neighbour because to follow
        // the path from some point to zero
        // you always have to go to the least neighbour in number
        // intilaize to max becasue we need to minimize that number
        // with new edges added
        vector<int> leastNeighbour(n, INT32_MAX);

        // for each edge, we conclude the least-in-number neighbour
        // for the two nodes in edge
        for (auto & i : edges) {
            leastNeighbour[i[0]] = min(i[1], leastNeighbour[i[0]]);
            leastNeighbour[i[1]] = min(i[0], leastNeighbour[i[1]]);

        }

        // here we store the nodes we NEED to visit
        // initialized to false so later on when we follow the path
        // to node-zero we terminate if
        // we find a start of a previously visited path thus...
        // saving time for not tracing the same path twice
        // basically... if node 3 is connected to node 2 and we know
        // that we visited node 2 then we don't need to trace
        // to node-zero , only trace the path until node 2 (all nodes
        // from 2 to 0 were already checked before)
        vector<bool>mustVisit(n ,false);

        // we go from last to start because checking the longer paths
        // makes it faster for us to mark other nodes
        int j = 0;
        for (int i = n - 1; i > 0; --i) {
            if(hasApple[i]){
                j = i;
                // if it has apple then mark its path by marking the
                // point then going to the least neighbour
                // repeat until reach zero-node or
                // a node we previously visited
                while(not mustVisit[j] && j != 0){
                    mustVisit[j] = true;
                    j = leastNeighbour[j];
                }
            }
        }

        int counter = 0;
        for (auto i : mustVisit) {
            counter += int(i);
        }

        return  counter*2;
    }
};