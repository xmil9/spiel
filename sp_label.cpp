//
// Jan-2021, Michael Lindner
// MIT license
//
#include "sp_label.h"
#include "sp_renderer2.h"


namespace sp
{
///////////////////

void Label::setup(GetTextFn getTextFn, const PixPos& leftTop, const PixDim& dim)
{
   assert(getTextFn);

   m_getTextFn = getTextFn;
   m_leftTop = leftTop;
   m_dim = dim;
}


void Label::render(Renderer2& renderer, const PixPos& offset)
{
   renderer.renderText(m_getTextFn(), offset + m_leftTop, m_textScale, m_textColor);
}

} // namespace sp
