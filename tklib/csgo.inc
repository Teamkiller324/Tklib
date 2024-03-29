stock char CSGO_GetTeamStringName[][]	=	{
	"{grey}Unassigned{default}",
	"{grey}Spectators{default}",
	"{orange}Terrorists{default}",
	"{bluegrey}Counter-Terrorists{default}"
};

stock char CSGO_GetTeamColour[][]	=	{
	"{grey}",
	"{grey}",
	"{orange}",
	"{bluegrey}"
};

enum	CSGORank	{
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

//Soon will be finished on.
enum	CSGORankType	{
	CSGORankType_Competitive	=	7
}

#define	CSGORank(%1)		view_as<CSGORank>(%1)
#define	CSGORankType(%1)	view_as<CSGORankType>(%1)

/**
 *	Tk Libraries.
 *	Fixes the StatTrak and Skins function not working.
 *
 *	@param weapon		Weapon entity.
 *	@return				Returns false on failure, true otherwise.
 */
stock bool CSGO_FixWeaponId(any weapon)	{
	if(!IsValidEntityEx(weapon))
		return	false;
	
	//Fixes skin not appearing.
	static int IDHigh = 16384;
	SetEntProp(int(weapon), Prop_Send, "m_iItemIDHigh", IDHigh++);
	SetEntProp(int(weapon), Prop_Send, "m_iItemIDLow", -1);
	return	true;
}

/**
 *	Tk Libraries.
 *	Set the Weapon skin.
 *
 *	@param	weapon		Weapon entity.
 *	@param	index		The skin index.
 *	@return	If the weapon entity is invalid, nothing will happen.
 */
stock bool CSGO_SetWeaponSkin(int weapon, int index)	{
	if(!HasEntPropEx(weapon, Prop_Send, "m_nFallbackPaintKit"))
		return	false;
	
	SetEntProp(weapon, Prop_Send, "m_nFallbackPaintKit", index);
	return	true;
}

/**
 *	Tk Libraries.
 *	Returns the Weapon skin.
 *
 *	@param weapon		Weapon entity.
 *	@param index		The Skin index.
 *	@error				If the weapon or painkit is invalid, it will return -1.
 */
stock int CSGO_GetWeaponSkin(int weapon)	{
	if(!HasEntPropEx(weapon, Prop_Send, "m_nFallbackPaintKit"))
		return	-1;
	
	return	GetEntProp(weapon, Prop_Send, "m_nFallbackPaintKit");
}

/**
 *	Tk Libraries.
 *	Set the Weapon StatTrak.
 *
 *	@param weapon		Weapon entity.
 *	@param value		The 'kill' track amount. If -1 (by default), will be disabled.
 *	@return				Returns false on failure, true otherwise.
 */
stock bool CSGO_SetWeaponStatTrak(int weapon, int value=-1)	{
	if(!HasEntPropEx(weappon, Prop_Send, "m_nFallbackStatTrak"))
		return	false;
	
	SetEntProp(weapon, Prop_Send, "m_nFallbackStatTrak", value);
	return	true;
}

/**
 *	Tk Libraries.
 *	Returns the Weapon StatTrak.
 *
 *	@param weapon		Weapon entity.
 *	@error				If weapon or stattrak module is invalid, it will return -1.
 */
stock int CSGO_GetWeaponStatTrak(int weapon)	{
	if(!HasEntPropEx(weapon, "m_nFallbackStatTrak"))
		return	-1;
	
	return	GetEntProp(weapon, Prop_Send, "m_nFallbackStatTrak");
}

/**
 *	Tk Libraries.
 *	Set the weapon owner.
 *
 *	@param weapon		Weapon entity.
 *	@param client		Users index.
 *	@return				Returns false on failure, true otherwise.
 */
stock bool CSGO_SetWeaponOwner(any weapon, int client)	{
	if(!HasEntPropEx(int(weapon), Prop_Send, "m_iAccountID"))
		return	false;
	SetEntProp(int(weapon), Prop_Send, "m_iAccountID", GetSteamAccountID(client));
	
	if(!HasEntPropEx(int(weapon), Prop_Send, "m_hOwnerEntity"))
		return	false;
	SetEntPropEnt(int(weapon), Prop_Send, "m_hOwnerEntity", client);
	
	if(!HasEntPropEx(int(weapon), Prop_Send, "m_hPrevOwner"))
		return	false;
	SetEntPropEnt(int(weapon), Prop_Send, "m_hPrevOwner", -1);
	
	return	true;
}

/**
 *	Tk Libraries.
 *	Set the weapon quality.
 *
 *	@param weapon		Weapon entity.
 *	@param index		Quality index value. By default set to 3, adding a star to the weapon name.
 */
stock bool CSGO_SetWeaponQuality(int weapon, int index=3)	{
	if(!HasEntPropEx(weapon, Prop_Send, "m_iEntityQuality"))
		return	false;
	
	SetEntProp(weapon, Prop_Send, "m_iEntityQuality", index);
	return	true;
}

/**
 *	Tk Libraries.
 *	Set the weapon nametag
 *
 *	@param weapon		Weapon entity.
 *	@param nametag		A Nametag or string of characters you specify.
 *	@param maxlen		Max character length for the string buffer.
 *	@return				Returns false on failure, true otherwise.
 */
stock bool CSGO_SetWeaponNametag(int weapon, const char[] nametag)	{
	return	HasEntPropEx(weapon, Prop_Send, "m_szCustomName") ? SetEntPropStringEx(weapon, Prop_Send, "m_szCustomName", nametag):false;
}

/**
 *	Tk Libraries.
 *	Returns the weapon nametag
 *
 *	@param weapon		Weapon entity.
 *	@param buffer		A Nametag or string of characters you specify.
 *	@param maxlen		Length of the buffer.
 *	@return				Returns false on failure, true otherwise.
 */
stock bool CSGO_GetWeaponNametag(int weapon, char[] buffer, int maxlen)	{
	return	HasEntPropEx(weapon, Prop_Send, "m_szCustomName") ? GetEntPropStringEx(weapon, Prop_Send, "m_szCustomName", nametag, maxlen):false;
}

/**
 *	Tk Libraries.
 *	Returns the competitive rank offset. [CS:GO]
 */
stock int CSGO_GetCompetitiveOffset()	{
	return	FindSendPropInfo("CCSPlayerResource", "m_iCompetitiveRanking");
}

/**
 *	Tk Libraries.
 *	Set the competitive rank offset. [CS:GO]
 *	@param entity		The target entity.
 *	@param array			array, example arraytest[MAXPLAYERS+1] without the [MAXPLAYERS+1]
 */
stock void CSGO_SetCompetitiveOffset(any entity, const CSGORank[] array)	{
	SetEntDataArray(int(entity), CSGO_GetCompetitiveOffset(), int(array), MAXPLAYERS+1);
}

/**
 *	Returns the competitive rank type. [CS:GO]
 */
stock CSGORankType CSGO_GetCompetitiveType()	{
	return	CSGORankType(FindSendPropInfo("CCSPlayerResource",	"m_iCompetitiveRankType"));
}

/**
 *	Tk Libraries.
 *	Set the competitive rank type. [CS:GO]
 *
 *	@param entity		The target entity.
 *	@param array			array, example arraytest[MAXPLAYERS+1] without the [MAXPLAYERS+1]
 */
stock void CSGO_SetCompetitiveType(any entity, const CSGORankType[] array)	{
	SetEntDataArray(int(entity), CSGO_GetCompetitiveType(), int(array), MAXPLAYERS+1, 1);
}

/**
 *	Tk Libraries.
 *	Set the users arms model.
 *
 *	@param client		Users index.
 *	@param arms			The Arm model path.
 *	@return				Returns false on failure, true otherwise.
 */
stock bool CSGO_SetArmModel(int client, const char[] arms)	{
	return	HasEntPropEx(client, Prop_Send, "m_szArmsModel") ? SetEntPropStringEx(client, Prop_Send, "m_szArmsModel", name):false;
}

/**
 *	Tk Libraries.
 *	Return the users arms model.
 *
 *	@param client		Users index.
 *	@param name			The Arm model path.
 *	@return				Returns false on failure, true otherwise.
 */
stock bool CSGO_GetArmModel(int client, char[] buffer, int maxlen)	{
	return	HasEntProp(client, Prop_Send, "m_szArmsModel") ? GetEntPropStringEx(client, Prop_Send, "m_szArmsModel", buffer, maxlen):false;
}