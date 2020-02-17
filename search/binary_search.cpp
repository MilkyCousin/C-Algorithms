int binary_search(int K, int* A, int N)
{
    unsigned L = 0, R = N-1, M;
    while(L<=R)
    {
        M = (L + R) / 2;
        if(A[M] < K)
        {
            L = M+1;
            continue;
        }
        if(A[M] > K)
        {
            R = M-1;
            continue;
        }
        return M;
    }
    return -1;
}