
    #include <bits/stdc++.h>

    using namespace std;
    int n=0;
    int qq=0;
    int main()
    {
        string x;
        int q2=1,w2=2,e2=3,q,w,e;

//        if(q2 || w2 || e2  ) {
//            cout << "No!!!";
//            return 0;1
//        }
        for(int i=1;i<999;i++)
        {

            q=q2*i;
            w=i*w2;
            e=i*e2;

            if(e<100||w<100||q<100||q>=1000 || w>=1000 || e>=1000 ||q==0 ||w==0 || e==0) continue;
            string q1=to_string(q);
            string w1=to_string(w);
            string e1=to_string(e);
            string z= q1+w1;
             z=z+e1;

            for(int i=0;i<z.size();i++)
            {
                for (int j = 0; j <= z.size() ; j++)
                {
                    if (j == i) break;
                    if(z[j]==z[i] || z[i]=='0' || z[j]=='0')   goto breakLoop;
                }
            }
            qq++;
            cout<<q<<' '<<w<<' '<<e<<endl;
            breakLoop: ;
    //        cout<<n<<endl;
    //        n++;
            q=0,w=0,e=0;
        }
        if(!qq) cout<<"No!!!";
    }