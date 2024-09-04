# General

This is my [custom challenge]
(https://modelephant.medium.com/1-billion-writes-challenge-5f3d39138ee2) to see how fast I can
write the input file for the [1bn rows challenge](https://1brc.dev/#). It's reasonably well
optimized. I put no effort in to optimized random number generation.

# Junk

Current timings:
* HEAD: 10,000,000 rows, ~0.2s total (randomness all gone)
* 00b4bd1346d: 10,000,000 rows, ~0.4s total (Pre-calc string lengths of the place names)
* 00b4bd1346d: 10,000,000 rows, ~0.45s total (remove need for rand in name generation)
* 0580b86688f: 10,000,000 rows, ~0.6s total (switched to lookup for numbers)
* (no commit): 10,000,000 rows, ~0.9s total (switched to managing write buffers myself)
* e38e045c: 10,000,000 rows, ~1.4s total

* Multi thread, write multiple files, concat after. Concat may kill me
* Can mmap actually be faster?
* What if I write a large empty file to being with and have multiple threads write to it?
  * Challenges there are that ensuring that there are no "gaps" where the threads meet in the file without cheating is probably impossible.
* Does random calculation cost anything?
  * YES: It really does. Question is: what are the rules of my challenge? If I accept (slightly) non-uniform dists then I could do allsorts
