#include "PreprocessorDirectives.hpp"
#include "libtcod.hpp"
class Actor;
#include "Persistent.hpp"
#include "utl.hpp"
#include "Destructible.hpp"
#include "Attacker.hpp"
#include "Ai.hpp"
#include "TargetSelector.hpp"
#include "Effect.hpp"
#include "Pickable.hpp"
#include "Container.hpp"
#include "Actor.hpp"
#include "Map.hpp"
#include "Gui.hpp"
#include "Engine.hpp"

namespace COL{

constexpr const TCODColor& PLAYER_MSG_COLOR{ TCODColor::red };
constexpr const TCODColor& NORMAL_MSG_COLOR{ TCODColor::lightGrey };

};