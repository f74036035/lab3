#include<iostream>
#include<cstdlib>
#include<fstream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	ifstream in("file.in",ios::in);
	if(!in)
	{
		cerr<<"file could not be opened"<<endl;
		return -1;
	}
	int n;
	in>>n;
	int intarr[n];
	int i=0;
	while(in>>intarr[i])
	{
	//        cout<<intarr[i]<<"\n";
		i++;
	}
	vector<int> a(intarr,intarr+n);
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	int sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+a.at(i);
	}   
	cout<<sum<<endl;
	return 0;

}
