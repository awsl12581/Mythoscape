#if !defined(MYTHOSCAPE_CONTEXT_H)
#define MYTHOSCAPE_CONTEXT_H

#include <json.hpp>

namespace mythoscape::context
{

/**
 * @brief
 * Context --
 *         |_ opengl context (version, profile, etc.)
 *
 *         |_ window context (width, height, title, etc.)
 *
 *         |_ imgui context (menu, panels-context etc.)
 *
 *         |_ mythoscape context (game state, player data, etc.)
 *
 *         |_ etc. TODO: need to be defined
 */
struct Context
{
    // OpenGL context
    int openglVersionMajor = 4;
    int openglVersionMinor = 6;
    MEO_JSONIZATION(openglVersionMajor, openglVersionMinor);
};

/**
 * @brief Get the Unique Context object
 *
 * @return Context*
 */
Context* GetContext();

} // namespace mythoscape::context

#endif // MYTHOSCAPE_CONTEXT_H
