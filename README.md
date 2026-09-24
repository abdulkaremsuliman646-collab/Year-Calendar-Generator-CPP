# 📅 Full-Year Calendar Generator (C++)

A high-performance, modular C++ application engineered to compute and render a structured 12-month calendar directly in the console for any given Gregorian year.

## 🚀 Key Architectural & Algorithmic Concepts
- **Automated 12-Month Iteration Engine:** Loops through the complete yearly sequence, dynamically deriving calendar properties for each month without hardcoding dates.
- **Gregorian Congruence Arithmetic:** Accurately computes day-of-week starting offsets ($0–6$) for the 1st of every month in $O(1)$ time complexity.
- **Dynamic Leap Year Resolution:** Accurately evaluates 400-year and 100-year century exceptions to assign dynamic February boundaries (28 vs 29 days).
- **Fixed-Width Column Specifiers:** Uses `%5d` formatting to ensure absolute vertical alignment between weekdays and day numbers regardless of single or double digits.
- **State-Tracking Grid Offsets:** Tracks horizontal space distribution and handles seamless carriage returns upon completing the 7-day weekly cycle.

## 🛠️ Tech Stack
- **Language:** C++
- **Paradigms:** Procedural / Modular Programming, Algorithmic Formatting
