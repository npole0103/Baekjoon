# Baekjoon
BaekjoonSource

## 동적 계획법 Dynamic Programming

특정 범위까지의 값을 구하기 위해서 그것과 다른 범위까지의 값을 이용하여 효율적으로 값을 구하는 문제해결 패러다임이다.

가정 1.큰 문제를 작은 문제로 나눌 수 있어야 함.  
가정 2. 작은 문제에서 구한 정답은 그것을 포함하는 큰 문제에서도 동일해야함.

Memoization이 사용된다는 점에서 분할 정복과 다름.

Recursion - Top down 방식. / Iteration - Bottom up 방식.

※ Bfs는 간선의 가중치가 모두 같을 때 최단 경로를 구하는 알고리즘임  
dp는 부분 문제를 해결하는 것으로 더 큰 문제를 해결할 수 있을 때 사용하는 알고리즘임.

대부분 dp[i]는 통상 최솟값 같은 값들을 저장하며, i는 해당 번째를 나타낸다.
