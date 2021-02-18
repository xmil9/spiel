//
// Nov-2020, Michael Lindner
// MIT license
//
#include "frustum3.h"


namespace
{
///////////////////

constexpr sp::Angle MaxFov{sp::Angle::fromDegrees(60.0f)};
constexpr sp::Angle MinFov{sp::Angle::fromDegrees(20.0f)};

} // namespace


namespace sp
{
///////////////////

void Frustum3::updateFov(float offset)
{
   m_horzFov -= esl::radians(offset);

   if (m_horzFov > MaxFov)
      m_horzFov = MaxFov;
   if (m_horzFov < MinFov)
      m_horzFov = MinFov;
}

} // namespace sp
