//브론즈

object Main {
  def main(args: Array[String]): Unit = {
    var inputs = (scala.io.StdIn.readLine() split " " take 1 map (_.toInt))
    val n = inputs(0)

    var ans = 0
    for(i <- 1 to n) {
      ans += i
    }
    println(ans)
  }
}