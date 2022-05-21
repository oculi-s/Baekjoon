let a = readLine()!.split(separator:" ").map{Int($0)!}
let r = a[0], c = a[1], q = a[2]
var m = Array(repeating:Array(repeating:0, count:c), count:r)
var s = Array(repeating:Array(repeating:0, count:c), count:r)

for i in 0...r-1{
  m[i] = readLine()!.split(separator:" ").map{Int($0)!}
  s[i] = m[i]
}

for i in 0...r-1{
  for j in 0...c-1{
    if (i > 0){
      s[i][j] += s[i-1][j]
    }
    if (j > 0){
      s[i][j] += s[i][j-1]
    }
    if (i > 0 && j > 0){
      s[i][j] -= s[i-1][j-1]
    }
  }
}

for _ in 1...q{
  var b = readLine()!.split(separator:" ").map{Int($0)!}
  let r1 = b[0]-1, c1 = b[1]-1, r2 = b[2]-1, c2 = b[3]-1
  var t = s[r2][c2]
  if (c1 > 0){
    t -= s[r2][c1-1]
  }
  if (r1 > 0){
    t -= s[r1-1][c2]
  }
  if (r1 > 0 && c1 > 0){
    t += s[r1-1][c1-1]
  }
  print(t/((r2-r1+1)*(c2-c1+1)))
}
