<!-- ============================================================ -->
<!--                         HEADER                                -->
<!-- ============================================================ -->
<div align="center">

<pre>
  ┌────────────────────────────────────────────┐
  │  velloxide@1337:~/piscine$ cat progress.log │
  │  > C00 → C11 ......... cleared               │
  │  > Shell00 → Shell01 . cleared               │
  │  > Rush04 ............ cleared               │
  │  > BSQ ............... cleared               │
  └────────────────────────────────────────────┘
</pre>

# proj1337-42 — All Days

**1337 Coding School × 42 Network — Common Core Piscine**

![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=black)
![Shell](https://img.shields.io/badge/Shell-4EAA25?style=flat-square&logo=gnu-bash&logoColor=white)
![Perl](https://img.shields.io/badge/Perl-39457E?style=flat-square&logo=perl&logoColor=white)
![Norm](https://img.shields.io/badge/Norminette-passing-success?style=flat-square)

</div>

<br>

Every folder in this repo is a checkpoint, not a checkbox. The piscine doesn't teach C —
it teaches you to distrust your own code until you've proven it: no leaks, no forbidden
functions, no norm errors, no "it works on my machine." What follows is a walk through
each stage and, more importantly, **what it actually changed in how I write code.**

<br>

## 📖 Contents

- [C00 – C02 · Learning to distrust `stdio`](#c00--c02--learning-to-distrust-stdio)
- [C03 – C05 · Strings, recursion, and off-by-one paranoia](#c03--c05--strings-recursion-and-off-by-one-paranoia)
- [C06 – C08 · From arguments to real data structures](#c06--c08--from-arguments-to-real-data-structures)
- [C09 & C11 · Building my own toolbox](#c09--c11--building-my-own-toolbox)
- [Shell00 – Shell01 · The Unix layer nobody teaches you](#shell00--shell01--the-unix-layer-nobody-teaches-you)
- [Rush04 · Writing C with someone else reading over your shoulder](#rush04--writing-c-with-someone-else-reading-over-your-shoulder)
- [BSQ · The project that made me actually think in algorithms](#bsq--the-project-that-made-me-actually-think-in-algorithms)
- [Build & Run](#️-build--run)
- [Repository Map](#-repository-map)

<br>

---

## C00 – C02 · Learning to distrust `stdio`

`ft_putchar`, `ft_print_alphabet`, `ft_print_comb`/`ft_print_combn`, then a full
hand-built string library (`ft_strcpy`, `ft_str_is_*`, `ft_print_memory`...).

This is where `printf` stops existing. Everything goes through `write(2)`, so every bug
is a bug in *my* logic, not a library hiding it from me. `ft_print_memory` in particular
forced me to actually understand how a pointer's bytes are laid out — not just use them.

> **Takeaway:** if I can't rebuild `strcpy` byte-by-byte and explain every edge case
> (empty string, `n == 0`, overlapping memory), I don't actually understand strings yet.

<br>

## C03 – C05 · Strings, recursion, and off-by-one paranoia

`ft_strlcat`, `ft_atoi`/`ft_atoi_base`, then recursion in `C05` — factorial, power,
Fibonacci, and the classic **`ft_ten_queens_puzzle`**.

`ft_atoi` looks trivial until you handle `INT_MIN`, leading whitespace, and multiple
signs correctly — that's where I learned to write test cases *before* trusting my own
code. The ten-queens puzzle was the first time backtracking clicked for me: instead of
brute-forcing every permutation, I prune a branch the moment a queen threatens another.

> **Takeaway:** recursion isn't "a function calling itself" — it's deciding, at every
> step, what work can be safely thrown away.

<br>

## C06 – C08 · From arguments to real data structures

`ft_sort_params` (sorting `argv` without touching libc's sort), then `C08`'s custom
structures (`ft_point.h`, `ft_abs.h`) and generic tables via `void*`.

This block is where "make it work" turned into "make it reusable." Writing my own
`ft_point` struct and passing it around by pointer instead of by value was the first
real lesson in **ownership** — who allocates, who frees, who's just borrowing.

<br>

## C09 & C11 · Building my own toolbox

`C09` compiles everything so far into an actual **static library** (`libft_creator.sh`,
`ar`, linking). `C11` layers functional-style helpers on top: `ft_foreach`, `ft_map`,
`ft_any`, `ft_count_if`, `ft_is_sort` — all driven by function pointers.

Writing `ft_map` and then using it to implement `ft_advanced_sort_string_tab` was the
moment I understood *why* `qsort` takes a comparator argument instead of hard-coding
`<`. It's the same idea C++ templates and Python's `key=` argument solve differently.

> **Takeaway:** a function pointer isn't a syntax trick — it's how you write an
> algorithm once and let the caller decide what "correct order" means.

<br>

## Shell00 – Shell01 · The Unix layer nobody teaches you

Permissions, `tar` archives, SSH key inspection, `git log --format`, process groups,
`find` with exclude patterns, MAC address parsing, and — the exercise that broke me for
an afternoon — a filename that is itself a shell-escaping puzzle
(`"\?$*'MaRViN'*$?\"`).

That last one is the whole point of Shell01: the shell doesn't care what you *meant*,
only what you *quoted*. Debugging it taught me more about `$IFS`, glob expansion, and
quoting rules than any tutorial did.

> **Takeaway:** scripting bugs are rarely about logic — they're about the shell parsing
> your intent differently than you assumed.

<br>

## Rush04 · Writing C with someone else reading over your shoulder

A team project under Rush conditions: shared repo, a deadline that doesn't move, and a
partner whose code style is not mine. The technical part (`rush04.c`, `ft_putchar.c`,
`main.c`) mattered less than the discipline it forced: agreeing on interfaces *before*
writing implementation, so two people's code compiles together on the first try.

<br>

## BSQ · The project that made me actually think in algorithms

**The problem:** given a map of empty cells (`.`) and obstacles (`o`), find the largest
possible square that fits without covering an obstacle, and draw it.

**Why it's hard:** the naive approach — try every possible square, every possible size —
is `O(n⁴)` or worse on a large map. It technically works, and it will still be running
by the time the norm-check deadline passes.

**What I actually built**, spread across `srcs/`:

| File | Responsibility |
|:---|:---|
| `ft_read_map.c` | Parses the map, validates its shape, rejects malformed input |
| `ft_memory_alloc.c` | Builds and frees the working grid without leaking |
| `ft_algorithm.c` | The core solver |
| `ft_tools.c` | Small shared helpers (bounds checks, min/max) |

The solver uses the standard **dynamic-programming trick for largest-square-in-a-binary-
matrix**: for each cell, the size of the largest square that can have that cell as its
bottom-right corner is `1 + min(up, left, up-left)` — if the cell itself is free. That
turns an exponential search into a single pass over the grid.

To actually trust it, I didn't just test the school's sample maps — `example/gen_map.pl`
and `create_map.sh` generate random maps of arbitrary size and obstacle density, so I
could stress-test the algorithm against edge cases I wouldn't have thought to write by
hand (all-obstacle maps, single-row maps, maps with no valid square at all).

> **Takeaway:** the difference between a working solution and a good one is usually a
> data-structure insight, not more code. And you don't trust an algorithm until you've
> tried to break it with data you didn't design by hand.

<br>

---

## ⚙️ Build & Run

Most exercises compile directly, matching the school's constraints:

```bash
gcc -Wall -Wextra -Werror ex_file.c -o output
./output
```

Projects with a `Makefile` (BSQ, C09, C11/ex05):

```bash
cd <project_folder>
make
./<binary>
```

BSQ, with a generated test map:

```bash
cd BSQ
make
perl example/gen_map.pl 20 20 0.3 > map.txt   # width height obstacle-density
./bsq < map.txt
```

<br>

## 🗂️ Repository Map

```
.
├── BSQ/              → largest-square solver + map generators
├── C00 → C11/         → Common Core, day by day
├── Rush04/            → team project
└── Shell00, Shell01/  → Unix & scripting piscine
```

<br>

<div align="center">
<sub>Part of my 1337 / 42 Network journey — <a href="https://github.com/Velloxide">@Velloxide</a></sub>
</div>
