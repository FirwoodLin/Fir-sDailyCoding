#include <iostream>
#include <Windows.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double start, stop, durationTime;
    start = clock();
    cout<<"多久后闹铃？(s=sec;m=min;h=hour)";
    
    int t;//sec
    char a;
    cin>>a;
    switch(a){
    	case 's':{
    		cin>>t;
			break;
		}
		case 'm':{
			cin>>t;
			t*=60;
			break;
		}
		case 'h':{
			cin>>t;
			t*=3600;
			break;
		}
		default:{
			cout<<"\nError\n";
			break;
		}
	}
	cout<<"alarm will ring in "<<t<<" sec(s)"<<endl;
    Sleep(t * 1000);    //程序延时___s
	system("explorer.exe al.mp3");
    
    stop = clock();
    durationTime = ((double)(stop - start)) / CLK_TCK;
    cout << "总耗时：" << durationTime << endl << endl;
    
    system("pause");
    return 0;
}
