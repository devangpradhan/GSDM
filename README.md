
# 📐 Project Title: PaperFold

**Tagline:** *An Open-Source, Cross-Platform 3D Parametric Origami & Computational Folding Engine*

---

### 📝 1. Project Overview (Short Summary)

**PaperFold** ek high-performance, open-source 3D CAD software aur computational geometry engine hai, jise parametric origami patterns ko design, simulate aur digital fabrication (3D printing & laser cutting) ke liye prepare karne ke liye banaya gaya hai.

Yeh software traditional 2D paper crease patterns (Mountain & Valley folds) aur 3D physical folding mechanisms ke beech ki gap ko fill karta hai. **C++20**, **Qt 6**, **OpenGL 3.3+**, aur **CGAL Geometry Kernel** par aadharit, PaperFold real-time isometric (non-stretch) folding kinematics, interactive 3D rendering, aur automated mesh generation provide karta hai.

---

### ❓ 2. Problem Statement

Computational origami, architectural origami structures, aur deployable space structures design karte waqt engineers aur artists ko 2 main problems aati hain:

1. **Lack of Dedicated CAD Tools:** Standard CAD software (SolidWorks, AutoCAD) rigid folding mesh kinematics ko natively handle nahi karte.
2. **Heavy Proprietary Alternatives:** Commercial tools bohot expensive hote hain aur unme computational crease math customizability limit hoti hai.

**PaperFold** ek free, open-source, lightweight, aur developer-friendly solution deta hai jisme user sliders aur parameters se real-time me folding simulation control kar sakta hai.

---

### ⚙️ 3. Key Technical Features

* 🪶 **Parametric Crease Pattern Generators:** Miura-Ori, Yoshimura, Waterbomb, aur custom origami tessellations ka automated mesh generation.
* 🔄 **Real-Time 3D Folding Kinematics:** Rigid origami mesh simulation jo real-time fold angles aur isometric (non-stretch paper) constraints calculate karti hai.
* 🖥️ **Interactive Qt 6 + OpenGL Viewport:** Hardware-accelerated 3D canvas jisme orbital camera controls (pan, orbit, zoom), color-coded crease styling (Mountain = Red, Valley = Blue), aur dark CAD UI docking panels hain.
* 🖨️ **Digital Fabrication Readiness (Export Pipelines):**
* **3D Printing Export (`.STL`, `.OBJ`):** Manifold mesh validation aur thickness shell generation.
* **2D Vector Export (`.DXF`, `.SVG`):** Laser cutters aur pen plotters ke liye unfolded crease patterns.


* 🌐 **Cross-Platform Compatibility:** Pure CMake build system jo Windows (MSVC 2022), macOS, Linux, aur WebAssembly (Browser via Emscripten) par support deta hai.

---

### 🛠️ 4. Tech Stack & Architecture

* **Primary Language:** C++20 (MSVC Compiler / Visual Studio 2022)
* **GUI Framework:** Qt 6 (LGPL v3 Open Source) — `QtWidgets` & `QDockWidget`
* **3D Graphics Engine:** OpenGL 3.3 Core Profile via Qt's `QOpenGLWidget`
* **Build Driver & Tools:** CMake 3.20+, Ninja, Git, Visual Studio 2022
* **Computational Math Kernel:** CGAL / Eigen (Vector Math, Quaternions, Polyhedral Mesh Booleans)

---

### 🎯 5. Use Cases & Applications

1. **Origami Artists & Designers:** Complex 3D paper models and tessellations design karne ke liye.
2. **Architecture & Engineering:** Deployable structures, kinetic facades, aur foldable solar arrays ke design ke liye.
3. **Robotics & Materials Science:** Metamaterials aur soft robotics kinematics simulation.
4. **Digital Fabrication & Prototyping:** Laser cutting (.DXF) aur 3D printing (.STL) pattern production.

---
