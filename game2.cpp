#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

struct goods
{
    int brand;
    int costSum;
};

using namespace std;

bool cmpCost(const goods& a, const goods& b)
{
    if (a.costSum == b.costSum)
        return a.brand < b.brand;  // 按品牌升序
    return a.costSum > b.costSum;  // 按costSum降序
}

int main()
{
    int N;
    cin >> N;
    int s, k;
    while (N--)
    {
        cin >> s >> k;
        unordered_map<int, int> brand_cost;  // 使用unordered_map优化查找和更新

        for (int i = 0; i < k; i++)
        {
            goods current;
            cin >> current.brand >> current.costSum;
            brand_cost[current.brand] += current.costSum;  // 累加同品牌的costSum
        }

        vector<goods> g;
        // 将unordered_map的内容转存为vector以便排序
        for (auto& p : brand_cost)
        {
            g.push_back({p.first, p.second});
        }

        sort(g.begin(), g.end(), cmpCost);  // 按costSum降序，若相同则按品牌升序

        int sum = 0;
        for (int i = 0; i < s && i < g.size(); i++)
            sum += g[i].costSum;

        cout << sum << '\n';
    }
    return 0;
}