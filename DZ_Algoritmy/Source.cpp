#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;


vector<int> Separation(vector<int> wek) 
{
	vector<int>w2;
	int d = 0;
	while (wek.size()!=0)
	{
		int a = wek.back();
		wek.pop_back();
		while (a != 0)
		{
			d = a % 10;
			int kl = a / 10;
			a = kl;
			w2.insert(w2.begin(), d);
		}
	}
	return w2;
}

int  main()
{
	vector<int>w1{24,5,78,-1,734,323,654,7871};
	cout << "input: ";
	copy(w1.begin(), w1.end(), ostream_iterator<int>(cout, "   "));
	cout << endl<<endl;
	vector<int>w3 = Separation(w1);
	cout << "output: ";
	copy(w3.begin(), w3.end(), ostream_iterator<int>(cout, " "));
	cout << endl << endl;
	return 0;
}