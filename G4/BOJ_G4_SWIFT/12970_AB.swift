var inp = readLine()!.split(separator:" ").map{Int($0)!}
var n = inp[0], k = inp[1], d = true
var a = Array(repeating:0, count:k+1)

func rec(_ s:String,_ l:Int,_ b:Int,_ c:Int){
  if (d){
    if (l == n){
      if (c == k){
        print(s)
        d = false
      }
    } else if (l < n && c <= k){
      var m = 0
      for i in l..<n{
        if ((b+(i-l)) * (n-i) > m){
          m = (b+(i-l)) * (n-i)
        }
      }
      if (c+m>=k){
        rec("B"+s,l+1,b+1,c)
        rec("A"+s,l+1,b,c+b)
      }
    }
  }
}

rec("", 0, 0, 0)
if (d){
  print(-1)
}
