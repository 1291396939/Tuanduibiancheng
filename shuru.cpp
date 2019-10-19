#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>
using namespace std;
int m=1,n=10;//若未出现-m，-n参数，默认值为1和10 
string inputFile(int argc,char *argv[])//读取文件 
{
	for(int i=0;i<argc;i++)
	{
		//cout<<argv[i]<<" "<<strlen(argv[i])<<endl;
		if(strcmp(argv[i],"-m")==0)//寻找m的值 
		{
			m=argv[i+1][0]-'0';
			i++;
			//cout<<"c"<<endl;
			continue;
		}
		if(strcmp(argv[i],"-n")==0)//寻找n的值 
		{
			n=argv[i+1][0]-'0';
			i++;
			//cout<<"d"<<endl;
			continue;
		}
	}
	ifstream fin;
	string s="",line;
	for(int i=0;i<argc;i++)
	{
		if(strcmp(argv[i],"-i")==0)
		{
			fin.open(argv[i+1]);
			while(getline(fin,line))
			{
				s+="\n";
				s+=line;
			}//读取文件内容存入s中 
			//cout<<s<<endl;
			fin.close();
			break;
		}
	}
	return s;
}


