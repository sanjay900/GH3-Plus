#include "dinputPatcher.h"
#include "core\Patcher.h"
#include "gh3\GH3Keys.h"
#include "gh3\GH3GlobalAddresses.h"
#include <stdint.h>
#include <Windows.h>

static GH3P::Patcher g_patcher = GH3P::Patcher(__FILE__);

static void * const dinputCheck = (void *)0x0052245d;
static void * const dinputRet = (void *)0x005228d0;


void ApplyHack()
{
    g_patcher.WriteJmp(dinputCheck, dinputRet);
}