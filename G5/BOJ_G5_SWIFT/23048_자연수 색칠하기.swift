var n = Int(readLine()!)!
var a = [Int](), c = 2, d = 0
var p = Array(repeating:1, count:n+1)
p[1] = 1

for i in 2..<n+1{
  d = 0
  for j in 1..<n/i+1{
    if (p[i*j] == 1){
      p[i*j] = c
      d = 1
    }
  }
  c += d
}
print(c-1)
for i in 1..<n+1{
  print(p[i], terminator:" ")
}