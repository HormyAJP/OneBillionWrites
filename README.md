# Ideas for improvement

Current timings:
* e38e045c: 10,000,000 rows, ~1.4s total



* Smarter writing of the numbers.
* Avoid copy of the place names into the buffer? Just write them directly?
* Multi thread, write multiple files, concat after. Concat may kill me
* How is fwrite being affected by \n? Is it buffering well?
* What if I pass a bigger buffer to fwrite with more data?
* What if I write binary?
* Are there faster methods than fwrite?
* Can mmap actually be faster?
* What if I write a large empty file to being with and have multiple threads write to it?
  * Challenges there are that ensuring that there are no "gaps" where the threads meet in the file without cheating is probably impossible.
* Does random calculation cost anything?
