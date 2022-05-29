var inp = readLine()!.split(separator:" ").map{Int($0)!}
var n = inp[0], k = inp[1]
var c = readLine()!.split(separator:" ").map{Int($0)!}
var a = Array(repeating:0, count:n), i = 0, d = [[Int]]()

for i in 1...k{
  d.append([i, c[i-1]])
}
d.sort{$0[1] > $1[1]}

for x in 0..<k{
  for _ in 1...d[x][1]{
    if (a[i] == d[x][0]){
      i += 2
      i %= n
    }
    while (a[i] > 0){
      i += 1
      i %= n
    }
    a[i] = d[x][0]
  }
}
var b = true
for i in 1..<n{
  if (a[i] == a[i-1]){
    b = false
  }
}
if (b){
  print(a.map{String($0)}.joined(separator:" "))
} else{
  print(-1)
}