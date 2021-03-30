#include <iostream>

using namespace std;

void luDecomposition(double tab[][7])
{
    double lower[7][7], upper[7][7];


    // Decomposing matrix into Upper and Lower
    // triangular matrix
    for (int i = 0; i < 7; i++) {

        // Upper Triangular
        for (int k = i; k < 7; k++) {

            // Summation of L(i, j) * U(j, k)
            double sum = 0;
            for (int j = 0; j < i; j++)
                sum += (lower[i][j] * upper[j][k]);

            // Evaluating U(i, k)
            upper[i][k] = tab[i][k] - sum;
        }

        // Lower Triangular
        for (int k = i; k < 7; k++) {
            if (i == k)
                lower[i][i] = 1; // Diagonal as 1
            else {

                // Summation of L(k, j) * U(j, i)
                double sum = 0;
                for (int j = 0; j < i; j++)
                    sum += (lower[k][j] * upper[j][i]);

                // Evaluating L(k, i)
                lower[k][i] = (tab[k][i] - sum) / upper[i][i];
            }
        }
        // Displaying the result :

}
for (int i = 0; i < 7; i++) {
        // Lower
        for (int j = 0; j <7; j++)
            cout << lower[i][j] << "\t";
        cout << "\t";
}
cout<<endl<<endl;
        // Upper
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 7; j++)
        {

                cout << upper[i][j] << "\t";
                cout<<"\t";
        }
    }
}


int main()
{
     ///przepisuje bezposrednio do programu moja tablice
   double macierz[7][7]={{4,1,0,0,0,0,1},
                          {1,4,1,0,0,0,0},
                          {0,1,4,1,0,0,0},
                          {0,0,1,4,1,0,0},
                          {0,0,0,1,4,1,0},
                          {0,0,0,0,1,4,1},
                          {1,0,0,0,0,1,4}};

    ///wektor prawej strony
    float prawa_strona[7]={1,2,3,4,5,6,7};

    cout<<"Program do obliczenia ukladow rownan!"<<endl;

    luDecomposition(macierz);

    return 0;
}
