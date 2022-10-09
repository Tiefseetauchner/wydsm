# WYDSM

What you doin, stepper motor?

We're trying to provide a general interface for stepper motors of all sorts (provided I can find them)

Suggestions always welcome, possibly untestet as I don't have the resources to buy every stepper motor driver in existance, test it yourself and make PRs or issues <3

## Versions and lookahead

### Alpha

- VA0.1: Basic functionality
  - A4988 support
  - ESP-IDF
- VA0.2: Arduino support
  - Support for Arduino Framework
    - Provided there are compile time switches that I can use to compile only the relevant code, TBD (espidf is a priority)
  - Generic stepper motor driver support (DRV8834, DRV8880, ...)

### Full Release

- V1.0: Full functionality
  - ESP-IDF, [FreeRTOS](https://freertoshal.github.io/doxygen/group__HAL.html), Arduino
  - Main driver support (including community feedback)
    - A4988 and other step/dir drivers
    - L298, ULN2003
  - Unit Tests

## Progress

### VA0.1

- [ ] ESP-IDF support
- [ ] A4988
- [ ] **Full Unit Test**

### VA0.2

- [ ] Arduino support
- [ ] Generic stepper motor driver support
- [ ] **Full Unit Test**

## Contribution

Feel free to fork and contribute to the project

# I have a coffee addiction

And you can help!

[!["Buy Me A Coffee"](https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png)](https://www.buymeacoffee.com/tiefseetauchner)
