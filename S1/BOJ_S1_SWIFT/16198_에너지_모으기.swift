let n = Int(readLine()!)!
var a = readLine()!.split(separator:" ").map{Int($0)!}
var m = 0

func rec(_ a:[Int],_ c:Int,_ s:Int){
  if (m < s){
    m = s
  }
  if (c > 2){
    for i in 1...c-2{
      var t = a
      t.remove(at:i)
      rec(t, c-1, s+a[i-1]*a[i+1])
    }
  }
}

rec(a, n, 0)
print(m)
