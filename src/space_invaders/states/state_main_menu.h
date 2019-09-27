#pragma once

#include "../../arcade/gui/stack_menu.h"
#include "../../arcade/state/state_base.h"
#include "../../arcade/util/random.h"
#include "../starry_background.h"

namespace space_invaders {
    class StateMainMenu : public StateBase {
      public:
        StateMainMenu(Game &game);

        void handleEvent(sf::Event e) override;
        void handleInput() override{};
        void update(sf::Time deltaTime) override;
        void render(sf::RenderTarget &renderer) override;

      private:
        gui::StackMenu m_mainMenu;
        sf::RectangleShape m_banner;

        StarryBackground m_background;
    };
} // namespace space_invaders