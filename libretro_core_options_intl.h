#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 1.3
 ********************************
 *
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
struct retro_core_option_definition option_defs_chs[] = {
   {
      "vb_3dmode",
      "3D模式",
      "选择3D模式。双色互补 - 用于传统双色滤光立体眼镜；虚拟视镜 - 用于CyberScope 3D设备。左右格式 - 左眼图像显示在左边，右眼图像显示在右边。垂直交错 - 垂直方向交替显示左眼和右眼视图扫描线。水平交错 - 水平方向交替显示左眼和右眼视图扫描线。",
      {
         { "anaglyph",  "双色互补" },
         { "cyberscope",  "虚拟视镜" },
         { "side-by-side",  "左右格式" },
         { "vli", "垂直交错"},
         { "hli", "水平交错"},
         { NULL, NULL },
      },
      "anaglyph",
   },
   {
      "vb_anaglyph_preset",
      "双色互补预设",
      "双色互补预设颜色。",
      {
         { "disabled",     NULL },
         { "red & blue",     "红色和蓝色" },
         { "red & cyan",     "红色和青色" },
         { "red & electric cyan",     "红色和电青色" },
         { "green & magenta",     "绿色和品红色" },
         { "yellow & blue",     "黄色和蓝色" },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "vb_color_mode",
      "调色板",
      "",
      {
         { "black & red", "黑色和红色" },
         { "black & white",  "黑色和白色" },
         { "black & blue",  "黑色和蓝色" },
         { "black & cyan",  "黑色和青色" },
         { "black & electric cyan",  "黑色和电青色" },
         { "black & green",  "黑色和绿色" },
         { "black & magenta",  "黑色和品红色" },
         { "black & yellow",  "黑色和黄色" },
         { NULL, NULL},
      },
      "black & red",
   },
   {
      "vb_right_analog_to_digital",
      "右摇杆转模拟到数字转换",
      "",
      {
         { "disabled",  NULL },
         { "enabled",  NULL },
         { "invert x",  "X轴反向" },
         { "invert y",  "Y轴反向" },
         { "invert both",  "同时反向" },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "vb_cpu_emulation",
      "CPU模拟（需要重启）",
      "选择快速或者精确（更慢）模拟。",
      {
         { "accurate",      "精确" },
         { "fast",      "快速" },
         { NULL, NULL},
      },
      "fast",
   },
   { NULL, NULL, NULL, { NULL, NULL }, NULL },
};

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

struct retro_core_option_definition option_defs_tr[] = {
   {
      "vb_3dmode",
      "3B modu",
      "3B modunu seçin. Anaglif - klasik çift lens renkli camlarla birlikte kullanılır. Cyberscope - CyberScope ile kullanılmak üzere tasarlanan 3B cihaz. sidebyside - sol göz resmi solda ve sağ göz resmi sağda görüntülenir. vli - Dikey çizgiler sol ve sağ görünüm arasında değişir. hli - Yatay çizgiler sol ve sağ görünüm arasında değişir.",
      {
         { "anaglyph",  "Anaglif" },
         { "cyberscope",  NULL },
         { "side-by-side",  NULL },
         { "vli", NULL},
         { "hli", NULL},
         { NULL, NULL },
      },
      "anaglyph",
   },
   {
      "vb_anaglyph_preset",
      "Anaglif Ön ayarı",
      "Anaglif önceden ayarlanmış renkler.",
      {
         { "disabled",     "devre dışı" },
         { "red & blue",     NULL },
         { "red & cyan",     NULL },
         { "red & electric cyan",     NULL },
         { "green & magenta",     NULL },
         { "yellow & blue",     NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "vb_color_mode",
      "Palet",
      "",
      {
         { "black & red", NULL },
         { "black & white",  NULL },
         { "black & blue",  NULL },
         { "black & cyan",  NULL },
         { "black & electric cyan",  NULL },
         { "black & green",  NULL },
         { "black & magenta",  NULL },
         { "black & yellow",  NULL },
         { NULL, NULL},
      },
      "black & red",
   },
   {
      "vb_right_analog_to_digital",
      "Dijital sağ analog",
      "",
      {
         { "disabled",  "devre dışı" },
         { "enabled",  "etkin" },
         { "invert x",  NULL },
         { "invert y",  NULL },
         { "invert both",  NULL },
         { NULL, NULL },
      },
      "disabled",
   },
   {
      "vb_cpu_emulation",
      "CPU emülasyonu (Yeniden başlatma gerekir)",
      "Daha hızlı ve doğru (daha yavaş) emülasyon arasında seçim yapın.",
      {
         { "accurate",      "doğru" },
         { "fast",      "hızlı" },
         { NULL, NULL},
      },
      "fast",
   },
   { NULL, NULL, NULL, { NULL, NULL }, NULL },
};

#ifdef __cplusplus
}
#endif

#endif
