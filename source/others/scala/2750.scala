//브론즈, mutable 활용 및 스칼라로 sort 하는 방식.
//스칼라의 리스트는 자바와 달리 변경 불가능하다.
import scala.collection.mutable

object Main {
  def main(args: Array[String]): Unit = {
    val N = scala.io.StdIn.readLine().toInt
    val nums = mutable.ListBuffer[Int]()
    for(i <- 1 to N) {
      var input = scala.io.StdIn.readLine().toInt
      nums += input
    }

    val sortedNums = nums.toList.sorted

    for(item <- sortedNums) println(item)
  }
}