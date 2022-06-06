var n = Int(readLine()!)!
var nx = Array(0...n-1)
var m = [[Int]]()

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

struct line{
  var x:Int!
  var y:Int!
  var d:Int!
}

var d = [line](), b = 0
for _ in 1...n{
  m.append(readLine()!.split(separator:" ").map{Int($0)!})
}

for i in 0..<n{
  for j in i+1..<n{
    d.append(line(x:i, y:j, d:m[i][j]))
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