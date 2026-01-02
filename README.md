# Turbo C Interface Simulation

A nostalgic simulation of the classic Turbo C++ IDE interface, built using C. This project replicates the vintage DOS environment, featuring functional menus, window management, and keyboard navigation.

![Turbo C Interface](screenshots/interface_previews/Screenshot%202024-09-18%20153409.png)

## 📖 Overview

This project serves as a tribute to the legendary Turbo C++ compiler environment. It recreates the look and feel of the IDE using standard C graphics and console manipulation functions (`conio.h`, `graphics.h` paradigm). It allows users to explore the simplified menus and experience the retro aesthetic of DOS-based programming tools.

## ✨ Features

*   **Authentic UI**: Replicates the blue-screen BIOS/DOS look.
*   **Menu System**: Fully navigable menus including:
    *   File (New, Open, Save, Quit)
    *   Edit (Undo, Cut, Copy, Paste)
    *   Run (Run, Trace, Step Over)
    *   Compile (Compile, Make, Build)
*   **Window Simulation**: Multi-window layout simulation.
*   **Keyboard Navigation**: support for arrow keys and shortcuts (like `Alt+X` behavior simulated).

## 📂 Project Structure

The project is organized as follows:

```
├── src/
│   ├── main.cpp            # Main source code for the simulation
│   └── utils/
│       └── scanf_test.cpp  # Utility/Test file
├── screenshots/
│   ├── final_output/       # Images of the final running program
│   ├── interface_previews/ # Screenshots of the IDE interface
│   └── process_outputs/    # Output logs and process captures
└── README.md
```

## 🚀 How to Run

This project relies on `conio.h` and DOS-specific console functions, making it best suited for:
1.  **Turbo C++ IDE**: The original environment.
2.  **DOSBox**: For running on modern systems (Windows/Linux/macOS).

### Using Turbo C++
1.  Open Turbo C++.
2.  Open `src/main.cpp`.
3.  Compile (`Alt + F9`) and Run (`Ctrl + F9`).

### Note on Modern Compilers
Modern compilers like GCC (MinGW) or Clang do not natively support the classic `conio.h` functions used here (like `textbackground`, `textcolor`, `window`). To run this on modern systems, you may need a compatibility library or a DOS emulator.

## 🖼️ Gallery

### Interface
![Menu](screenshots/interface_previews/Screenshot%202024-10-01%20174524.png)

### Output
![Output](screenshots/final_output/Screenshot%202024-10-01%20173143.png)

## 📜 License

This project is open source. Feel free to explore and modify!

---
## Author

**Yeshwanth Goud**

*Data Scientist | Full Stack & ML Enthusiast*
