var inp = readLine()!.split(separator:" ").map{Int($0)!}
var n = inp[0], m = inp[1], b = 0, nx = Array(0...n-1)

struct line{
  var x:Int!
  var y:Int!
  var d:Int!
}
var d = [line]()

for _ in 1...m{
  var inp = readLine()!.split(separator:" ").map{Int($0)!}
  d.append(line(x:inp[0]-1, y:inp[1]-1, d:inp[2]))
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