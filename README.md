<div id="top"></div>




<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![CMake][status-shield]][status-url]



<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/DmitrTRC/LevelUP_C_PartI.git">
    <img src="Images/logo.png" alt="Logo" width="128" height="128">
  </a>

<h3 align="center">LevelUP C/C++ Course Part I</h3>

  <p align="center">
    About the project:
    <br />
    <a href="https://github.com/DmitrTRC/LevelUP_C_PartI.git"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/DmitrTRC/LevelUP_C_PartI.git">View Demo</a>
    ·
    <a href="https://github.com/DmitrTRC/LevelUP_C_PartI.git/issues">Report Bug</a>
    ·
    <a href="https://github.com/DmitrTRC/LevelUP_C_PartI.git/issues">Request Feature</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->

## About The Project

[![Product Name Screen Shot][product-screenshot]](https://https://levelp.ru)
This is a project for the [LevelUP](https://levelp.ru/courses/programmirovanie/fundamentals-of-programming-c-level-1/)
course.
Contains the following:

* CMakeLists.txt : CMake configuration file
* README.md : project description
* LICENSE.md : project license
* src/ : source code directory  ( contains sub-folders with HW and code )
* doc/ : documentation directory ( contains sub-folders with documentation )
* .github : GitHub repository settings CI/CD workflow.

<p align="right">(<a href="#top">back to top</a>)</p>

### Built With

* [Clang](https://clang.llvm.org/)
* [Git](https://git-scm.com/)
* [CMake](https://cmake.org/)

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- GETTING STARTED -->

## Getting Started

Be sure to have the following installed:

C Compiler, C++ Compiler, CMake, Git.

### Prerequisites

* Clang, GCC, or another C compiler
* Git
* CMake

### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/DmitrTRC/LevelUP_C_PartI.git
   ```

1.a. Change CMakeLists.txt add_executable(....) corresponding to Task name

   ```sh
   cd LevelUP_C_PartI
   vim CMakeLists.txt
   ```

2. Create a build directory
   ```sh
   mkdir build
   ```
3. Run CMake
   ```sh
   cmake -H. -Bbuild
   ```
4. Build the project
   ```sh
   cd build
   make
   ```

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->

## Usage

Used in the educational process
Select the task you want to solve and rebuild the project.

_For more examples, please refer to the [Documentation](https://example.com)_

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- ROADMAP -->

## Roadmap

- [ ] Base Structure implementation
- [ ] CI/CD implementation
    - [ ] Github Actions
    - [ ] Docker

See the [open issues](https://github.com/DmitrTRC/LevelUP_C_PartI/issues) for a full list of proposed features (and
known issues)
.

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTRIBUTING -->

## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any
contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also
simply open an issue with the tag "enhancement". Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- LICENSE -->

## License

Distributed under the MIT License. See `LICENSE` for more information.

<p align="right">(<a href="#top">back to top</a>)</p> 



<!-- CONTACT -->

## Contact

Your Name - [DmitrTRC](https://twitter.com/twitter_handle) - morozovd@me.com, 9984398@gmail.com

Project Link: [https://github.com/DmitrTRC/LevelUP_C_PartI.git](https://github.com/DmitrTRC/ARS_CW.git)

<p align="right">(<a href="#top">back to top</a>)</p>






<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[contributors-shield]: https://img.shields.io/github/contributors/DmitrTRC/LevelUP_C_PartI.svg?style=for-the-badge

[contributors-url]: https://github.com/DmitrTRC/LevelUP_C_PartI/graphs/contributors

[forks-shield]: https://img.shields.io/github/forks/DmitrTRC/LevelUP_C_PartI?style=for-the-badge

[forks-url]: https://github.com/github_username/LevelUP_C_PartI/network/members

[stars-shield]: https://img.shields.io/github/stars/DmitrTRC/LevelUP_C_PartI.svg?style=for-the-badge

[stars-url]: https://github.com/DmitrTRC/LevelUP_C_PartI/stargazers

[issues-shield]: https://img.shields.io/github/issues/DmitrTRC/LevelUP_C_PartI?style=for-the-badge

[issues-url]: https://github.com/DmitrTRC/LevelUP_C_PartI/issues

[license-shield]: https://img.shields.io/github/license/DmitrTRC/LevelUP_C_PartI?style=for-the-badge

[license-url]: https://github.com/DmitrTRC/LevelUP_C_PartI/blob/master/LICENSE

[product-screenshot]: Images/levelup-logo.png

[status-url]: https://github.com/DmitrTRC/LevelUP_C_PartI/actions/workflows/cmake.yml/badge.svghttps://github.com/DmitrTRC/LevelUP_C_PartI/actions/workflows/cmake.yml