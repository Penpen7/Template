int ok = 0;     //解が存在する値 [ok,ng) or (ng,ok]
int ng = 1000;  // 解が存在しない値

while (abs(ok - ng) > 1) {
  int mid = (ok + ng) / 2;
  if (solve(mid))
    ok = mid;
  else
    ng = mid;
}
