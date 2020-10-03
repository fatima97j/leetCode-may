/*
 *	link ==> https://leetcode.com/problems/number-of-recent-calls/solution/	
 */
class RecentCounter {
public:
    queue<int> requests;
    RecentCounter() {}
    
    int ping(int t) {
        this->requests.push(t);
        while(requests.front() < t - 3000) {
            requests.pop();
        }
        return requests.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
