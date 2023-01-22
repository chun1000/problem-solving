/*
scala의 내림차 for문.
by를 쓸 수도 있지만 for(i <- (0 to 10).reverse) 도 가능.
 */

object Main {
  def main(args: Array[String]): Unit = {
    val input = scala.io.StdIn.readLine().toInt

    for(i <- input to 1 by -1) {
      println(i)
    }

  }
}