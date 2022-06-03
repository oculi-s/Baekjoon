var inp = readLine()!.split(separator:" ").map{Int($0)!}
var n = inp[0], m = inp[1]
var a = [[Int]](), b = [[Int]](), c = 0, t = 0
var d = Array(repeating:Array(repeating:0, count:m+1),count:n+1)

for _ in 1...n{
  a.append(readLine()!.split(separator:" ").map{Int($0)!})
}

func chk()->Int{
  c = 0
  b = a
  for i in 0...n-1{
    for j in 0...m-1{
      if (b[i][j] > 0){
        spr(i, j)
        c += 1
      }
    }
  }
  return c
}

func spr(_ y:Int,_ x:Int){
  b[y][x] = 0
  if (b[y-1][x] > 0){ spr(y-1, x) }
  if (b[y+1][x] > 0){ spr(y+1, x) }
  if (b[y][x-1] > 0){ spr(y, x-1) }
  if (b[y][x+1] > 0){ spr(y, x+1) }
}

func melt(){
  for i in 0...n-1{
    for j in 0...m-1{
      if (a[i][j] > 0){
        if (a[i][j-1] == 0) {d[i][j] += 1}
        if (a[i][j+1] == 0) {d[i][j] += 1}
        if (a[i-1][j] == 0) {d[i][j] += 1}
        if (a[i+1][j] == 0) {d[i][j] += 1}
      }
    }
  }
  for i in 0...n-1{
    for j in 0...m-1{
      if (a[i][j] > 0){
        a[i][j] -= d[i][j]
        if (a[i][j] < 0){
          a[i][j] = 0
        }
        d[i][j] = 0
      }
    }
  }
  t += 1
}

var k = chk()
while(k == 1){
  melt()
  k = chk()
}
print(k > 0 ? t : 0)
