#include <iostream>
#include <vector>
using namespace std;

int dupcheck(int x [9][9], int y [9][9])
{
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            {
                if (!(x[i][j] == y[i][j]))
                    return 0 ;
            }
    return 1 ;
}


int endchecker(int x[9][9])
{

    for (int i = 0 ; i < 9 ; i++)
        for (int j = 0 ; j < 9 ; j++)
                if (x[i][j] == 0)
                    return 0;
    return 1 ;
}
void firstzeroimp(int sudo[9][9],int a1[9][9],int a2[9][9],int a3[9][9],int a4[9][9],int a5[9][9],int a6[9][9],int a7[9][9],int a8[9][9],int a9[9][9])
{
    for (int i = 0 ; i < 9 ; i++)
        for (int j = 0 ; j < 9 ; j++)
        {
             for (int i = 0 ; i < 9 ; i++)
                for (int j = 0 ; j < 9 ; j++)
                {
                    if (sudo[i][j] != 0)
                        {a1[i][j]= 0;
                        a2[i][j]= 0;
                        a3[i][j]= 0;
                        a4[i][j]= 0;
                        a5[i][j]= 0;
                        a6[i][j]= 0;
                        a7[i][j]= 0;
                        a8[i][j]= 0;
                        a9[i][j]= 0;}
                }
            switch (sudo[i][j]){
            case 1 :
                for (int k = 0 ; k < 9 ; k++)
                    {
                        a1[i][k] = 0 ;
                        a1[k][j] = 0 ;
                    }
            break;
             case 2 :
                for (int k = 0 ; k < 9 ; k++)
                    {
                        a2[i][k] = 0 ;
                        a2[k][j] = 0 ;
                    }
            break;
             case 3 :
                for (int k = 0 ; k < 9 ; k++)
                    {
                        a3[i][k] = 0 ;
                        a3[k][j] = 0 ;
                    }
            break;
             case 4 :
                for (int k = 0 ; k < 9 ; k++)
                    {
                        a4[i][k] = 0 ;
                        a4[k][j] = 0 ;
                    }
            break;
             case 5 :
                for (int k = 0 ; k < 9 ; k++)
                    {
                        a5[i][k] = 0 ;
                        a5[k][j] = 0 ;
                    }
            break;
             case 6 :
                for (int k = 0 ; k < 9 ; k++)
                    {
                        a6[i][k] = 0 ;
                        a6[k][j] = 0 ;
                    }
            break;
             case 7 :
                for (int k = 0 ; k < 9 ; k++)
                    {
                        a7[i][k] = 0 ;
                        a7[k][j] = 0 ;
                    }
            break;
             case 8 :
                for (int k = 0 ; k < 9 ; k++)
                    {
                        a8[i][k] = 0 ;
                        a8[k][j] = 0 ;
                    }
            break;
             case 9 :
                for (int k = 0 ; k < 9 ; k++)
                    {
                        a9[i][k] = 0 ;
                        a9[k][j] = 0 ;
                    }
            break;
            }
        }
}
void secondzeroimp(int sudo[9][9],int a1[9][9],int a2[9][9],int a3[9][9],int a4[9][9],int a5[9][9],int a6[9][9],int a7[9][9],int a8[9][9],int a9[9][9])
{
    int x = 0 , y = 0;
    for (int l = 0 ; l < 9 ; l++)
        for (int k = 0 ; k < 9 ; k++)
        {
            int x = l/3, y = k/3;
            if (sudo[l][k] == 1)
            {
                for (int i = x*3 ; i < (x+1)*3 ; i++)
                    for (int j = y*3 ;j < (y+1)*3 ; j++)
                        a1[i][j] = 0 ;
            }
            if (sudo[l][k] == 2)
            {
                for (int i = x*3 ; i < (x+1)*3 ; i++)
                    for (int j = y*3 ;j < (y+1)*3 ; j++)
                        a2[i][j] = 0 ;
            }
            if (sudo[l][k] == 3)
            {
                for (int i = x*3 ; i < (x+1)*3 ; i++)
                    for (int j = y*3 ;j < (y+1)*3 ; j++)
                        a3[i][j] = 0 ;
            }
            if (sudo[l][k] == 4)
            {
                for (int i = x*3 ; i < (x+1)*3 ; i++)
                    for (int j = y*3 ;j < (y+1)*3 ; j++)
                        a4[i][j] = 0 ;
            }
            if (sudo[l][k] == 5)
            {
                for (int i = x*3 ; i < (x+1)*3 ; i++)
                    for (int j = y*3 ;j < (y+1)*3 ; j++)
                        a5[i][j] = 0 ;
            }
            if (sudo[l][k] == 6)
            {
                for (int i = x*3 ; i < (x+1)*3 ; i++)
                    for (int j = y*3 ;j < (y+1)*3 ; j++)
                        a6[i][j] = 0 ;
            }
            if (sudo[l][k] == 7)
            {
                for (int i = x*3 ; i < (x+1)*3 ; i++)
                    for (int j = y*3 ;j < (y+1)*3 ; j++)
                        a7[i][j] = 0 ;
            }
            if (sudo[l][k] == 8)
            {
                for (int i = x*3 ; i < (x+1)*3 ; i++)
                    for (int j = y*3 ;j < (y+1)*3 ; j++)
                        a8[i][j] = 0 ;
            }
            if (sudo[l][k] == 9)
            {
                for (int i = x*3 ; i < (x+1)*3 ; i++)
                    for (int j = y*3 ;j < (y+1)*3 ; j++)
                        a9[i][j] = 0 ;
            }
        }
}
int main()
{
    int it = 0 ;
    int sudo[9][9],a1[9][9],a2[9][9],a3[9][9],a4[9][9],a5[9][9],a6[9][9],a7[9][9],a8[9][9],a9[9][9],tester[9][9];
    for (int i = 0 ; i < 9 ; i++)
        for (int j = 0 ; j < 9 ; j++)
        {
            a1[i][j] = 1 ;
            a2[i][j] = 2 ;
            a3[i][j] = 3 ;
            a4[i][j] = 4 ;
            a5[i][j] = 5 ;
            a6[i][j] = 6 ;
            a7[i][j] = 7 ;
            a8[i][j] = 8 ;
            a9[i][j] = 9 ;
        }
    for (int i = 0 ; i < 9 ; i++)
        for (int j = 0 ; j < 9 ; j++)
            cin >> sudo[i][j];
   while(true){
    cout << "start\n";
        firstzeroimp(sudo, a1, a2, a3, a4, a5, a6, a7, a8, a9);
        secondzeroimp(sudo, a1, a2, a3, a4, a5, a6, a7, a8, a9);
        int sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9;
        for (int i = 0; i < 9 && endchecker(sudo) == 0; i++){
                sum1 = 0 ;
                sum2 = 0 ;
                sum3 = 0 ;
                sum4 = 0 ;
                sum5 = 0 ;
                sum6 = 0 ;
                sum7 = 0 ;
                sum8 = 0 ;
                sum9 = 0 ;
            for (int j = 0; j < 9; j++)
                {
                    sum1 += a1[i][j];
                    sum2 += a2[i][j];
                    sum3 += a3[i][j];
                    sum4 += a4[i][j];
                    sum5 += a5[i][j];
                    sum6 += a6[i][j];
                    sum7 += a7[i][j];
                    sum8 += a8[i][j];
                    sum9 += a9[i][j];
                }
            if (sum1 == 1)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[i][k] += a1[i][k];
            if (sum2 == 2)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[i][k] += a2[i][k];
            if (sum3 == 3)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[i][k] += a3[i][k];
            if (sum4 == 4)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[i][k] += a4[i][k];
            if (sum5 == 5)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[i][k] += a5[i][k];
            if (sum6 == 6)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[i][k] += a6[i][k];
            if (sum7 == 7)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[i][k] += a7[i][k];
            if (sum8 == 8)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[i][k] += a8[i][k];
            if (sum9 == 9)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[i][k] += a9[i][k];
        }
        firstzeroimp(sudo, a1, a2, a3, a4, a5, a6, a7, a8, a9);
        secondzeroimp(sudo, a1, a2, a3, a4, a5, a6, a7, a8, a9);
        for (int j = 0; j < 9 && endchecker(sudo) == 0; j++){
                sum1 = 0 ;
                sum2 = 0 ;
                sum3 = 0 ;
                sum4 = 0 ;
                sum5 = 0 ;
                sum6 = 0 ;
                sum7 = 0 ;
                sum8 = 0 ;
                sum9 = 0 ;
            for (int i = 0; i < 9; i++)
                {
                    sum1 += a1[i][j];
                    sum2 += a2[i][j];
                    sum3 += a3[i][j];
                    sum4 += a4[i][j];
                    sum5 += a5[i][j];
                    sum6 += a6[i][j];
                    sum7 += a7[i][j];
                    sum8 += a8[i][j];
                    sum9 += a9[i][j];
                }
            if (sum1 == 1)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[k][j] += a1[k][j];
            if (sum2 == 2)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[k][j] += a2[k][j];
            if (sum3 == 3)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[k][j] += a3[k][j];
            if (sum4 == 4)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[k][j] += a4[k][j];
            if (sum5 == 5)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[k][j] += a5[k][j];
            if (sum6 == 6)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[k][j] += a6[k][j];
            if (sum7 == 7)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[k][j] += a7[k][j];
            if (sum8 == 8)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[k][j] += a8[k][j];
            if (sum9 == 9)
                for(int k = 0 ; k < 9 ; k++)
                    sudo[k][j] += a9[k][j];
        }
        firstzeroimp(sudo, a1, a2, a3, a4, a5, a6, a7, a8, a9);
        secondzeroimp(sudo, a1, a2, a3, a4, a5, a6, a7, a8, a9);
        int x = 0 , y = 0;
        for (int l = 0 ; l < 3 ; l++)
            for (int k = 0 ; k < 3 ; k++)
            {
                sum1 = 0 ;
                sum2 = 0 ;
                sum3 = 0 ;
                sum4 = 0 ;
                sum5 = 0 ;
                sum6 = 0 ;
                sum7 = 0 ;
                sum8 = 0 ;
                sum9 = 0 ;
                int x = l, y = k;
                for (int i = x*3 ; i < (x+1)*3 ; i++)
                    for (int j = y*3 ;j < (y+1)*3 ; j++)
                        {
                            sum1 += a1[i][j];
                            sum2 += a2[i][j];
                            sum3 += a3[i][j];
                            sum4 += a4[i][j];
                            sum5 += a5[i][j];
                            sum6 += a6[i][j];
                            sum7 += a7[i][j];
                            sum8 += a8[i][j];
                            sum9 += a9[i][j];

                        }

                    if (sum1 == 1)
                        for (int p = x*3 ; p < (x+1)*3 ; p++)
                            for (int t = y*3 ;t < (y+1)*3 ; t++)
                                if (a1[p][t] == 1)
                                    sudo[p][t] += a1[p][t];
                    if (sum2 == 2)
                        for (int p = x*3 ; p < (x+1)*3 ; p++)
                            for (int t = y*3 ;t < (y+1)*3 ; t++)
                                 if (a2[p][t] == 2)
                                    sudo[p][t] += a2[p][t];
                    if (sum3 == 3)
                        for (int p = x*3 ; p < (x+1)*3 ; p++)
                            for (int t = y*3 ;t < (y+1)*3 ; t++)
                                  if (a3[p][t] == 3)
                                    sudo[p][t] += a3[p][t];
                    if (sum4 == 4)
                       for (int p = x*3 ; p < (x+1)*3 ; p++)
                            for (int t = y*3 ;t < (y+1)*3 ; t++)
                                 if (a4[p][t] == 4)
                                    sudo[p][t] += a4[p][t];
                    if (sum5 == 5)
                        for (int p = x*3 ; p < (x+1)*3 ; p++)
                            for (int t = y*3 ;t < (y+1)*3 ; t++)
                                 if (a5[p][t] == 5)
                                    sudo[p][t] += a5[p][t];
                    if (sum6 == 6)
                      for (int p = x*3 ; p < (x+1)*3 ; p++)
                            for (int t = y*3 ;t < (y+1)*3 ; t++)
                                if (a6[p][t] == 6)
                                    sudo[p][t] += a6[p][t];
                    if (sum7 == 7)
                       for (int p = x*3 ; p < (x+1)*3 ; p++)
                            for (int t = y*3 ;t < (y+1)*3 ; t++)
                                 if (a7[p][t] == 7)
                                    sudo[p][t] += a7[p][t];
                    if (sum8 == 8)
                        for (int p = x*3 ; p < (x+1)*3 ; p++)
                            for (int t = y*3 ;t < (y+1)*3 ; t++)
                                  if (a8[p][t] == 8)
                                    sudo[p][t] += a8[p][t];
                    if (sum9 == 9)
                        for (int p = x*3 ; p < (x+1)*3 ; p++)
                            for (int t = y*3 ;t < (y+1)*3 ; t++)
                                 if (a9[p][t] == 9)
                                    sudo[p][t] += a9[p][t];

            }
        firstzeroimp(sudo, a1, a2, a3, a4, a5, a6, a7, a8, a9);
        secondzeroimp(sudo, a1, a2, a3, a4, a5, a6, a7, a8, a9);
          for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
               {
                    int GN = 0;
                    if (a1[i][j] == 0)
                        GN++;
                     if (a2[i][j] == 0)
                        GN++;
                     if (a3[i][j] == 0)
                        GN++;
                     if (a4[i][j] == 0)
                        GN++;
                     if (a5[i][j] == 0)
                        GN++;
                     if (a6[i][j] == 0)
                        GN++;
                     if (a7[i][j] == 0)
                        GN++;
                     if (a8[i][j] == 0)
                        GN++;
                     if (a9[i][j] == 0)
                        GN++;
                    if (GN == 8)
                        {sudo[i][j] = a1[i][j] +a2[i][j] +a3[i][j] +a4[i][j] +a5[i][j] +a6[i][j] +a7[i][j] +a8[i][j] +a9[i][j] ;}
               }
         if (it % 2 == 0)
            for (int i = 0; i < 9; i++)
                for (int j = 0; j < 9; j++)
                    tester[i][j] = sudo[i][j];
       if (dupcheck(tester,sudo) == 1 && it % 2 != 0)
       {

       }
         cout << "yaftane javab \n";
         if (endchecker(sudo) == 1)
            break;
         for (int i = 0 ; i < 9 ; i++){
            for (int j = 0 ; j < 9 ; j++)
                cout << sudo[i][j]<< " ";
            cout << endl;
            }
         for (int i = 0 ; i < 9 ; i++)
            for (int j = 0 ; j < 9 ; j++)
                {
                    a1[i][j] = 1 ;
                    a2[i][j] = 2 ;
                    a3[i][j] = 3 ;
                    a4[i][j] = 4 ;
                    a5[i][j] = 5 ;
                    a6[i][j] = 6 ;
                    a7[i][j] = 7 ;
                    a8[i][j] = 8 ;
                    a9[i][j] = 9 ;
                }

    it++;
    }
    cout <<"--------------------"<< endl;
    for (int i = 0 ; i < 9 ; i++){
        for (int j = 0 ; j < 9 ; j++)
            cout << sudo[i][j]<< " ";
        cout << endl;
        }
}

