let t = Int(readLine()!)!
var h = 0, w = 0
var m = [[Character]](), c = 0

func spr(_ y:Int,_ x:Int){
  if (m[y][x] == "#"){
    m[y][x] = "."
    if (y < h-1){
      spr(y+1, x)
    }
    if (x < w-1){
      spr(y, x+1)
    }
    if (y > 0){
      spr(y-1, x)
    }
    if (x > 0){
      spr(y, x-1)
    }
  }
}

for _ in 1...t{
  var a = readLine()!.split(separator:" ").map{Int($0)!}
  h = a[0]
  w = a[1]
  m = [[Character]]()
  c = 0
  
  for _ in 0...h-1{
    m.append(Array(readLine()!))
  }
  for i in 0...h-1{
    for j in 0...w-1{
      if (m[i][j] == "#"){
        spr(i, j)
        c += 1
      }
    }
  }
  print(c)
}