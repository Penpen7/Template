void dfs(vector<int> a) {
    // 数列の長さが N に達したら打ち切り
    if (a.size() == N) {
        // 処理
        return;
    }

    A.push_back(v);
    for (int v = 0; v < M; ++v) {
        dfs(A);
    }
}

