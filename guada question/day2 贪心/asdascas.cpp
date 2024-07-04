//
// Created by leizh on 2023/8/2.
//

#include <iostream>

using namespace std;



struct Student{
    int yu;
    int shu;
    int ying;
    int pai;
    int zong;
}student[1000];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin >> student[i].yu >> student[i].shu >> student[i].ying;
        student[i].zong=student[i].yu + student[i].shu + student[i].ying;
        student[i].pai=i;
    }

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
        {
            if(student[j].zong>student[j+1].zong)   swap(student[j],student[j+1]);
            if(student[j].zong == student[j+1].zong)
            {
                if (student[j].yu > student[j + 1].yu)
				 {
					cout<<1<<endl;
                    swap(student[j], student[j + 1]);

                    if (student[j].yu == student[j + 1].yu) {
                        if (student[j].pai < student[j + 1].pai){
						 swap(student[j], student[j + 1]);
                        cout<<2<<endl;
                    	}
                	}
                }
            }
        }

    for(int i=n-1;i>n-6;i--)
    {
        cout<<student[i].pai+1<<' '<<student[i].zong<<endl;
    }
}

