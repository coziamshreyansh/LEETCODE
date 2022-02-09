#include<bits/stdc++.h>
using namespace std;
struct compare{
	bool operator()(int &a, int &b)
	{
		return a < b;
	}
};
void print(vector<int>& v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	return;

}
int main()
{
	vector<int> v(10);
	iota(v.begin(), v.end(), 1);
	print(v);
	priority_queue<int , vector<int>, compare> pq(v.begin(), v.end());
	while(!pq.empty())
		{cout<<pq.top()<<" ";
		pq.pop();}
	return 0;
}
