#include "ColorsEffect.h"

namespace  {

uint8_t hue = 0;

} // namespace

ColorsEffect::ColorsEffect()
{
    effectName = "Color change";
}

void ColorsEffect::tick()
{
    hue += settings->effectScale;
    MyLED::fill(CHSV(hue, 255, 255));
}
