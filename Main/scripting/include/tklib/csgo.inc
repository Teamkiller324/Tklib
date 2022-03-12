//==========================================//
// Tklib / CSGO.
//==========================================//
#if !defined _tklib_no_csgo

stock char CSGO_GetTeamStringName[][] = {
	"{grey}Unassigned{default}",
	"{grey}Spectators{default}",
	"{orange}Terrorists{default}",
	"{bluegrey}Counter-Terrorists{default}"
}, CSGO_GetTeamColour[][] = {
	"{grey}",
	"{grey}",
	"{orange}",
	"{bluegrey}"
};

enum CSGORank	{
	CSGORank_UnRanked						=	0,
	CSGORank_UR								=	0,
	CSGORank_Silver1						=	1,
	CSGORank_S1								=	1,
	CSGORank_Silver2						=	2,
	CSGORank_S2								=	2,
	CSGORank_Silver3						=	3,
	CSGORank_S3								=	3,
	CSGORank_Silver4						=	4,
	CSGORank_S4								=	4,
	CSGORank_SilverElite					=	5,
	CSGORank_SE								=	5,
	CSGORank_SilverEliteMaster				=	6,
	CSGORank_SEM							=	6,
	CSGORank_GoldNova1						=	7,
	CSGORank_GN1							=	7,
	CSGORank_GoldNova2						=	8,
	CSGORank_GN2							=	8,
	CSGORank_GoldNova3						=	9,
	CSGORank_GN3							=	9,
	CSGORank_GoldNovaMaster					=	10,
	CSGORank_GNM							=	10,
	CSGORank_MasterGuardian1				=	11,
	CSGORank_MG1							=	11,
	CSGORank_MasterGuardian2				=	12,
	CSGORank_MG2							=	12,
	CSGORank_MasterGuardianElite			=	13,
	CSGORank_MGE							=	13,
	CSGORank_DistinguishedMasterGuardian	=	14,
	CSGORank_DMG							=	14,
	CSGORank_LegendaryEagle					=	15,
	CSGORank_LE								=	15,
	CSGORank_LegendaryEagleMaster			=	16,
	CSGORank_LEM							=	16,
	CSGORank_SupremeMasterFirstClass		=	17,
	CSGORank_SMFC							=	17,
	CSGORank_TheGlobalElite					=	18,
	CSGORank_GE								=	18
}

enum	{
	CSGO_Weapon_Deagle	=	1,
	CSGO_Weapon_FiveSeven = 3,
	CSGO_Weapon_Glock	=	4,
	CSGO_Weapon_Ak47	=	7,
	CSGO_Weapon_Aug		=	8,
	CSGO_Weapon_AWP		=	9,
	CSGO_Weapon_Famas	=	10,
	CSGO_Weapon_G3SG1	=	11,
	CSGO_Weapon_GalilAR	=	13,
	CSGO_Weapon_M249	=	14,
	CSGO_Weapon_M4A4	=	16,
	CSGO_Weapon_Mac10	=	17,
	CSGO_Weapon_P90		=	19,
	CSGO_Weapon_MP5		=	23,
	CSGO_Weapon_MP5SD	=	23,
	CSGO_Weapon_UMP45	=	24,
	CSGO_Weapon_XM1014	=	25,
	CSGO_Weapon_Bizon	=	26,
	CSGO_Weapon_MAG7	=	27,
	CSGO_Weapon_Negev	=	28,
	CSGO_Weapon_SawedOff=	29,
	CSGO_Weapon_Tec9	=	30,
	CSGO_Weapon_Zeus	=	31,
	CSGO_Weapon_Taser	=	31,
	CSGO_Weapon_P2000	=	32,
	CSGO_Weapon_MP7		=	33,
	CSGO_Weapon_MP9		=	34,
	CSGO_Weapon_Nova	=	35,
	CSGO_Weapon_P250	=	36,
	CSGO_Weapon_Scar20	=	38,
	CSGO_Weapon_SG556	=	39,
	CSGO_Weapon_SSG08	=	40,
	CSGO_Weapon_Scout	=	40,
	CSGO_Knife_CT		=	41,
	CSGO_Knife_Gold		=	42,
	CSGO_Grenade_Flashbang		=	43,
	CSGO_Grenade_HEGrenade		=	44,
	CSGO_Grenade_SmokeGrenade	=	45,
	CSGO_Grenade_Molotov		=	46,
	CSGO_Grenade_Decoy			=	47,
	CSGO_Grenade_Incendiary		=	48,
	CSGO_Weapon_C4				=	49,
	CSGO_Knife_T				=	59,
	CSGO_Weapon_M4A1_S			=	60,
	CSGO_Weapon_USP_S			=	61,
	CSGO_Weapon_CZ75_A			=	62,
	CSGO_Weapon_Revolver		=	64,
	CSGO_Grenade_TAGrenade		=	68,
	CSGO_Grenade_TacticalAwareness = 68,
	CSGO_Grenade_BreachCharge	=	70,
	CSGO_Knife_Spectral			=	80,
	CSGO_Knife_Ghost			=	80,
	CSGO_Knife_Bayonet			=	500,
	CSGO_Knife_Classic			=	503,
	CSGO_Knife_Flip				=	505,
	CSGO_Knife_Gut				=	506,
	CSGO_Knife_Karambit			=	507,
	CSGO_Knife_M9_Bayonet		=	508,
	CSGO_Knife_Huntsman			=	509,
	CSGO_Knife_Falchion			=	512,
	CSGO_Knife_Bowie			=	514,
	CSGO_Knife_Butterfly		=	515,
	CSGO_Knife_ShadowDaggers	=	516,
	CSGO_Knife_ButtPlugs		=	516,
	CSGO_Knife_Paracord			=	517,
	CSGO_Knife_Survival			=	518,
	CSGO_Knife_Ursus			=	519,
	CSGO_Knife_Navaja			=	520,
	CSGO_Knife_Nomad			=	521,
	CSGO_Knife_Stiletto			=	522,
	CSGO_Knife_Talon			=	523,
	CSGO_Knife_Skeleton			=	525
}

//Soon will be finished on.
enum CSGORankType	{
	CSGORankType_Competitive	=	7
}

#define	CSGORank(%1) view_as<CSGORank>(%1)
#define	CSGORankType(%1) view_as<CSGORankType>(%1)

/**
 *	Fixes the StatTrak and Skins function not working.
 *
 *	@param weapon		Weapon entity.
 *	@return				Returns false on failure, true otherwise.
 */
stock bool CSGO_FixWeaponId(any weapon)	{
	if(!IsValidEntityEx(weapon))
		return false;
	
	//Fixes skin not appearing.
	static int IDHigh = 16384;
	SetEntProp(weapon, Prop_Send, "m_iItemIDHigh", IDHigh++);
	SetEntProp(weapon, Prop_Send, "m_iItemIDLow", -1);
	return true;
}

/**
 *	Set the Weapon skin.
 *
 *	@param	weapon		The weapon entity.
 *	@param	index		The skin index.
 *
 *	@return	If the weapon entity is invalid, this returns false.
 */
stock bool CSGO_SetWeaponSkin(any weapon, int index)	{
	return SetEntPropEx(weapon, Prop_Send, "m_nFallbackPaintKit", index);
}

/**
 *	Returns the Weapon skin.
 *
 *	@param weapon		The weapon entity.
 *	@param index		The Skin index.
 *
 *	@error				If the weapon or painkit is invalid, this returns -1.
 */
stock int CSGO_GetWeaponSkin(any weapon)	{
	return GetEntPropEx(weapon, Prop_Send, "m_nFallbackPaintKit");
}

/**
 *	Set the weapon's pattern/seed.
 *
 *	@param	weapon		The weapon entity.
 *	@param	pattern		The pattern to set.
 *
 *	@error	If the weapon is invalid or procedure failed, this returns false.
 */
stock bool CSGO_SetWeaponPattern(any weapon, int pattern)	{
	return SetEntPropEx(weapon, Prop_Send, "m_nFallbackSeed", pattern);
}

/**
 *	Returns the weapon's pattern/seed.
 *
 *	@param	weapon		The weapon entity.
 *
 *	@error	If the weapon is invalid or procedure failed, this returns false.
 */
stock int CSGO_GetWeaponPattern(any weapon)	{
	return GetEntPropEx(weapon, Prop_Send, "m_nFallbackSeed");
}

/**
 *	Set the Weapon StatTrak.
 *
 *	@param	weapon		Weapon entity.
 *	@param	value		The 'kill' track amount. If -1 (by default), will be disabled.
 *
 *	@return	Returns false on failure, true otherwise.
 *
 *	@error	If the weapon is invalid or procedure failed, this returns false.
 */
stock bool CSGO_SetWeaponStatTrak(any weapon, int value=-1)	{
	return SetEntPropEx(weapon, Prop_Send, "m_nFallbackStatTrak", value); 
}

/**
 *	Returns the Weapon StatTrak.
 *
 *	@param weapon		The weapon entity.
 *
 *	@error				If weapon or stattrak module is invalid, it will return -1.
 */
stock int CSGO_GetWeaponStatTrak(any weapon)	{
	return GetEntPropEx(weapon, Prop_Send, "m_nFallbackStatTrak");
}

/**
 *	Set the weapon owner.
 *
 *	@param weapon		The weapon entity.
 *	@param client		Users index.
 *	@return				Returns false on failure, true otherwise.
 */
stock bool CSGO_SetWeaponOwner(any weapon, int client)	{
	SetEntPropEx(weapon, Prop_Send, "m_iAccountID", GetSteamAccountID(client));
	SetEntPropEntEx(weapon, Prop_Send, "m_hOwnerEntity", client);
	SetEntPropEnt(weapon, Prop_Send, "m_hPrevOwner", -1);
	
	return true;
}

/**
 *	Set the weapon quality.
 *
 *	@param	weapon		The weapon entity.
 *	@param	index		Quality index value. By default set to 3, adding a star to the weapon name.
 *
 *	@error	If the weapon is invalid or procedure failed, this returns false.
 */
stock bool CSGO_SetWeaponQuality(any weapon, int index=3)	{
	return SetEntPropEx(weapon, Prop_Send, "m_iEntityQuality", index);
}

/**
 *	Set the weapon nametag
 *
 *	@param	weapon		The weapon entity.
 *	@param	nametag		A Nametag or string of characters you specify.
 *	@param	maxlen		Max character length for the string buffer.
 *
 *	@return	Returns false on failure, true otherwise.
 */
stock bool CSGO_SetWeaponNametag(any weapon, const char[] nametag)	{
	return SetEntPropStringEx(weapon, Prop_Send, "m_szCustomName", nametag);
}

/**
 *	Returns the weapon nametag
 *
 *	@param	weapon		The weapon entity.
 *	@param	buffer		A Nametag or string of characters you specify.
 *	@param	maxlen		Length of the buffer.
 *
 *	@return	Returns false on failure, true otherwise.
 */
stock bool CSGO_GetWeaponNametag(any weapon, char[] buffer, int maxlen)	{
	return GetEntPropStringEx(weapon, Prop_Send, "m_szCustomName", nametag, maxlen);
}

/**
 *	Set the weapon wear.
 *
 *	@param	weapon		The weapon entity.
 *	@param	wear		The wear float value.
 *
 *	@error	If the weapon is invalid or procedure failed, this returns false.
 */
stock bool CSGO_SetWeaponWear(any weapon, float wear)	{
	return SetEntPropFloatEx(weapon, Prop_Send, "m_flFallbackWear", wear);
}

/**
 *	Returns the weapon's wear float.
 *
 *	@param	weapon		The weapon entity.
 *
 *	@error	If the weapon is invalid or procedure failed, this returns false.
 */
stock float CSGO_GetWeaponWear(any weapon)	{
	return GetEntPropFloatEx(entity, Prop_Send, "m_flFallbackWear");
}

/**
 *	Returns the competitive rank offset. [CS:GO]
 */
stock int CSGO_GetCompetitiveOffset()	{
	return	FindSendPropInfo("CCSPlayerResource", "m_iCompetitiveRanking");
}

/**
 *	Set the competitive rank offset. [CS:GO]
 *
 *	@param	entity	The target entity.
 *	@param	array	array, example arraytest[MAXPLAYERS+1] without the [MAXPLAYERS+1]
 */
stock void CSGO_SetCompetitiveOffset(any entity, const CSGORank[] array)	{
	SetEntDataArray(int(entity), CSGO_GetCompetitiveOffset(), int(array), MAXPLAYERS+1);
}

/**
 *	Returns the competitive rank type. [CS:GO]
 */
stock CSGORankType CSGO_GetCompetitiveType()	{
	return view_as<CSGORankType>(FindSendPropInfo("CCSPlayerResource",	"m_iCompetitiveRankType"));
}

/**
 *	Set the competitive rank type. [CS:GO]
 *
 *	@param	entity	The target entity.
 *	@param	array	array, example arraytest[MAXPLAYERS+1] without the [MAXPLAYERS+1]
 */
stock void CSGO_SetCompetitiveType(any entity, const CSGORankType[] array)	{
	SetEntDataArray(entity, CSGO_GetCompetitiveType(), view_as<int>(array), MAXPLAYERS, 1);
}

/**
 *	Set the users arms model.
 *
 *	@param	client	The users index.
 *	@param	arms	The Arm model path.
 *
 *	@return	Returns false on failure, true otherwise.
 */
stock bool CSGO_SetArmModel(int client, const char[] arms)	{
	return SetEntPropStringEx(client, Prop_Send, "m_szArmsModel", arms);
}

/**
 *	Return the users arms model.
 *
 *	@param client		The users index.
 *	@param name			The Arm model path.
 *
 *	@return				Returns false on failure, true otherwise.
 */
stock bool CSGO_GetArmModel(int client, char[] buffer, int maxlen)	{
	return GetEntPropStringEx(client, Prop_Send, "m_szArmsModel", buffer, maxlen);
}

/**
 *	Returns the weapon definition index by its entity name.
 *
 *	@param	weapon	The weapon entity name.
 *
 *	@returns	CSGO_* enum (integer). 0 if invalid entity.
 */
stock int CSGO_GetWeaponDefindex(const char[] weapon)	{
	if(StrEqual(weapon, "weapon_ak47", false))
		return	CSGO_Weapon_Ak47;
	
	if(StrEqual(weapon, "weapon_m4a1", false))
		return	CSGO_Weapon_M4A4;
	
	if(StrEqual(weapon, "weapon_m4a1_silencer", false))
		return	CSGO_Weapon_M4A1_S;
	
	if(StrEqual(weapon, "weapon_galilar", false))
		return	CSGO_Weapon_GalilAR;
	
	if(StrEqual(weapon, "weapon_famas", false))
		return	CSGO_Weapon_Famas;
	
	if(StrEqual(weapon, "weapon_sg556", false))
		return	CSGO_Weapon_SG556;
	
	if(StrEqual(weapon, "weapon_aug", false))
		return	CSGO_Weapon_Aug;
	
	if(StrEqual(weapon, "weapon_ssg08", false))
		return	CSGO_Weapon_SSG08;
	
	if(StrEqual(weapon, "weapon_awp", false))
		return	CSGO_Weapon_AWP;
	
	if(StrEqual(weapon, "weapon_scar20", false))
		return	CSGO_Weapon_Scar20;
	
	if(StrEqual(weapon, "weapon_g3sg1", false))
		return	CSGO_Weapon_G3SG1;
	
	if(StrEqual(weapon, "weapon_nova", false))
		return	CSGO_Weapon_Nova;
	
	if(StrEqual(weapon, "weapon_sawedoff", false))
		return	CSGO_Weapon_SawedOff;
	
	if(StrEqual(weapon, "weapon_mag7", false))
		return	CSGO_Weapon_MAG7;
	
	if(StrEqual(weapon, "weapon_xm1014", false))
		return	CSGO_Weapon_XM1014;
	
	if(StrEqual(weapon, "weapon_m249", false))
		return	CSGO_Weapon_M249;
	
	if(StrEqual(weapon, "weapon_negev", false))
		return	CSGO_Weapon_Negev;
	
	if(StrEqual(weapon, "weapon_taser", false))
		return	CSGO_Weapon_Zeus;
	
	if(StrEqual(weapon, "weapon_c4", false))
		return	CSGO_Weapon_C4;
	
	if(StrEqual(weapon, "weapon_hegrenade", false))
		return	CSGO_Grenade_HEGrenade;
	
	if(StrEqual(weapon, "weapon_flashbang", false))
		return	CSGO_Grenade_Flashbang;
	
	if(StrEqual(weapon, "weapon_decoy", false))
		return	CSGO_Grenade_Decoy;
	
	if(StrEqual(weapon, "weapon_smokegrenade", false))
		return	CSGO_Grenade_SmokeGrenade;
	
	if(StrEqual(weapon, "weapon_incgrenade", false)
	|| StrEqual(weapon, "weapon_incendiary"))
		return	CSGO_Grenade_Incendiary;
	
	if(StrEqual(weapon, "weapon_molotov", false))
		return	CSGO_Grenade_Molotov;
	
	if(StrEqual(weapon, "weapon_tagrenade"))
		return	CSGO_Grenade_TAGrenade;
	
	if(StrEqual(weapon, "weapon_breachcharge"))
		return	CSGO_Grenade_BreachCharge;
	
	if(StrEqual(weapon, "weapon_glock", false))
		return	CSGO_Weapon_Glock;
	
	if(StrEqual(weapon, "weapon_usp_silencer", false))
		return	CSGO_Weapon_USP_S;
	
	if(StrEqual(weapon, "weapon_hkp2000", false))
		return	CSGO_Weapon_P2000;
	
	if(StrEqual(weapon, "weapon_p250", false))
		return	CSGO_Weapon_P250;
	
	if(StrEqual(weapon, "weapon_deagle", false))
		return	CSGO_Weapon_Deagle;
	
	if(StrEqual(weapon, "weapon_fiveseven", false))
		return	CSGO_Weapon_FiveSeven;
	
	if(StrEqual(weapon, "weapon_tec9", false))
		return	CSGO_Weapon_Tec9;
	
	if(StrEqual(weapon, "weapon_revolver", false))
		return	CSGO_Weapon_Revolver;
	
	if(StrEqual(weapon, "weapon_p90", false))
		return	CSGO_Weapon_P90;
	
	if(StrEqual(weapon, "weapon_ump45", false))
		return	CSGO_Weapon_UMP45;
	
	if(StrEqual(weapon, "weapon_mp7", false))
		return	CSGO_Weapon_MP7;
	
	if(StrEqual(weapon, "weapon_mp9", false))
		return	CSGO_Weapon_MP9;
	
	if(StrEqual(weapon, "weapon_mp5sd", false))
		return	CSGO_Weapon_MP5SD;
	
	if(StrEqual(weapon, "weapon_bizon", false))
		return CSGO_Weapon_Bizon;
	
	if(StrEqual(weapon, "weapon_knife_t", false))
		return	CSGO_Knife_T;
	
	if(StrEqual(weapon, "weapon_knife_ct", false))
		return	CSGO_Knife_CT;
	
	if(StrEqual(weapon, "weapon_knife", false))
		return	CSGO_Knife_CT;
	
	if(StrEqual(weapon, "weapon_knifegg", false))
		return	CSGO_Knife_Gold;
	
	if(StrEqual(weapon, "weapon_knife_css", false))
		return	CSGO_Knife_Classic;
	
	if(StrEqual(weapon, "weapon_bayonet", false))
		return	CSGO_Knife_Bayonet;
	
	if(StrEqual(weapon, "weapon_knife_flip", false))
		return	CSGO_Knife_Flip;
	
	if(StrEqual(weapon, "weapon_knife_gut", false))
		return	CSGO_Knife_Gut;
	
	if(StrEqual(weapon, "weapon_knife_karambit", false))
		return	CSGO_Knife_Karambit;
	
	if(StrEqual(weapon, "weapon_knife_m9_bayonet", false))
		return	CSGO_Knife_M9_Bayonet;
	
	if(StrEqual(weapon, "weapon_knife_tactical", false))
		return	CSGO_Knife_Huntsman;
	
	if(StrEqual(weapon, "weapon_knife_butterfly", false))
		return	CSGO_Knife_Butterfly;
	
	if(StrEqual(weapon, "weapon_knife_falchion", false))
		return	CSGO_Knife_Falchion;
	
	if(StrEqual(weapon, "weapon_knife_push", false))
		return	CSGO_Knife_ShadowDaggers;
	
	if(StrEqual(weapon, "weapon_knife_survival_bowie", false))
		return	CSGO_Knife_Bowie;
	
	if(StrEqual(weapon, "weapon_knife_ursus", false))
		return	CSGO_Knife_Ursus;
	
	if(StrEqual(weapon, "weapon_knife_gypsy_jackknife", false))
		return	CSGO_Knife_Navaja;
	
	if(StrEqual(weapon, "weapon_knife_stiletto", false))
		return	CSGO_Knife_Stiletto;
	
	if(StrEqual(weapon, "weapon_knife_widowmaker", false))
		return	CSGO_Knife_Talon;
	
	if(StrEqual(weapon, "weapon_knife_canis", false))
		return	CSGO_Knife_Survival;
	
	if(StrEqual(weapon, "weapon_knife_cord", false))
		return	CSGO_Knife_Paracord;
	
	if(StrEqual(weapon, "weapon_knife_skeleton", false))
		return	CSGO_Knife_Skeleton;
	
	if(StrEqual(weapon, "weapon_knife_outdoor", false))
		return	CSGO_Knife_Nomad;
	
	return 0;
}

/**
 *	Returns the weapon name by its entity name.
 *
 *	@param	classname	The weapon entity classname.
 *	@param	name		The weapon's name.
 *	@param	maxlen		The maximum length of the name.
 *
 *	@noreturn
 */
stock void CSGO_GetWeaponName(const char[] classname, char[] name, int maxlen)	{
	if(StrEqual(classname, "weapon_ak47", false))					strcopy(name, maxlen, "Ak-47");
	if(StrEqual(classname, "weapon_m4a1", false))					strcopy(name, maxlen, "M4A4");
	if(StrEqual(classname, "weapon_m4a1_silencer", false))			strcopy(name, maxlen, "M4A1-S");
	if(StrEqual(classname, "weapon_galilar", false))				strcopy(name, maxlen, "Galil AR");
	if(StrEqual(classname, "weapon_famas", false))					strcopy(name, maxlen, "Famas");
	if(StrEqual(classname, "weapon_sg556", false))					strcopy(name, maxlen, "SG556");
	if(StrEqual(classname, "weapon_aug", false))					strcopy(name, maxlen, "AUG");
	if(StrEqual(classname, "weapon_ssg08", false))					strcopy(name, maxlen, "Scout");
	if(StrEqual(classname, "weapon_awp", false))					strcopy(name, maxlen, "AWP");
	if(StrEqual(classname, "weapon_scar20", false))					strcopy(name, maxlen, "Scar-20");
	if(StrEqual(classname, "weapon_g3sg1", false))					strcopy(name, maxlen, "G3SG1");
	if(StrEqual(classname, "weapon_nova", false))					strcopy(name, maxlen, "Nova");
	if(StrEqual(classname, "weapon_sawedoff", false))				strcopy(name, maxlen, "Sawed-Off");
	if(StrEqual(classname, "weapon_mag7", false))					strcopy(name, maxlen, "MAG-7");
	if(StrEqual(classname, "weapon_xm1014", false))					strcopy(name, maxlen, "XM1014");
	if(StrEqual(classname, "weapon_m249", false))					strcopy(name, maxlen, "M249");
	if(StrEqual(classname, "weapon_negev", false))					strcopy(name, maxlen, "Negev");
	if(StrEqual(classname, "weapon_taser", false))					strcopy(name, maxlen, "Taser");
	if(StrEqual(classname, "weapon_c4", false))						strcopy(name, maxlen, "C4 Bomb");
	if(StrEqual(classname, "weapon_hegrenade", false))				strcopy(name, maxlen, "HE Grenade");
	if(StrEqual(classname, "weapon_flashbang", false))				strcopy(name, maxlen, "Flashbang");
	if(StrEqual(classname, "weapon_decoy", false))					strcopy(name, maxlen, "Decoy");
	if(StrEqual(classname, "weapon_smokegrenade", false))			strcopy(name, maxlen, "Smokegrenade");
	if(StrEqual(classname, "weapon_incgrenade", false))				strcopy(name, maxlen, "Incendiary");
	if(StrEqual(classname, "weapon_molotov", false))				strcopy(name, maxlen, "Molotov");
	if(StrEqual(classname, "weapon_tagrenade"))						strcopy(name, maxlen, "TA-Grenade");
	if(StrEqual(classname, "weapon_breachcharge"))					strcopy(name, maxlen, "Breach Charge");
	if(StrEqual(classname, "weapon_glock", false))					strcopy(name, maxlen, "Glock");
	if(StrEqual(classname, "weapon_usp_silencer", false))			strcopy(name, maxlen, "USP-S");
	if(StrEqual(classname, "weapon_hkp2000", false))				strcopy(name, maxlen, "P2000");
	if(StrEqual(classname, "weapon_p250", false))					strcopy(name, maxlen, "P250");
	if(StrEqual(classname, "weapon_deagle", false))					strcopy(name, maxlen, "Deagle");
	if(StrEqual(classname, "weapon_fiveseven", false))				strcopy(name, maxlen, "Five-SeveN");
	if(StrEqual(classname, "weapon_tec9", false))					strcopy(name, maxlen, "Tec-9");
	if(StrEqual(classname, "weapon_revolver", false))				strcopy(name, maxlen, "R8 Revolver");
	if(StrEqual(classname, "weapon_p90", false))					strcopy(name, maxlen, "P90");
	if(StrEqual(classname, "weapon_ump45", false))					strcopy(name, maxlen, "UMP-45");
	if(StrEqual(classname, "weapon_mp7", false))					strcopy(name, maxlen, "MP7");
	if(StrEqual(classname, "weapon_mp9", false))					strcopy(name, maxlen, "MP9");
	if(StrEqual(classname, "weapon_mp5sd", false))					strcopy(name, maxlen, "MP5");
	if(StrEqual(classname, "weapon_bizon", false))					strcopy(name, maxlen, "Bizon");
	if(StrEqual(classname, "weapon_knife_t", false))				strcopy(name, maxlen, "T Knife");
	if(StrEqual(classname, "weapon_knife_ct", false))				strcopy(name, maxlen, "CT Knife");
	if(StrEqual(classname, "weapon_knife", false))					strcopy(name, maxlen, "Knife");
	if(StrEqual(classname, "weapon_knifegg", false))				strcopy(name, maxlen, "Golden Knife");
	if(StrEqual(classname, "weapon_knife_css", false))				strcopy(name, maxlen, "Classic Knife");
	if(StrEqual(classname, "weapon_bayonet", false))				strcopy(name, maxlen, "Bayonet");
	if(StrEqual(classname, "weapon_knife_flip", false))				strcopy(name, maxlen, "Flip Knife");
	if(StrEqual(classname, "weapon_knife_gut", false))				strcopy(name, maxlen, "Gut Knife");
	if(StrEqual(classname, "weapon_knife_karambit", false))			strcopy(name, maxlen, "Karambit Knife");
	if(StrEqual(classname, "weapon_knife_m9_bayonet", false))		strcopy(name, maxlen, "M9 Bayonet Knife");
	if(StrEqual(classname, "weapon_knife_tactical", false))			strcopy(name, maxlen, "Huntsman Knife");
	if(StrEqual(classname, "weapon_knife_butterfly", false))		strcopy(name, maxlen, "Butterfly Knife");
	if(StrEqual(classname, "weapon_knife_falchion", false))			strcopy(name, maxlen, "Falchion Knife");
	if(StrEqual(classname, "weapon_knife_push", false))				strcopy(name, maxlen, "Shadow Daggers");
	if(StrEqual(classname, "weapon_knife_survival_bowie", false))	strcopy(name, maxlen, "Bowie Knife");
	if(StrEqual(classname, "weapon_knife_ursus", false))			strcopy(name, maxlen, "Ursus Knife");
	if(StrEqual(classname, "weapon_knife_gypsy_jackknife", false))	strcopy(name, maxlen, "Navaja Knife");
	if(StrEqual(classname, "weapon_knife_stiletto", false))			strcopy(name, maxlen, "Stilleto");
	if(StrEqual(classname, "weapon_knife_widowmaker", false))		strcopy(name, maxlen, "Talon Knife");
	if(StrEqual(classname, "weapon_knife_canis", false))			strcopy(name, maxlen, "Survival Knife");
	if(StrEqual(classname, "weapon_knife_cord", false))				strcopy(name, maxlen, "Paracord Knife");
	if(StrEqual(classname, "weapon_knife_skeleton", false))			strcopy(name, maxlen, "Skeleton Knife");
	if(StrEqual(classname, "weapon_knife_outdoor", false))			strcopy(name, maxlen, "Nomad Knife");
}

/**
 *	Returns the weapon name by its definition index.
 *
 *	@param	defindex	The weapon definition index.
 *	@param	name		The weapon's name.
 *	@param	maxlen		The maximum length of the name.
 *
 *	@noreturn
 */
stock void CSGO_GetWeaponNameDefindex(int defindex, char[] name, int maxlen)	{
	switch(defindex)
	{
		case CSGO_Weapon_Ak47:			strcopy(name, maxlen, "Ak-47");
		case CSGO_Weapon_M4A4:			strcopy(name, maxlen, "M4A4");
		case CSGO_Weapon_M4A1_S:		strcopy(name, maxlen, "M4A1-S");
		case CSGO_Weapon_GalilAR:		strcopy(name, maxlen, "Galil AR");
		case CSGO_Weapon_Famas:			strcopy(name, maxlen, "Famas");
		case CSGO_Weapon_SG556:			strcopy(name, maxlen, "SG556");
		case CSGO_Weapon_Aug:			strcopy(name, maxlen, "AUG");
		case CSGO_Weapon_Scout:			strcopy(name, maxlen, "Scout");
		case CSGO_Weapon_AWP:			strcopy(name, maxlen, "AWP");
		case CSGO_Weapon_Scar20:		strcopy(name, maxlen, "Scar-20");
		case CSGO_Weapon_G3SG1:			strcopy(name, maxlen, "G3SG1");
		case CSGO_Weapon_Nova:			strcopy(name, maxlen, "Nova");
		case CSGO_Weapon_SawedOff:		strcopy(name, maxlen, "Sawed-Off");
		case CSGO_Weapon_MAG7:			strcopy(name, maxlen, "MAG-7");
		case CSGO_Weapon_XM1014:		strcopy(name, maxlen, "XM1014");
		case CSGO_Weapon_M249:			strcopy(name, maxlen, "M249");
		case CSGO_Weapon_Negev:			strcopy(name, maxlen, "Negev");
		case CSGO_Weapon_Taser:			strcopy(name, maxlen, "Taser");
		case CSGO_Weapon_C4:			strcopy(name, maxlen, "C4 Bomb");
		case CSGO_Grenade_HEGrenade:	strcopy(name, maxlen, "HE Grenade");
		case CSGO_Grenade_Flashbang:	strcopy(name, maxlen, "Flashbang");
		case CSGO_Grenade_Decoy:		strcopy(name, maxlen, "Decoy");
		case CSGO_Grenade_SmokeGrenade:	strcopy(name, maxlen, "Smokegrenade");
		case CSGO_Grenade_Incendiary:	strcopy(name, maxlen, "Incendiary");
		case CSGO_Grenade_Molotov:		strcopy(name, maxlen, "Molotov");
		case CSGO_Grenade_TAGrenade:	strcopy(name, maxlen, "TA-Grenade");
		case CSGO_Grenade_BreachCharge:	strcopy(name, maxlen, "Breach Charge");
		case CSGO_Weapon_Glock:			strcopy(name, maxlen, "Glock");
		case CSGO_Weapon_USP_S:			strcopy(name, maxlen, "USP-S");
		case CSGO_Weapon_P2000:			strcopy(name, maxlen, "P2000");
		case CSGO_Weapon_P250:			strcopy(name, maxlen, "P250");
		case CSGO_Weapon_Deagle:		strcopy(name, maxlen, "Deagle");
		case CSGO_Weapon_FiveSeven:		strcopy(name, maxlen, "Five-SeveN");
		case CSGO_Weapon_Tec9:			strcopy(name, maxlen, "Tec-9");
		case CSGO_Weapon_Revolver:		strcopy(name, maxlen, "R8 Revolver");
		case CSGO_Weapon_P90:			strcopy(name, maxlen, "P90");
		case CSGO_Weapon_UMP45:			strcopy(name, maxlen, "UMP-45");
		case CSGO_Weapon_MP7:			strcopy(name, maxlen, "MP7");
		case CSGO_Weapon_MP9:			strcopy(name, maxlen, "MP9");
		case CSGO_Weapon_MP5:			strcopy(name, maxlen, "MP5");
		case CSGO_Weapon_Bizon:			strcopy(name, maxlen, "Bizon");
		case CSGO_Knife_T:				strcopy(name, maxlen, "T Knife");
		case CSGO_Knife_CT:				strcopy(name, maxlen, "CT Knife");
		case CSGO_Knife_Gold:			strcopy(name, maxlen, "Golden Knife");
		case CSGO_Knife_Classic:		strcopy(name, maxlen, "Classic Knife");
		case CSGO_Knife_Bayonet:		strcopy(name, maxlen, "Bayonet");
		case CSGO_Knife_Flip:			strcopy(name, maxlen, "Flip Knife");
		case CSGO_Knife_Gut:			strcopy(name, maxlen, "Gut Knife");
		case CSGO_Knife_Karambit:		strcopy(name, maxlen, "Karambit Knife");
		case CSGO_Knife_M9_Bayonet:		strcopy(name, maxlen, "M9 Bayonet Knife");
		case CSGO_Knife_Huntsman:		strcopy(name, maxlen, "Huntsman Knife");
		case CSGO_Knife_Butterfly:		strcopy(name, maxlen, "Butterfly Knife");
		case CSGO_Knife_Falchion:		strcopy(name, maxlen, "Falchion Knife");
		case CSGO_Knife_ShadowDaggers:	strcopy(name, maxlen, "Shadow Daggers");
		case CSGO_Knife_Bowie:			strcopy(name, maxlen, "Bowie Knife");
		case CSGO_Knife_Ursus:			strcopy(name, maxlen, "Ursus Knife");
		case CSGO_Knife_Navaja:			strcopy(name, maxlen, "Navaja Knife");
		case CSGO_Knife_Stiletto:		strcopy(name, maxlen, "Stilleto");
		case CSGO_Knife_Talon:			strcopy(name, maxlen, "Talon Knife");
		case CSGO_Knife_Survival:		strcopy(name, maxlen, "Survival Knife");
		case CSGO_Knife_Paracord:		strcopy(name, maxlen, "Paracord Knife");
		case CSGO_Knife_Skeleton:		strcopy(name, maxlen, "Skeleton Knife");
		case CSGO_Knife_Nomad:			strcopy(name, maxlen, "Nomad Knife");
	}
}

/**
 *	Returns the classname by its definition index.
 *
 *	@param	defindex	The weapon definition index.
 *	@param	name		The weapon's name.
 *	@param	maxlen		The maximum length of the name.
 *
 *	@noreturn
 */
stock void CSGO_GetClassnameDefindex(int defindex, char[] name, int maxlen)	{
	switch(defindex)
	{
		case CSGO_Weapon_Ak47:			strcopy(name, maxlen, "weapon_ak47");
		case CSGO_Weapon_M4A4:			strcopy(name, maxlen, "weapon_m4a1");
		case CSGO_Weapon_M4A1_S:		strcopy(name, maxlen, "weapon_m4a1_silencer");
		case CSGO_Weapon_GalilAR:		strcopy(name, maxlen, "weapon_galilar");
		case CSGO_Weapon_Famas:			strcopy(name, maxlen, "weapon_famas");
		case CSGO_Weapon_SG556:			strcopy(name, maxlen, "weapon_sg556");
		case CSGO_Weapon_Aug:			strcopy(name, maxlen, "weapon_aug");
		case CSGO_Weapon_Scout:			strcopy(name, maxlen, "weapon_ssg08");
		case CSGO_Weapon_AWP:			strcopy(name, maxlen, "weapon_awp");
		case CSGO_Weapon_Scar20:		strcopy(name, maxlen, "weapon_scar20");
		case CSGO_Weapon_G3SG1:			strcopy(name, maxlen, "weapon_g3sg1");
		case CSGO_Weapon_Nova:			strcopy(name, maxlen, "weapon_nova");
		case CSGO_Weapon_SawedOff:		strcopy(name, maxlen, "weapon_sawedoff");
		case CSGO_Weapon_MAG7:			strcopy(name, maxlen, "weapon_mag7");
		case CSGO_Weapon_XM1014:		strcopy(name, maxlen, "weapon_xm1014");
		case CSGO_Weapon_M249:			strcopy(name, maxlen, "weapon_m249");
		case CSGO_Weapon_Negev:			strcopy(name, maxlen, "weapon_negev");
		case CSGO_Weapon_Taser:			strcopy(name, maxlen, "weapon_taser");
		case CSGO_Weapon_C4:			strcopy(name, maxlen, "weapon_c4");
		case CSGO_Grenade_HEGrenade:	strcopy(name, maxlen, "weapon_hegrenade");
		case CSGO_Grenade_Flashbang:	strcopy(name, maxlen, "weapon_flashbang");
		case CSGO_Grenade_Decoy:		strcopy(name, maxlen, "weapon_decoy");
		case CSGO_Grenade_SmokeGrenade:	strcopy(name, maxlen, "weapon_smokegrenade");
		case CSGO_Grenade_Incendiary:	strcopy(name, maxlen, "weapon_incgrenade");
		case CSGO_Grenade_Molotov:		strcopy(name, maxlen, "weapon_molotov");
		case CSGO_Grenade_TAGrenade:	strcopy(name, maxlen, "weapon_tagrenade");
		case CSGO_Grenade_BreachCharge:	strcopy(name, maxlen, "weapon_breachcharge");
		case CSGO_Weapon_Glock:			strcopy(name, maxlen, "weapon_glock");
		case CSGO_Weapon_USP_S:			strcopy(name, maxlen, "weapon_usp_silencer");
		case CSGO_Weapon_P2000:			strcopy(name, maxlen, "weapon_p2000");
		case CSGO_Weapon_P250:			strcopy(name, maxlen, "weapon_p250");
		case CSGO_Weapon_Deagle:		strcopy(name, maxlen, "weapon_deagle");
		case CSGO_Weapon_FiveSeven:		strcopy(name, maxlen, "weapon_fiveseven");
		case CSGO_Weapon_Tec9:			strcopy(name, maxlen, "weapon_ec9");
		case CSGO_Weapon_Revolver:		strcopy(name, maxlen, "weapon_revolver");
		case CSGO_Weapon_P90:			strcopy(name, maxlen, "weapon_p90");
		case CSGO_Weapon_UMP45:			strcopy(name, maxlen, "weapon_ump45");
		case CSGO_Weapon_MP7:			strcopy(name, maxlen, "weapon_mp7");
		case CSGO_Weapon_MP9:			strcopy(name, maxlen, "weapon_mp9");
		case CSGO_Weapon_MP5:			strcopy(name, maxlen, "weapon_mp5sd");
		case CSGO_Weapon_Bizon:			strcopy(name, maxlen, "weapon_bizon");
		case CSGO_Knife_T:				strcopy(name, maxlen, "weapon_knife_t");
		case CSGO_Knife_CT:				strcopy(name, maxlen, "weapon_knife_ct");
		case CSGO_Knife_Gold:			strcopy(name, maxlen, "weapon_knifegg");
		case CSGO_Knife_Classic:		strcopy(name, maxlen, "weapon_knife_css");
		case CSGO_Knife_Bayonet:		strcopy(name, maxlen, "weapon_bayonet");
		case CSGO_Knife_Flip:			strcopy(name, maxlen, "weapon_knife_flip");
		case CSGO_Knife_Gut:			strcopy(name, maxlen, "weapon_knife_gut");
		case CSGO_Knife_Karambit:		strcopy(name, maxlen, "weapon_knife_karambit");
		case CSGO_Knife_M9_Bayonet:		strcopy(name, maxlen, "weapon_knife_m9_bayonet");
		case CSGO_Knife_Huntsman:		strcopy(name, maxlen, "weapon_knife_tactical");
		case CSGO_Knife_Butterfly:		strcopy(name, maxlen, "weapon_knife_butterfly");
		case CSGO_Knife_Falchion:		strcopy(name, maxlen, "weapon_knife_falchion");
		case CSGO_Knife_ShadowDaggers:	strcopy(name, maxlen, "weapon_knife_push");
		case CSGO_Knife_Bowie:			strcopy(name, maxlen, "weapon_knife_survival_bowie");
		case CSGO_Knife_Ursus:			strcopy(name, maxlen, "weapon_knife_ursus");
		case CSGO_Knife_Navaja:			strcopy(name, maxlen, "weapon_knife_gypsy_jackknife");
		case CSGO_Knife_Stiletto:		strcopy(name, maxlen, "weapon_knife_stiletto");
		case CSGO_Knife_Talon:			strcopy(name, maxlen, "weapon_knife_widowmaker");
		case CSGO_Knife_Survival:		strcopy(name, maxlen, "weapon_knife_canis");
		case CSGO_Knife_Paracord:		strcopy(name, maxlen, "weapon_knife_cord");
		case CSGO_Knife_Skeleton:		strcopy(name, maxlen, "weapon_knife_skeleton");
		case CSGO_Knife_Nomad:			strcopy(name, maxlen, "weapon_knife_outdoor");
	}
}

/**
 *	Returns the name of the gloves by its definition index.
 *
 *	@param	defindex		The definition index.
 *	@param	gloves_name		The name of the gloves.
 *	@param	maxlen			The maximum length of the gloves name.
 */
stock void CSGO_GetGlovesNameDefindex(int defindex, char[] gloves_name, int maxlen)
{
	switch(defindex)
	{
		case 4725: strcopy(gloves_name, maxlen, "Broken Fang Gloves");
		case 5027: strcopy(gloves_name, maxlen, "Bloodhound Gloves");
		case 5030: strcopy(gloves_name, maxlen, "Sport Gloves");
		case 5031: strcopy(gloves_name, maxlen, "Driver Gloves");
		case 5032: strcopy(gloves_name, maxlen, "Hand Wraps");
		case 5033: strcopy(gloves_name, maxlen, "Moto Gloves");
		case 5034: strcopy(gloves_name, maxlen, "Specialist Gloves");
		case 5035: strcopy(gloves_name, maxlen, "Hydra Gloves");
	}
}
#endif