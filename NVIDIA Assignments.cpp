// NVIDIA Assignments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    std::cout << "Hare Krishna..!\n";

	int t = 1, n, k;
	while (t--)
	{
		//scanf("%d%d", &n, &k);
        n = 5;
        k = 2;
		float* A = (float*)malloc(n * sizeof(float));
		/*for (int i = 0; i < n; i++)
			scanf("%f", &A[i])*/;

            A[0] = 1;
            A[1] = 2;
            A[2] = 3;
            A[3] = 4;
            A[4] = 5;
          
        int i, j, l;
        float sum;

        int count, rem, counter;

        count = n/k;

        rem = n %k ;

        if (rem == 0)
            counter = count;
        else

            counter = count + 1;

        float* B = (float*)malloc((counter) * sizeof(float));

        if (rem != 0)
        {
            for (j = 0; j <= counter - 2; j++)
            {
                sum = 0;
                for (l = 0; l <= k - 1; l++)
                {
                    sum = sum + A[j * k + l];
                }

                B[j] = sum / k;
            }

            sum = 0;
            for (l = 0; l <= rem - 1; l++)
            {
                sum = sum + A[(counter - 1) * k + l];
            }
            B[counter - 1] = sum / rem;

        }
        else
        {

            for (j = 0; j <= counter - 1; j++)
            {

                sum = 0;
                for (l = 0; l <= k - 1; l++)
                {
                    sum = sum + A[j * k + l];
                }
                B[j] = sum / k;
            }
        }


        for (int j = 0; j < counter; j++)
            printf("%.2f ", B[j]);
        printf("\n");

    }

}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
