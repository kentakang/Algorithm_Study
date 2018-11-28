package boj15953

import java.io.BufferedReader
import java.io.InputStreamReader


fun main(args: Array<String>) {
    val bufferedReader = BufferedReader(InputStreamReader(System.`in`))
    val num = bufferedReader.readLine().toInt()

    for (i in 0 until num) {
        val input = bufferedReader.readLine().split(" ")
        println("${getMoney(1, input[0].toInt()) + getMoney(2, input[1].toInt())}")
    }
}

fun getMoney(festival: Int, ranking: Int):Int = when (festival) {
        1 -> {
            when (ranking) {
                1 -> 5000000
                in 2..3 -> 3000000
                in 4..6 -> 2000000
                in 7..10 -> 500000
                in 11..15 -> 300000
                in 16..21 -> 100000
                else -> 0
            }
        }
        2 -> {
            when (ranking) {
                1 -> 5120000
                in 2..3 -> 2560000
                in 4..7 -> 1280000
                in 8..15 -> 640000
                in 16..31 -> 320000
                else -> 0
            }
        }
        else -> 0
    }
