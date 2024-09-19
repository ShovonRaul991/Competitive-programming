#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define MOD 1000000007

typedef struct {
    long long amount;
    int cost;
} Pair;

int comparePairs(const void *a, const void *b) {
    return ((Pair *)a)->cost - ((Pair *)b)->cost;
}

bool feasible(long long mid, int N, long long A[], long long B[], int C[], long long *cost) {
    Pair surplus[N];
    Pair deficit[N];
    int surplusCount = 0, deficitCount = 0;
    *cost = 0;

    // Create surplus and deficit arrays
    for (int i = 0; i < N; i++) {
        if (A[i] > mid) {
            surplus[surplusCount++] = (Pair){A[i] - mid, C[i]};
        } else if (A[i] < mid) {
            deficit[deficitCount++] = (Pair){mid - A[i], C[i]};
        }
    }

    // Sort surplus and deficit arrays by cost
    qsort(surplus, surplusCount, sizeof(Pair), comparePairs);
    qsort(deficit, deficitCount, sizeof(Pair), comparePairs);

    // Match deficits with surpluses to minimize cost
    int j = 0;
    for (int i = 0; i < deficitCount; i++) {
        long long def_amount = deficit[i].amount;
        int def_cost = deficit[i].cost;

        while (def_amount > 0 && j < surplusCount) {
            long long sur_amount = surplus[j].amount;
            int sur_cost = surplus[j].cost;

            if (sur_cost > def_cost) {
                return false;
            }

            long long transfer_amount = sur_amount < def_amount ? sur_amount : def_amount;
            *cost = (*cost + transfer_amount * sur_cost) % MOD;
            surplus[j].amount -= transfer_amount;
            def_amount -= transfer_amount;

            if (surplus[j].amount == 0) {
                j++;
            }
        }

        if (def_amount > 0) {
            return false;
        }
    }

    return true;
}

void solve(int N, int A[], int B[], int C[], int *result) {
    long long low = A[0], high = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < low) low = A[i];
        if (A[i] > high) high = A[i];
    }

    long long best_mid = low;
    long long best_cost = LLONG_MAX;

    while (low <= high) {
        long long mid = (low + high) / 2;
        long long cost;
        if (feasible(mid, N, A, B, C, &cost)) {
            if (mid > best_mid || (mid == best_mid && cost < best_cost)) {
                best_mid = mid;
                best_cost = cost;
            }
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    result[0] = best_mid;
    result[1] = best_cost;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t_i = 0; t_i < T; t_i++) {
        int N;
        scanf("%d", &N);

        int *A = (int *)malloc(sizeof(int) * N);
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int *B = (int *)malloc(sizeof(int) * N);
        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
        }

        int *C = (int *)malloc(sizeof(int) * N);
        for (int i = 0; i < N; i++) {
            scanf("%d", &C[i]);
        }

        int result[2];
        solve(N, A, B, C, result);
        printf("%d %d\n", result[0], result[1]);

        free(A);
        free(B);
        free(C);
    }

    return 0;
}