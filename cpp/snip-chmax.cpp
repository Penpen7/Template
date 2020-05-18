template<typename T> bool chmax(T &m, const T q) {
  if (m < q) {m = q; return true;} else return false; }
template<typename T> bool chmin(T &m, const T q) {
  if (m > q) {m = q; return true;} else return false; }
