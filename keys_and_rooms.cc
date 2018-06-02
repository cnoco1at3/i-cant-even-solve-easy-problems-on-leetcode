class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        if (rooms.size() == 0) {
            return true;
        }
        vector<bool> keys(rooms.size(), false);
        keys[0] = true;
        deque<int> queue;
        queue.emplace_back(0);
        while (!queue.empty()) {
            int room = queue.front();
            for (int key : rooms[room]) {
                if (!keys[key]) {
                    queue.emplace_back(key);
                    keys[key] = true;
                }
            }
            queue.pop_front();
        }
        for (bool key : keys) {
            if (!key) {
                return false;
            }
        }
        return true;
    }
};