class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        queue<int> que;
        for(int student: students){
            que.push(student);
        }
        int idx=0,count=0;
        while(!que.empty() && count<que.size()){
            if(que.front()==sandwiches[idx]){
                idx++;
                count=0;
                que.pop();
            }else{
                que.push(que.front());
                que.pop();
                count+=1;
            }
        }
        return count;
    }
};