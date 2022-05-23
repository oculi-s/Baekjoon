var n = Int(readLine()!)!
var a = readLine()!.split(separator:" ").map{Int($0)!}
var b = Array(repeating:0, count:2000001)

func rec(_ c:Int, _ s:Int){
  b[s] = 1
  for i in c..<n{
    rec(i+1, s+a[i])
  }
}

rec(0, 0)
for i in 1...2000000{
  if (b[i] == 0){
    print(i)
    break
  }
}