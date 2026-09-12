<!-- ============================================================ -->
<!--                         HEADER                                -->
<!-- ============================================================ -->
<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0:1a0000,50:8b0000,100:ff1a1a&height=200&section=header&text=proj1337-42%20—%20All%20Days&fontSize=42&fontColor=ffffff&animation=fadeIn&fontAlignY=38&desc=1337%20Coding%20School%20×%2042%20Network%20—%20Common%20Core%20Piscine&descAlignY=58&descSize=18" width="100%"/>
</p>

<p align="center">
  <img src="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=17&duration=2600&pause=900&color=FF3B3B&center=true&vCenter=true&width=560&height=40&lines=cd+piscine+%26%26+make+re;from+ft_putchar()+to+a+DP+algorithm+solver;99+exercises+%7C+14+modules+%7C+~4.2k+lines+of+C" alt="Typing SVG" />
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C-95.1%25-8b0000?style=for-the-badge&logo=c&logoColor=white" />
  <img src="https://img.shields.io/badge/Makefile-2.8%25-2b2b2b?style=for-the-badge&logo=gnu&logoColor=white" />
  <img src="https://img.shields.io/badge/Shell-1.9%25-2b2b2b?style=for-the-badge&logo=gnu-bash&logoColor=white" />
  <img src="https://img.shields.io/badge/Perl-0.2%25-2b2b2b?style=for-the-badge&logo=perl&logoColor=white" />
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Norminette-passing-8b0000?style=flat-square&labelColor=1a1a1a" />
  <img src="https://img.shields.io/badge/Memory_Leaks-0-8b0000?style=flat-square&labelColor=1a1a1a" />
  <img src="https://img.shields.io/badge/Status-Common_Core_in_progress-8b0000?style=flat-square&labelColor=1a1a1a" />
</p>

<br>

<p align="center">
<i>The piscine doesn't teach C — it teaches you to distrust your own code until you've<br>
proven it. No leaks, no forbidden functions, no norm errors, no "works on my machine."<br>
This is the record of that, day by day.</i>
</p>

<br>

<!-- ============================================================ -->
<!--                    STATS AT A GLANCE                          -->
<!-- ============================================================ -->
<div align="center">

| 🗂️ Modules | 🧩 Exercises & Projects | 🧮 Lines of C | 🏆 Featured Project |
|:---:|:---:|:---:|:---:|
| **14** | **99** | **~4,200** | **BSQ** |

</div>

<br>

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=rect&color=0:1a1a1a,100:8b0000&height=3&width=1000" width="100%"/>
</p>

## 📖 Contents

<table>
<tr>
<td width="50%" valign="top">

- [C00 – C02 · Killing `printf`](#-c00--c02--killing-printf)
- [C03 – C05 · Recursion & backtracking](#-c03--c05--recursion--backtracking)
- [C06 – C08 · Ownership & structures](#-c06--c08--ownership--structures)
- [C09 & C11 · Building my own toolbox](#-c09--c11--building-my-own-toolbox)

</td>
<td width="50%" valign="top">

- [Shell00 – Shell01 · Fighting the shell](#-shell00--shell01--fighting-the-shell)
- [Rush04 · Coding under someone else's eyes](#-rush04--coding-under-someone-elses-eyes)
- [🏆 BSQ · Deep dive](#-bsq--the-project-that-made-me-think-in-algorithms)
- [Build & Run](#️-build--run)

</td>
</tr>
</table>

<br>

---

### 🔴 C00 – C02 · Killing `printf`

<table>
<tr><td width="70%">

`ft_putchar` → `ft_print_comb`/`ft_print_combn` → a full hand-built string library
(`ft_strcpy`, `ft_str_is_*`, `ft_print_memory`).

Everything here goes through raw `write(2)`. No `printf`, no `strlen` from libc — so
every bug is *mine*, never hidden behind someone else's implementation.
`ft_print_memory` in particular forced me to actually see how a pointer's bytes sit in
memory instead of just trusting them.

</td>
<td width="30%" valign="top">

```
9 + 9 + 13 exercises
C00 · C01 · C02
```

</td>
</tr>
</table>

> 💡 **Takeaway** — if I can't rebuild `strcpy` byte-by-byte and defend every edge case
> (empty string, `n == 0`, overlap), I don't understand strings yet — I just use them.

<br>

### 🔴 C03 – C05 · Recursion & backtracking

`ft_atoi`/`ft_atoi_base`, then `C05`'s recursion set: factorial, power, Fibonacci,
`ft_sqrt`, `ft_is_prime` — and the module's centerpiece, **`ft_ten_queens_puzzle`**.

`ft_sqrt` doesn't call a library or use Newton's method — it just tries `i * i` upward
until it matches, and returns `0` for anything that isn't a perfect square. Simple, but
it forces you to think about what "no `math.h`" actually costs you.

The ten-queens solver is backtracking in its purest form:

```c
int ft_can_i_sit(int *bord, int row, int col)
{
    int y = 0;
    while (y < row)
    {
        if (bord[y] == col || ft_abs(bord[y] - col) == ft_abs(y - row))
            return (0);      // same column, or same diagonal — reject
        y++;
    }
    return (1);
}
```

No column array, no diagonal arrays — just comparing `abs(row - other_row)` against
`abs(col - other_col)` to catch diagonal attacks. One board, one check, one recursive
call per row.

> 💡 **Takeaway** — recursion isn't "a function calling itself." It's deciding, at every
> step, exactly what work can be safely thrown away.

<br>

### 🔴 C06 – C08 · Ownership & structures

`ft_sort_params` (sorting `argv` without libc's `qsort`), then `C08`'s custom structs
(`ft_point.h`, `ft_abs.h`) and generic tables passed through `void*`.

This is where "make it work" became "make it reusable." Passing an `ft_point` by
pointer instead of by value was my first real lesson in **ownership** — who allocates,
who frees, who's just borrowing the memory.

<br>

### 🔴 C09 & C11 · Building my own toolbox

`C09` compiles everything into a real **static library** (`libft_creator.sh`, `ar`,
linking). `C11` adds functional-style helpers on top — `ft_foreach`, `ft_map`, `ft_any`,
`ft_count_if`, `ft_is_sort` — every one of them driven by a function pointer.

Using `ft_map` to build `ft_advanced_sort_string_tab` was the moment `qsort`'s comparator
argument stopped being magic syntax and started being an obvious design choice: write
the algorithm once, let the caller define what "correct order" means.

> 💡 **Takeaway** — a function pointer is how you separate *the algorithm* from
> *the decision*.

<br>

### 🔴 Shell00 – Shell01 · Fighting the shell

Permissions, `tar`, SSH key inspection, `git log --format`, process groups, `find`
with exclude patterns, MAC address parsing — and the exercise that actually took an
afternoon: a filename that's a shell-escaping puzzle by design:

```
"\?$*'MaRViN'*$?\"
```

That single filename is the whole point of Shell01 — the shell doesn't care what you
*meant*, only what you *quoted*. Getting it right taught me more about `$IFS`, glob
expansion, and quoting than any tutorial.

> 💡 **Takeaway** — scripting bugs are rarely logic bugs. They're the shell parsing your
> intent differently than you assumed.

<br>

### 🔴 Rush04 · Coding under someone else's eyes

A team project under Rush conditions: shared repo, a deadline that doesn't move, and a
partner whose style isn't mine. The real lesson wasn't the C — it was agreeing on
interfaces *before* writing implementation, so two people's code compiles together on
the first try.

<br>

---

## 🏆 BSQ · The project that made me think in algorithms

<p align="center">
  <img src="https://img.shields.io/badge/Dynamic_Programming-8b0000?style=for-the-badge" />
  <img src="https://img.shields.io/badge/O(rows_×_cols)-2b2b2b?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Perl_Map_Generator-2b2b2b?style=for-the-badge" />
</p>

**The problem:** given a map of empty cells and obstacles, find the largest possible
square that avoids every obstacle, and draw it back into the map.

**Why the obvious solution fails:** trying every square, at every size, from every
position is `O(n⁴)` on an `n × n` map. It's correct. It also won't finish before the
grading deadline on anything but a tiny map.

**What I actually shipped**, across `srcs/`:

| File | Responsibility |
|:---|:---|
| `ft_read_map.c` | Parses the map, validates its shape, rejects malformed input |
| `ft_memory_alloc.c` | Builds and frees the working grid — no leaks |
| `ft_algorithm.c` | The DP solver (below) |
| `ft_tools.c` | Bounds checks, min/max helpers |

The core is nine lines that turn an exponential search into a single pass:

```c
else if (i == 0 || j == 0)
    map_calc[i][j] = 1;
else
    map_calc[i][j] = ft_min(map_calc, i, j) + 1;
```

Each cell stores *the size of the largest square that ends there*. That size is just
`1 + min(up, left, diagonal)` — if a cell can't extend a square from any of its three
neighbors, it can't be more than 1 either. One pass over the grid, and the answer falls
out of the cell with the highest value.

To actually trust the solver, I didn't just run the school's sample maps —
`example/gen_map.pl` and `create_map.sh` generate random maps with configurable size and
obstacle density, so I could throw edge cases at it that I wouldn't have thought to write
by hand: all-obstacle maps, single-row maps, maps with no valid square at all.

```bash
cd BSQ
make
perl example/gen_map.pl 20 20 0.3 > map.txt   # width height obstacle-density
./bsq < map.txt
```

> 💡 **Takeaway** — the difference between a working solution and a good one is usually a
> data-structure insight, not more code. And an algorithm isn't trusted until you've
> tried to break it with data you didn't design by hand.

<br>

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=rect&color=0:1a1a1a,100:8b0000&height=3&width=1000" width="100%"/>
</p>

## ⚙️ Build & Run

```bash
# Most exercises — direct compilation, matching the school's constraints
gcc -Wall -Wextra -Werror ex_file.c -o output && ./output

# Projects with a Makefile — BSQ, C09, C11/ex05
cd <project_folder> && make && ./<binary>
```

<br>

## 🗂️ Repository Map

```
.
├── BSQ/              → largest-square DP solver + map generators
├── C00 → C11/         → Common Core, day by day
├── Rush04/            → team project
└── Shell00, Shell01/  → Unix & scripting piscine
```

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0:ff1a1a,50:8b0000,100:1a0000&height=120&section=footer&text=github.com/Velloxide&fontSize=16&fontColor=ffffff&fontAlignY=75" width="100%"/>
</p>
