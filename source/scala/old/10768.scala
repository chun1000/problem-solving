//브론즈 스칼라 if문 예제
object Main {
  def main(args: Array[String]): Unit = {
    val m = scala.io.StdIn.readLine().toInt
    val d = scala.io.StdIn.readLine().toInt
    if(m < 2) {
    println("Before")
    }
    else if(m == 2) {
      if(d < 18) {
        println("Before")
      }
      else if(d > 18) {
        println("After")
      }
      else {
        println("Special")
      }
    }
    else {
      println("After")
    }
  }
}