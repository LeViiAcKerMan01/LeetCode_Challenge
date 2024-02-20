class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {

        // Sort meetings as per the start time
        // Find the first room which can be used for current meeting
        // cases: 1- No rooms found 2- empty rooms found
        // No rooms found - Select the room which will end first

        int m = meetings.size();

        sort(begin(meetings), end(meetings));

        vector<long long> lastAvailableAt(n, 0); // lastAvailableAt[i] = Room no. i will be last available at.

        vector<int> roomsUsedCount(n, 0);// roomsUsedCount[i] = Rooms i is used how many times
        //O(m*n) + O(mlogn)
        for(vector<int> meet : meetings){

            int start = meet[0];
            int end = meet[1];
            int duration = end - start;
            bool found = false;

            long long earlyEndRoomTime = LLONG_MAX;
            int earlyEndRoom = 0;

            // find the first available meeting room for my current meeting
            for(int room = 0; room < n; room++){//O(n)


                if(lastAvailableAt[room] <= start){

                    lastAvailableAt[room] = end; // current meeting will finish at end
                    roomsUsedCount[room]++;
                    found = true;
                    break;
                }
                if(lastAvailableAt[room] < earlyEndRoomTime){

                    earlyEndRoomTime = lastAvailableAt[room];
                    earlyEndRoom = room;
                }
            }

            // I couldn't find any room
            if(!found){

                // That room which will end first
                lastAvailableAt[earlyEndRoom] += duration;
                roomsUsedCount[earlyEndRoom]++;
            }
        }
        int resultRoom = -1;
        int maxUse = 0;

        for(int room = 0; room < n; room++){

            if(roomsUsedCount[room] > maxUse){
                maxUse = roomsUsedCount[room];
                resultRoom = room;
            }
        }
        return resultRoom;
        
    }
};