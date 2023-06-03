
# Twin Primes Counter using AKS Primality Test

This program counts the number of twin primes within a given range using the AKS primality test algorithm. Twin primes are pairs of prime numbers that differ by 2, such as (3, 5), (11, 13), and (17, 19).

The AKS primality test is a highly complex algorithm developed by Agrawal, Kayal, and Saxena, which determines if a number is prime in polynomial time. It involves advanced mathematical concepts and efficient algorithms for modular exponentiation and polynomial arithmetic.

## Prerequisites

To run this program, you need:

- C compiler (such as GCC) installed on your system.

## Usage

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/twin-primes-aks.git
   ```

2. Compile the C program:

   ```bash
   gcc -o twinprimes twinprimes.c
   ```

3. Run the program:

   ```bash
   ./twinprimes
   ```

4. Enter the range when prompted:

   ```
   Enter the range (start end): 1 100
   ```

   This will count and display the twin primes within the specified range.

## How It Works

1. The program prompts the user to enter a range (start and end values).

2. The AKS primality test algorithm is used to determine if each number within the range is prime.

3. For each prime number found, the program checks if its successor is also prime, indicating a twin prime pair.

4. The twin primes are counted and displayed on the console.

## Limitations

- The AKS primality test is a highly complex algorithm. This implementation is a simplified version and does not cover the full AKS algorithm.

- The AKS primality test has significant computational overhead and may not be efficient for large numbers or large ranges.

- This implementation may not provide optimal performance or handle very large ranges effectively.

## Further Improvements

- Implement more efficient algorithms for modular exponentiation and polynomial arithmetic to enhance the AKS primality test.

- Optimize the twin primes counting algorithm for improved performance.

- Add support for parallel processing to speed up the calculations for large ranges.

## License

This project is licensed under the [MIT License](LICENSE).

