//Bronze 문제.

object Main {
  def main(args: Array[String]): Unit = {
    var inputs = (scala.io.StdIn.readLine() split " " take 1 map (_.toInt))
    for (i <- 1 to inputs(0)) {
      println(i)
    }
  }
}
