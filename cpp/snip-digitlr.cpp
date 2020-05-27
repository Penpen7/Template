
  // i 桁数
  // l 最高位の桁
  // k 実際の値
  // nになるか桁数を満足するまで、計算を行う
  rep(i,6){
    repz(l,1,10){
      repz(k,l*d,(l+1)*d){
        if(k>n){
          isend = true;
          break;
        }
        int r = k%10;
        lr[l][r]++;
      }
      if(isend) break;
    }
    if(isend) break;
    d*=10;
  }
