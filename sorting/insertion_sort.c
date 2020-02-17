void insertion_sort(int* A, unsigned L)
{
    for(int I=1; I<L; I++)
    {
        for(int J=I; J>=1; J--)
        {
            if(A[J]<A[J-1])
            {
                A[J] = A[J]+A[J-1];
                A[J-1] = A[J]-A[J-1];
                A[J] = A[J]-A[J-1];
            }
        }
    }
}
