//
// Dec-2020, Michael Lindner
// MIT license
//
#include "sp_animations.h"


///////////////////

static sp::Animation NullAnimation;


namespace sp
{
///////////////////

const Animation& Animations::operator[](const std::string& tag) const
{
   const auto pos = m_repos.find(tag);
   return (pos != m_repos.end()) ? pos->second : NullAnimation;
}

} // namespace sp
