#pragma once

#include "Pattern.hpp"

#include <vector>

/**
 * @brief Represents the Block pattern in the Game of Life.
 *
 * This class defines the Block pattern, which is a still life, and provides
 * methods to retrieve its size and cell states.
 */
class PatternBlock final : public Pattern
{
  public:
    /**
     * @brief Constructs a PatternBlock object.
     *
     * Initializes the Block pattern grid.
     */
    PatternBlock();

    /**
     * @brief Gets the width of the pattern.
     *
     * @return The width (size in x-direction) of the pattern.
     */
    [[nodiscard]] std::uint8_t getSizeX() const override
    {
        return m_sizeX;
    }

    /**
     * @brief Gets the height of the pattern.
     *
     * @return The height (size in y-direction) of the pattern.
     */
    [[nodiscard]] std::uint8_t getSizeY() const override
    {
        return m_sizeY;
    }

    /**
     * @brief Gets the state of a specific cell in the pattern.
     *
     * @param x The x-coordinate of the cell.
     * @param y The y-coordinate of the cell.
     * @return True if the cell is alive, false if it is dead.
     */
    [[nodiscard]] bool getCell(std::uint8_t x, std::uint8_t y) const override;

  private:
    std::uint8_t m_sizeX;                  ///< The width of the Block pattern.
    std::uint8_t m_sizeY;                  ///< The height of the Block pattern.
    std::vector<std::vector<bool>> m_grid; ///< The grid representing the Block pattern.
};
