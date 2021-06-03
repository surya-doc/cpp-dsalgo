// We have jobs: difficulty[i] is the difficulty of the ith job, and profit[i] is the profit of the ith job.

// Now we have some workers. worker[i] is the ability of the ith worker, which means that this worker can only complete a job with difficulty at most worker[i].

// Every worker can be assigned at most one job, but one job can be completed multiple times.

// Input: difficulty = [2,4,6,8,10], profit = [10,20,30,40,50], worker = [4,5,6,7]
// Output: 100
// Explanation: Workers are assigned jobs of difficulty [4,4,6,6] and they get profit of [20,20,30,30] seperately.

class Solution
{
public:
    int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
    {
        int n = difficulty.size();
        vector<pair<int, int>> job;
        int ans = 0;
        int j = 0;
        int max_proft = 0;
        for (int i = 0; i < n; i++)
        {
            job.push_back(make_pair(difficulty[i], profit[i]));
        }
        sort(job.begin(), job.end());
        sort(worker.begin(), worker.end());
        for (int i = 0; i < worker.size(); i++)
        {
            // in that case though it seems we are compairing every j for each i but actually we are not doing so because in that case we are using the previous result for greterthan case so thats why j and int_max is declared at once
            while (j < n && worker[i] >= job[j].first)
            {
                max_proft = max(job[j++].second, max_proft);
            }
            ans += max_proft;
        }
        return ans;
    }
};