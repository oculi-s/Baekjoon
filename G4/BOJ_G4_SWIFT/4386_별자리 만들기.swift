import Foundation

var n = Int(readLine()!)!
var x = [Double](), y = [Double]()
var b = 0.0, c = 0
var nx = Array(0...n-1)

struct line{
  var x:Int!
  var y:Int!
  var d:Double!
}
var d = [line]()

for _ in 1...n{
  var inp = readLine()!.split(separator:" ").map{Double($0)!}
  x.append(inp[0])
  y.append(inp[1])
}

for i in 0..<n{
  for j in i+1..<n{
    let t = sqrt(pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2))
    d.append(line(x:i, y:j, d:t))
  }
}

func find(_ x:Int)->Int{
  if (nx[x] == x){
    return x
  } else {
    nx[x] = find(nx[x])
    return nx[x]
  }
}

func union(_ x:Int,_ y:Int){
  if (x < y){
    nx[x] = y
  } else{
    nx[y] = x
  }
}

d.sort{$0.d<$1.d}
for v in d {
  let x = find(v.x!), y = find(v.y!)
  if (x != y){
    union(x, y)
    b += v.d!
  }
}
print(b)