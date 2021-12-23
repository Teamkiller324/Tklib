# Tklib or Tk Libraries
This is a massive include with quite some additions and will be updated as frequent as possible adding more stuff.
This was renamed from Tk Include to Tk Libraries when 1.2.0 was released.

# [Functions](https://github.com/Teamkiller324/Tklib/blob/main/functions.md) (Work in progress, not fully finished yet)

### Also includes modified/updated SourceMod includes separately.

Pro tip: using `stock` makes only those that are being used out of the include to be compiled with and the rest will be ignored/not compiled.
Using `public` will only make it be part of the compilation even if not used. (Compiler will see it as a forward if not used inside plugin).

Multi-Colors will be separated from Tklib in the near future.


# Available Pre-Include Definitions

`_tklib_no_includes` Disable all includes.

`_tklib_disable_gameidentifier` Disable Game Identifier Include.

`_tklib_disable_resize` Disable Resize Include.

`_tklib_disable_weapons` Disable weapons Include.

`_tklib_disable_clients` Disable clients Include.

`_tklib_disable_entities` Disable entities Include.

`_tklib_disable_additional` Disable additional Include.

`_tklib_disable_events` Disable events Include.

`_tklib_no_core_includes` Disable all core includes.

`_tklib_no_game_includes` Disable all game includes.

`_tklib_only_tf2` Only use TF2 stock functions.

`_tklib_only_cstrike` Only use Counter-Strike stock functions.

`_tklib_only_l4d` Only use Left4Dead stock functions.

`_tklib_only_dods` Only use Day of Defeat: Source stock functions.

`_tklib_only_fortress_forever` Only use Fortress-Forever stock functions.

`_tklib_only_contagion` Only use Contagion stock functions

`_tklib_no_sdktools` Disable tklib loading sdktools

`_tklib_no_sdkhooks` Disable tklib loading sdkhooks

`_tklib_no_definitions` Disable integrated definitions such as int(value) which is simplified from view_as < int > (value)

`_tklib_no_multicolors` disable Multi-Colors (Will be separated out in the near future.)
