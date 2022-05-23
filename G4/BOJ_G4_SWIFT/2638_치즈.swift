var s = readLine()!.split(separator:" ").map{Int($0)!}
var h = s[0], w = s[1]
var m = [[Int]](), t = 0
var a = [[Int]]()

for _ in 1...h{
  m.append(readLine()!.split(separator:" ").map{Int($0)!})
}

func spr(_ y:Int,_ x:Int){
  if (m[y][x] == 2){
    if (y > 0){
      if (m[y-1][x] == 0){
        m[y-1][x] = 2
        spr(y-1, x)
      }
    }
    if (x > 0){
      if (m[y][x-1] == 0){
        m[y][x-1] = 2
        spr(y, x-1)
      }
    }
    if (y < h-1){
      if (m[y+1][x] == 0){
        m[y+1][x] = 2
        spr(y+1, x)
      }
    }
    if (x < w-1){
      if (m[y][x+1] == 0){
        m[y][x+1] = 2
        spr(y, x+1)
      }
    }
  }
}

func chk()->Bool{
  for y in m{
    for x in y{
      if (x == 1){
        return true
      }
    }
  }
  return false
}

func del(_ y:Int,_ x:Int){
  var c = 0
  if (y > 0){
    if (m[y-1][x] == 2){
      c += 1
    }
  }
  if (x > 0){
    if (m[y][x-1] == 2){
      c += 1
    }
  }
  if (y < h-1){
    if (m[y+1][x] == 2){
      c += 1
    }
  }
  if (x < w-1){
    if (m[y][x+1] == 2){
      c += 1
    }
  }
  if (c >= 2){
    a[y][x] = 2
  }
}

while(chk()){
  m[0][0] = 2
  for i in 0...h-1{
    for j in 0...w-1{
      spr(i, j)
    }
  }
  a = m
  for i in 0...h-1{
    for j in 0...w-1{
      if (a[i][j] == 1){
        del(i, j)
      }
    }
  }
  m = a
  t += 1
}

print(t)