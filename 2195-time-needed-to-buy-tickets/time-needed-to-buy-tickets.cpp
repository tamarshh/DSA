class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        for(int i=0;i<tickets.size();i++){
            q.push(i);
        }
        int cnt=0;
          while (!q.empty()) {
            int front = q.front();
            q.pop();
      
            if(tickets[front]>0){
                cnt++;
                tickets[front]--;
                  if (tickets[front] > 0) {
                    q.push(front);
                }
                  if (front == k && tickets[front] == 0) {
                    break;
                }


            }
            
        }
        return cnt;
        
    }
};