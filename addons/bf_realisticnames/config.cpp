/* Copyright 2021 ACE3 Team. This source code file is part of ACE3 and is
 * licensed under the GPLv2. For the full license text, please see the file 
 * LICENSE or visit https://github.com/acemod/ACE3/blob/master/LICENSE
 * 
 * 20 Nov 2021 - Modified by blackfisch (Rico Goldhardt)
 */

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "blackfisch";
        authors[] = {"blackfisch","KoffeinFlummi","TaoSensai","commy2"};
        // url = ECSTRING(main,URL);
        VERSION_CONFIG;

        // this prevents any patched class from requiring this addon
        addonRootClass = "A3_Characters_F";
    };
};

class CfgMods {
    class PREFIX {
        dir = "@bf_realisticnames";
        name = COMPONENT_NAME;
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Github";
        action = "https://github.com/blackfisch/Arma3-RealisticNames";
        description = "Special Thanks to ACE3, the project this mod is based on.";
    };
};

#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
