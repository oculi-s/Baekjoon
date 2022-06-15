var t = Int(readLine()!)!
var c = [Int]()
var n = [[Int]]()
var v = 0, e = 0, a = true

func i()->[Int]{
  return readLine()!.split(separator:" ").map{Int($0)!}
}

func rec(_ x:Int,_ tc:Int){
  if (a && c[x] == 0){
    c[x] = tc
    for y in n[x]{
      if (c[y] == c[x]){
        a = false
      } else {
        rec(y, -tc)
      }
    }
  }
}

for _ in 1...t{
  var inp = i()
  v = inp[0]
  e = inp[1]
  c = Array(repeating:0, count:v+1)
  n = Array(repeating:[Int](), count:v+1)
  a = true
  for _ in 1...e{
    var inp = i()
    var x = inp[0], y = inp[1]
    n[x].append(y)
    n[y].append(x)
  }
  
  for x in 1...v{
    rec(x, 1)
  }
  print(a ? "YES":"NO")
}
