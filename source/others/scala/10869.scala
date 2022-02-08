//브론즈, 그냥 사칙 연산.

object Main {
  def main(args: Array[String]): Unit = {
    var inputs = (scala.io.StdIn.readLine() split " " take 2 map (_.toInt))
    val A = inputs(0)
    val B = inputs(1)
    println(A+B)
    println(A-B)
    println(A*B)
    println(A/B)
    println(A%B)
  }
}