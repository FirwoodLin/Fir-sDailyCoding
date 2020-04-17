#include <iostream>
using namespace std;
int main()
{
	
	int jan,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec;
	int rest=0/*月底手里结余*/,mom=0;
	int OR=0;//透支月份 
	
	cin>>jan>>feb>>mar>>apr>>may>>june>>july>>aug>>sep>>oct>>nov>>dec;
	
	if (jan>300) OR=-1;
	else {
	rest=(300-jan)%100;
		if (feb>300+rest) OR=-2;
		else {
		rest=(rest+300-feb)%100;
			if (mar>300+rest) OR=-3;
			else {
			rest=(rest+300-mar)%100;
				if (apr>300+rest) OR=-4;
				else {
				rest=(rest+300-apr)%100;
					if (may>300+rest) OR=-5;
					else {
					rest=(rest+300-may)%100;
						if (june>300+rest) OR=-6;
						else {
						rest=(rest+300-june)%100;
							if (july>300+rest) OR=-7;
							else {
							rest=(rest+300-july)%100;
								if (aug>300+rest) OR=-8;
								else {
								rest=(rest+300-aug)%100;
									if (sep>300+rest) OR=-9;
									else {
									rest=(rest+300-sep)%100;
										if (oct>300+rest) OR=-10;
										else {
										rest=(rest+300-oct)%100;
											if (nov>300+rest) OR=-11;
											else {
											rest=(rest+300-nov)%100;
												if (dec>300+rest) OR=-12;
												else {
												rest=(rest+300-dec)%100;
													}}}}}}}}}}}}
	mom=(3600-(jan+feb+mar+apr+may+june+july+aug+sep+oct+nov+dec)-rest)/10*12;	
		
	if(OR==0) cout<<mom<<endl;
	else cout<<OR<<endl;
	
	return 0;
		
		
}
