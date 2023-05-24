use std::io;

fn main() {
    let mut first_line = String::new();
    let mut second_line = String::new();

    io::stdin().read_line(&mut first_line).expect("Failed to readline");
    io::stdin().read_line(&mut second_line).expect("Failed to readline");

    let n: i32 = first_line.trim().parse().expect("Failed to parse");
    let divisors = second_line.split_whitespace().map(|i| i.trim().parse().expect("Failed to parse")).collect::<Vec<i32>>();
    let min = divisors.iter().min().expect("Error");
    let max = divisors.iter().max().expect("Error");

    println!("{}", min * max);
}
