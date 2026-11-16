# Cub3D

## Description

Cub3D is a 3D game engine project inspired by the classic Wolfenstein 3D, implemented in C using raycasting techniques. This project demonstrates advanced graphics programming, algorithm implementation, and game development skills. It features both a mandatory version and an enhanced bonus version with additional features like doors, minimaps, and animations.

The project was developed as part of the 42 curriculum, showcasing proficiency in low-level programming, memory management, and real-time rendering.

## Features

### Mandatory Version
- **Raycasting Engine**: Implements DDA (Digital Differential Analyzer) algorithm for 3D rendering
- **Texture Mapping**: Supports 4 wall textures (North, South, East, West)
- **Player Movement**: WASD controls for movement, arrow keys for rotation
- **Map Parsing**: Reads and validates custom .cub map 
- **Collision Detection**: Prevents walking through walls
- **Floor/Ceiling Coloring**: Configurable RGB colors for environment

### Bonus Version
- **Interactive Doors**: Open/close doors with 'F' key
- **Minimap**: Real-time minimap display in the corner
- **Animated Textures**: Torch animations and dynamic lighting effects
- **Mouse Controls**: Mouse movement for camera rotation
- **Enhanced Graphics**: 45 textures total with animations

## Technologies Used

- **Language**: C
- **Graphics Library**: MiniLibX (custom graphics library for X11)
- **Utility Library**: libft (custom C standard library implementation)
- **Build System**: Makefile
- **Platform**: Linux (X11)

## Prerequisites

- Linux operating system
- X11 development libraries
- GCC compiler
- Make

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/cub3d.git
   cd cub3d
   ```

2. Build the mandatory version:
   ```bash
   make
   ```

3. Or build the bonus version:
   ```bash
   make bonus
   ```

## Usage

### Mandatory Version
```bash
./cub3D maps/[desired_map].cub
```

### Bonus Version
```bash
./cub3D_bonus maps/[desired_map].cub
```

### Controls

#### Mandatory
- **WASD**: Move forward/backward, strafe left/right
- **Arrow Keys**: Rotate left/right
- **ESC**: Exit game

#### Bonus
- **WASD**: Move forward/backward, strafe left/right
- **Arrow Keys**: Rotate left/right
- **F**: Open/close doors
- **Mouse**: Look around (camera rotation)
- **ESC**: Exit game

## Key Algorithms & Concepts

- **Raycasting**: Core 3D rendering technique
- **DDA Algorithm**: Efficient line intersection calculation
- **Texture Mapping**: UV coordinate calculation and bilinear interpolation
- **Bresenham's Line Algorithm**: Drawing optimizations
- **Linked List Management**: For map parsing and data structures
- **Event-Driven Programming**: X11 event handling

## Learning Outcomes

This project demonstrates:
- Advanced C programming with pointers and memory management
- Mathematical concepts (vectors, trigonometry, linear algebra)
- Graphics programming and real-time rendering
- Algorithm optimization for performance
- Cross-platform development considerations
- Code organization and modular design