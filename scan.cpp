#include "scan.h"
#include<iostream>
#include<queue>
#include<string>
using namespace std;

queue<string> Scan::ToStringQueue(string input)
{
	int i(0);
	for(;i<input.size();i++)
	{
		//�����ַ����г������ֵ������������һ������� 
			if(input[i]>='0'&&input[i]<='9'){
			for(;input[i]>='0'&&input[i]<='9';i++)
			{
				cout<<input.front();
				input.pop();	
			}
			cout<<endl;
		}
		//�����ַ� 
		else
		{
			cout<<input.front<<endl;
			input.pop();	
		}
	}
}
