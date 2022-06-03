var inp = readLine()!.split(separator:" ").map{Int($0)!}
var n = inp[0], k = inp[1], M = 100000

if (n >= k){
  print(n-k)
  for x in 0...n-k{
    print(n-x, terminator:" ")
  }
} else {
  var m = Array(repeating:M, count:M+1)
  var stk = [[Int]]()
  stk.append([n])
  while (true){
    let a = stk.removeFirst()
    let c = a.count
    let x = a.last!
    if (x == k){
      print(c - 1)
      print(a.map{String($0)}.joined(separator:" "))
      break
    } else if (c < m[x]) {
      m[x] = c
      if (x+1 <= M){ stk.append(a+[x+1]) }
      if (x*2 <= M){ stk.append(a+[x*2]) }
      if (x > 0){ stk.append(a+[x-1]) }
    }
  }
}
