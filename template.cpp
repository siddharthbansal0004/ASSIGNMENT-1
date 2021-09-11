#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back
#define pop pop_back
#define mp make_pair
#define mod 1000000007
#define PI 3.141592653589793238462
#define endl "\n"


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
string enc;
string decr;

char mapping[26];
char demap[26];
void encrypt(string s,int key)
{
	enc=s;
	for (int i=0;i<s.length();i++){
		//cout<<(s[i]+key)-'a';
		enc[i]=(char)('a'+((s[i]+key)-'a')%26);
	}
	cout<<enc<<endl;
}


void decrypt(string s, int key)
{
	decr=s;
	for (int i=0;i<s.length();i++){
		//cout<<(s[i]+key)-'a';
		decr[i]=(char)('a'+((s[i]-key+26)-'a')%26);
	}
	cout<<decr;
}
int main()
{ios_base::sync_with_stdio(false);
    string s;
int key;
string s1;
int key1;
cin>>s1>>key1;
encrypt(s1,key1);


cin>>s>>key;
decrypt(s,key);


string key2="bacedgfihkjmlonqpsrutwvyxz";
for (int i=0;i<26;i++){
	mapping[i]=key2[i];
	demap[key2[i]-'a']='a'+i;
}

string s3,s4;
cin>>s3>>s4;

cout<<endl;

for(int i=0;i<s3.length();i++) cout<<mapping[s3[i]-'a'];
cout<<endl;

for(int i=0;i<s4.length();i++) cout<<demap[s4[i]-'a'];
cout<<endl;



}

//n & (1<<i)- for extracting ith bits
//while(n>0){count=count+(n&1); n=n>>1;}//counting set bits





