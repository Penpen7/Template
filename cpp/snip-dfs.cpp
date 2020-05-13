void dfs(vector<int> &A) {
    // 数列の長さが N に達したら打ち切り
    if (A.size() == N) {
        // 処理
        return;
    }

    for (int v = 0; v < M; ++v) {
        A.push_back(v);
        dfs(A);
        A.pop_back();
    }
}

