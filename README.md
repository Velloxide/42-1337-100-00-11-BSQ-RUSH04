<!-- ============================================================ -->
<!--                         HEADER                                -->
<!-- ============================================================ -->
<div align="center">

<img src="https://raw.githubusercontent.com/Velloxide/Velloxide/main/velloxide-terminal-banner.svg" alt="Velloxide terminal banner" width="100%">

# 🩸 proj1337-42 — All Days
### 1337 Coding School × 42 Network — Common Core Piscine

<i>A full, day-by-day trace of the Common Core: from `ft_putchar` to sorting algorithms,<br>
from raw Shell to a from-scratch BSQ solver.</i>

<img src="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=500&size=15&duration=2800&pause=700&color=FF0000&center=true&vCenter=true&width=460&height=45&lines=root%40velloxide%3A~%24+ls+piscine%2F;C00+...+C11+%7C+Shell00+%7C+Shell01+%7C+BSQ+%7C+Rush04;root%40velloxide%3A~%24+make+re" alt="Typing SVG" />

<br>

![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=black)
![Shell](https://img.shields.io/badge/Shell-4EAA25?style=flat-square&logo=gnu-bash&logoColor=white)
![Perl](https://img.shields.io/badge/Perl-39457E?style=flat-square&logo=perl&logoColor=white)
![Makefile](https://img.shields.io/badge/Makefile-427819?style=flat-square&logo=gnu&logoColor=white)
![42](https://img.shields.io/badge/42_Network-000000?style=flat-square&logo=42&logoColor=white)
![Norm](https://img.shields.io/badge/Norminette-passing-success?style=flat-square)

</div>

<br>

<!-- ============================================================ -->
<!--                      ABOUT THE PROJECT                        -->
<!-- ============================================================ -->
## 🎯 About

This repository is my complete run through the **1337 / 42 Network Common Core Piscine** —
the intensive, peer-reviewed C curriculum every student goes through before touching the
main branch of the school. Every folder here is a real exercise, written under real
constraints: **no forbidden functions, no memory leaks, no norm errors.**

It exists for one reason: to make it easy for anyone — a recruiter, a fellow student, a
future employer — to see exactly how the fundamentals were built, one `ft_` function at a
time.

```c
const mission = {
    school:        "1337 Coding School (42 Network) — Khouribga",
    track:         "Common Core",
    language:      "C",
    constraints:   ["-Wall -Wextra -Werror", "Norminette", "No memory leaks"],
    scope:         "C00 → C11, Shell00-01, BSQ, Rush04",
    status:        "In progress 🚧",
};
```

<br>

<!-- ============================================================ -->
<!--                    TABLE OF CONTENTS                          -->
<!-- ============================================================ -->
## 📖 Table of Contents

- [Roadmap](#-roadmap)
- [Project Breakdown](#-project-breakdown)
- [BSQ — Featured Project](#-bsq--featured-project)
- [Repository Structure](#-repository-structure)
- [Skills Demonstrated](#-skills-demonstrated)
- [Build & Run](#-build--run)
- [About Me](#-about-me)

<br>

<!-- ============================================================ -->
<!--                         ROADMAP                                -->
<!-- ============================================================ -->
## 🗺️ Roadmap

<div align="center">

| Stage | Focus | Status |
|:---|:---|:---:|
| **C00 → C02** | Basics — I/O, loops, strings, arrays | ✅ |
| **C03 → C05** | String manipulation, recursion, algorithms | ✅ |
| **C06 → C08** | `argv`/`argc`, generic pointers, structures | ✅ |
| **C09 → C11** | Static libraries, `libft`, function pointers | ✅ |
| **Shell00 / Shell01** | Unix, permissions, Git, scripting tricks | ✅ |
| **Rush04** | Team project — collaborative C | ✅ |
| **BSQ** | Algorithmic project — biggest square solver | ✅ |

</div>

<br>

<!-- ============================================================ -->
<!--                    PROJECT BREAKDOWN                          -->
<!-- ============================================================ -->
## 📂 Project Breakdown

<details open>
<summary><b>🔹 C Piscine — C00 to C11</b></summary>
<br>

| Module | Theme | Key Exercises |
|:---:|:---|:---|
| **C00** | First contact with C | `ft_putchar`, `ft_print_alphabet`, `ft_print_comb(n)` |
| **C01** | Pointers & basic algorithms | `ft_swap`, `ft_div_mod`, `ft_sort_int_tab` |
| **C02** | String handling from scratch | `ft_strcpy`, `ft_str_is_*`, `ft_print_memory` |
| **C03** | String comparison & concatenation | `ft_strcmp`, `ft_strstr`, `ft_strlcat` |
| **C04** | Numeric conversion | `ft_atoi`, `ft_putnbr_base`, `ft_atoi_base` |
| **C05** | Recursion & math | `ft_recursive_factorial`, `ft_sqrt`, `ft_ten_queens_puzzle` |
| **C06** | Program arguments | `ft_print_params`, `ft_rev_params`, `ft_sort_params` |
| **C07** | Dynamic memory | `ft_strdup`, `ft_range`, `ft_split` |
| **C08** | Structures & headers | `ft_point.h`, `ft_show_tab`, `ft_strs_to_tab` |
| **C09** | Building `libft` | Static library, `libft_creator.sh` |
| **C11** | Function pointers | `ft_foreach`, `ft_map`, `ft_any`, `ft_is_sort` |

</details>

<details>
<summary><b>🔹 Shell Piscine — Shell00 & Shell01</b></summary>
<br>

| Module | Theme | Key Exercises |
|:---:|:---|:---|
| **Shell00** | Unix fundamentals | Permissions, `tar`, SSH keys, Git basics |
| **Shell01** | Advanced scripting | Process groups, `find`, MAC address parsing, obfuscated filenames |

</details>

<details>
<summary><b>🔹 Rush04 — Team Project</b></summary>
<br>

A collaborative C project built under Rush conditions — shared codebase, strict deadlines,
peer coordination.

</details>

<br>

<!-- ============================================================ -->
<!--                    BSQ — FEATURED PROJECT                     -->
<!-- ============================================================ -->
## 🏆 BSQ — Featured Project

<table width="100%">
<tr>
<td width="65%" valign="top">

**BSQ (Biggest Square)** is the algorithmic capstone of the piscine: given a map of empty
and obstacle cells, find and draw the **largest possible square** that fits without
overlapping an obstacle.

```c
const bsq = {
    goal:        "Find the largest square in a map",
    input:       "Text map via file or stdin",
    output:      "Map with the biggest square drawn in it",
    constraints: ["O(n) preferred", "No forbidden functions", "Handle malformed maps"],
};
```

**Structure:**
```
BSQ/
├── srcs/           → ft_algorithm.c, ft_read_map.c, ft_memory_alloc.c, ft_tools.c
├── includes/        → ft_bsq.h
├── example/         → gen_map.pl, create_map.sh   (map generators for testing)
└── Makefile
```

</td>
<td width="35%" valign="top" align="center">

```bash
$ make
$ ./bsq < map.txt
```

*Dynamic-programming style algorithm to compute the largest square in linear-ish time,
paired with Perl/Shell tooling to generate stress-test maps.*

</td>
</tr>
</table>

<br>

<!-- ============================================================ -->
<!--                  REPOSITORY STRUCTURE                         -->
<!-- ============================================================ -->
## 🗂️ Repository Structure

```
.
├── BSQ/            → Biggest-square algorithmic project
├── C00 → C11/       → Common Core exercises, day by day
├── Rush04/          → Team project
├── Shell00 / Shell01/ → Unix & scripting piscine
└── README.md
```

<br>

<!-- ============================================================ -->
<!--                   SKILLS DEMONSTRATED                         -->
<!-- ============================================================ -->
## 🧠 Skills Demonstrated

<div align="center">

![Memory Management](https://img.shields.io/badge/Memory_Management-red?style=for-the-badge)
![Recursion](https://img.shields.io/badge/Recursion-red?style=for-the-badge)
![Algorithms](https://img.shields.io/badge/Algorithms-red?style=for-the-badge)
![Pointers](https://img.shields.io/badge/Pointers_%26_Structs-red?style=for-the-badge)
![Shell_Scripting](https://img.shields.io/badge/Shell_Scripting-red?style=for-the-badge)
![Static_Libraries](https://img.shields.io/badge/Static_Libraries-red?style=for-the-badge)
![Norminette](https://img.shields.io/badge/Norminette_Compliant-red?style=for-the-badge)

</div>

<br>

<!-- ============================================================ -->
<!--                    BUILD & RUN                                 -->
<!-- ============================================================ -->
## ⚙️ Build & Run

Every C exercise compiles the same way, respecting the school's norm:

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

<br>

<!-- ============================================================ -->
<!--                       ABOUT ME                                 -->
<!-- ============================================================ -->
## 👤 About Me

<table width="100%">
<tr>
<td width="58%" valign="top">

```c
const itachi = {
    username:        "said boutayeb",
    location:        "Morocco 🇲🇦",
    role:            "Exploit Developer | Binary Exploitation (Pwn)",
    education:       "1337 Coding School | 42 Network",
    currentFocus:    "Memory Corruption & Reverse Engineering",
    activeMission:   "42 Network | Common Core in progress",
    favorite_quote:  "Reality is a well-coded genjutsu. ( ͡° ͜ʖ ͡°)"
};
```

</td>
<td width="42%" valign="top" align="center">

<img src="https://media.tenor.com/TwXyz8OMEsEAAAAM/itachi-uchiha-uchiha.gif" width="220" alt="Coding Animation"/>

</td>
</tr>
</table>

<p align="center">
  <a href="https://github.com/Velloxide"><img src="https://img.shields.io/badge/GitHub-Velloxide-red?style=flat-square&logo=github" /></a>
  <a href="https://grademe.fr/app/user/0bff3b0b-dcfb-4d25-8ec0-05ffa7b3115d"><img src="https://img.shields.io/badge/GradeMe-@velloxide-red?style=flat-square" /></a>
</p>

<br>

<div align="center">
<sub>root@velloxide:~$ echo "$(cat mission.txt)" — <i>Common Core in progress.</i></sub>
</div>

</div>
