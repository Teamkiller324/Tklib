//==========================================//
// Tklib / Additional.
//==========================================//
#if !defined _tklib_disable_additional

//Get true of false message statements easier.
stock char Bool[][] = {
	"False",
	"True"
},
//Coloured
BoolEx[][] = {
	"{red}False{default}",
	"{green}True{default}"
},
//Useful for simple open/closing door entites. Value 0 = Close, 1 = Open.
DoorSwitch[][] = {
	"close",
	"open"
},
//On - Off switch.
OnOff[][] = {
	"Off",
	"On"
},
//On - Off switch coloured.
OnOffEx[][] = {
	"{red}Off{default}",
	"{green}On{default}"
};

/**
 *	Returns the AdminFlag from the ADMFLAG you specify.
 *
 *	@param adminflags	The adminflag integer.
 */
stock AdminFlag AdmflagToAdminFlag(int adminflags)	{
	AdminFlag adminflag;
	
	switch(adminflags)	{
		case ADMFLAG_RESERVATION:	adminflag = Admin_Reservation;
		case ADMFLAG_GENERIC:		adminflag = Admin_Generic;
		case ADMFLAG_KICK:			adminflag = Admin_Kick;
		case ADMFLAG_BAN:			adminflag = Admin_Ban;
		case ADMFLAG_UNBAN:			adminflag = Admin_Unban;
		case ADMFLAG_SLAY:			adminflag = Admin_Slay;
		case ADMFLAG_CHANGEMAP:		adminflag = Admin_Changemap;
		case ADMFLAG_CONVARS:		adminflag = Admin_Convars;
		case ADMFLAG_CONFIG:		adminflag = Admin_Config;
		case ADMFLAG_CHAT:			adminflag = Admin_Chat;
		case ADMFLAG_VOTE:			adminflag = Admin_Vote;
		case ADMFLAG_PASSWORD:		adminflag = Admin_Password;
		case ADMFLAG_RCON:			adminflag = Admin_RCON;
		case ADMFLAG_CHEATS:		adminflag = Admin_Cheats;
		case ADMFLAG_ROOT:			adminflag = Admin_Root;
		case ADMFLAG_CUSTOM1:		adminflag = Admin_Custom1;
		case ADMFLAG_CUSTOM2:		adminflag = Admin_Custom2;
		case ADMFLAG_CUSTOM3:		adminflag = Admin_Custom3;
		case ADMFLAG_CUSTOM4:		adminflag = Admin_Custom4;
		case ADMFLAG_CUSTOM5:		adminflag = Admin_Custom5;
		case ADMFLAG_CUSTOM6:		adminflag = Admin_Custom6;
	}
	
	return adminflag;
}

/**
 *	Returns the ADMFLAG from the AdminFlag you specify.
 *
 *	@param adminflags	The AdminFlag flag.
 */
stock int AdminFlaglagToAdmflag(AdminFlag adminflags)	{
	int adminflag;
	
	switch(adminflags)	{
		case Admin_Reservation:	adminflag = ADMFLAG_RESERVATION;
		case Admin_Generic:		adminflag = ADMFLAG_GENERIC;
		case Admin_Kick:		adminflag = ADMFLAG_KICK;
		case Admin_Ban:			adminflag = ADMFLAG_BAN;
		case Admin_Unban:		adminflag = ADMFLAG_UNBAN;
		case Admin_Slay:		adminflag = ADMFLAG_SLAY;
		case Admin_Changemap:	adminflag = ADMFLAG_CHANGEMAP;
		case Admin_Convars:		adminflag = ADMFLAG_CONVARS;
		case Admin_Config:		adminflag = ADMFLAG_CONFIG;
		case Admin_Chat:		adminflag = ADMFLAG_CHAT;
		case Admin_Vote:		adminflag = ADMFLAG_VOTE;
		case Admin_Password:	adminflag = ADMFLAG_PASSWORD;
		case Admin_RCON:		adminflag = ADMFLAG_RCON;
		case Admin_Cheats:		adminflag = ADMFLAG_CHEATS;
		case Admin_Root:		adminflag = ADMFLAG_ROOT;
		case Admin_Custom1:		adminflag = ADMFLAG_CUSTOM1;
		case Admin_Custom2:		adminflag = ADMFLAG_CUSTOM2;
		case Admin_Custom3:		adminflag = ADMFLAG_CUSTOM3;
		case Admin_Custom4:		adminflag = ADMFLAG_CUSTOM4;
		case Admin_Custom5:		adminflag = ADMFLAG_CUSTOM5;
		case Admin_Custom6:		adminflag = ADMFLAG_CUSTOM6;
	}
	
	return adminflag;
}

/**
 *	Retrieves a command as integer given its index, from the current console or server command.
 *
 *	@note Argument indexes start at 1; 0 retrieves the command name.
 *	@param	argnum		Argument number to retrieve.
 *	@return				Integer of the returned argument.
 */
stock int GetCmdInt(int argnum)	{
	char buffer[256];
	GetCmdArg(argnum, buffer, sizeof(buffer));
	return StringToInt(buffer);
}

/**
 *	Retrieves a command as boolean given its index, from the current console or server command.
 *
 *	@note Argument indexes start at 1; 0 retrieves the command name.
 *	@param	argnum		Argument number to retrieve.
 *
 *	@return				Integer of the returned argument.
 */
stock bool GetCmdBool(int argnum)	{
	char buffer[256];
	GetCmdArg(argnum, buffer, sizeof(buffer));
	return view_as<bool>(StringToInt(buffer);
}

/**
 *	Turns an integer into a floating point.
 *
 *	@param value	Float to convert.
 *	@return			Integer result, or 0 on error. 
 */
stock int FloatToInt(float value)	{
	char buffer[96];
	FloatToString(value, buffer, sizeof(buffer));
	return StringToInt(buffer);
}

/**
 *	Tests whether a string is found in another string.
 *	This is same as StrContains but no need to use the -1 at the end, now just returns true or false.
 *
 *	@param	str				String to search in.
 *	@param	substr			Substring to find inside the original string.
 *	@param	caseSensitive	if true (by default), search is case sensitive. If false, search is case insensitive.
 *	*/
stock bool StrContainsEx(const char[] str, const char[] substr, bool caseSensitive=true)	{
	if(StrContains(str, substr, caseSensitive) > -1)
		return true;
	return false;
}

/**
 *	Same as SQL_Connect but this is if you just want a temporary connection.
 *
 *	@param		confname		The name of the database config connection.
 *	@param		persistent		If true, it will try to use a previous persistent connection.
 *	@param		debug			If true, it will show message if the connection returned 'null' (Error) or if it succeeded.
 */
stock Database SQL_Connect2(const char[] confname, bool persistent=true, bool dbg=false)	{
	char error[256];
	Database database = SQL_Connect(confname, persistent, error, sizeof(error));
	if(dbg)	{
		switch(database == null)	{
			case true: PrintToServer("[SQL_Connect2] : Connection to database \"%s\" had an error (%s)", confname, error);
			case false: PrintToServer("[SQL_Connect2] : Connection to database \"%s\" succeeded!", confname);
		}
	}
	
	return database;
}

/**
 *	Returns GetRandomInt(0, 1) in boolean.
 */
stock bool GetRandomBool()	{
	return view_as<bool>(GetRandomInt(0, 1));
}

/**
 *	Same as CreateNative but you use 2 natives before forwarding it to a callback.
 *	Useful for having 2 natives that uses the same forward.
 *	Paired with MarkNativeAsOptionalEx.
 *
 *	@param	native1		Native 1.
 *	@param	native2		Native 2.
 *	@param	func		Native callback.
 */
stock void CreateNativeEx(const char[] native1, const char[] native2, NativeCall func)	{
	CreateNative(native1, func);
	CreateNative(native2, func);
}

/**
 *	Same as MarkNativeAsOptional but you use 2 natives before marking it optional.
 *	Useful for cleaning up code and also for 2 natives that use same forward.
 *	Paired with CreateNativeEx.
 */
stock void MarkNativeAsOptionalEx(const char[] native1, const char[] native2)	{
	MarkNativeAsOptional(native1);
	MarkNativeAsOptional(native2);
}

/**
 *	Functions the same as CreateNative and MarkNativeAsOptional.
 *	Useful for having a fairly 'clean' code.
 *
 *	@param	name	The dynamic native name.
 *	@param	func	The dynamic native callback.
 */
stock void CreateNativeEx2(const char[] name, NativeCall func)	{
	CreateNative(name, func);
	MarkNativeAsOptional(name);
}

/**
 *	Alternative to strcopy, adds ability to use extra parameters.
 *	Pretty much does the same as Format.
 *
 *	@param	dest		Destination buffer to copy to.
 *	@param	destLen		Destination buffer length (includes null terminator).
 *	@param	source		Source string to copy from.
 *
 *	@return				Number of cells written.
 */
stock int strcopyEx(char[] dest, int destLen, const char[] source, any...)	{
	char format[256];
	strcopy(format, sizeof(format), source);
	VFormat(format, sizeof(format), 4);
	strcopy(dest, destLen, format);
}

/**
 *	Auto-switches the bool value on/off.
 *	Example: if the value is on, it will return off.
 *	If it's off, it will return on.
 *	Useful for toggling functions in plugins.
 *
 *	@param	value		The value to toggle.
 *	@return	Returns the new value.
 */
stock bool AutoSwitch(bool value)	{
	switch(value)	{
		case true: return false;
		case false: return true;
	}
}

/**
 *	Same as AddFileToDownloadsTable but adds support for additional parameters.
 *
 *	@param	filename	File path.
 *	@param	...			Additional parameters.
 */
stock bool AddFileToDownloadsTableEx(const char[] filename, any ...)	{
	if(IsValidString(filename))	{
		char download[256];
		VFormat(download, sizeof(download), filename, 2);
		AddFileToDownloadsTable(download);
		return true;
	}
	
	return false;
}

/**
 *	Adds the specified files within the folder directory onto the downloads table.
 *
 *	@param	path		The path directory.
 *	@param	precache	Should the files be precached?.
 *	@param	type		The type of file to precache. (materials, models, decal, sound, etc.)
 *	@param	filter		If non-empty, this will filter to require the meeting to be added to the dl table.
 *	@param	dbg			If the path is valid, this is useful for debugging seeing what got added to the dl table.
 *
 *	@error	If the path is invalid or this failed in general, this returns false.
 */
stock bool AddFolderToDownloadsTable(const char[] path, bool precache=false, const char[] type="", const char[] filter="", bool dbg=false)	{
	DirectoryListing DLPath = OpenDirectory(path);
	bool success = false, invalid_filter = false;
	
	switch(DLPath == null)	{
		case false:	{
			char FileDir[64], FileDL[256];
			
			while(DLPath.GetNext(FileDir, sizeof(FileDir)))	{
				if(!StrEqual(FileDir, ".") && !StrEqual(FileDir, ".."))	{
					invalid_filter = (!StrEqual(filter, "") && !StrContainsEx(FileDir, filter));
					
					if(!invalid_filter)	{
						AddFileToDownloadsTableEx(FileDL, "%s/%s", path, FileDir);
						if(precache && IsValidString(type))	{
							if(StrContains(type, "model", false) > 0)
								PrecacheModel(FileDL, true);
							if(StrContains(type, "decal", false) > 0)
								PrecacheDecal(FileDL, true);
							if(StrContains(type, "sound", false) > 0)
								PrecacheSound(FileDL, true);
						}
						
						if(dbg)
							PrintToServer("[AddFolderToDownloadsTable] : %s/%s", path, FileDir);
					}
				}
			}
			
			success = true;
		}
		case true:	{
			if(dbg)
				PrintToServer("[AddFolderToDownloadsTable] : failed due to invalid path (%s)", path);
		}
	}
	
	delete DLPath;
	return	success;
}

/**
 *	Turns a string into a boolean.
 *
 *	@param	str		String to convert.
 *	@param	nBase	Numerical base to use. 10 is default.
 *
 *	@return	Boolean conversion of string or false on failure.
 */
stock bool StringToBool(const char[] str, int nBase=10)	{
	return view_as<bool>(StringToInt(str, nBase));
}

/**
 *	Adds ConVar flag(s).
 *
 *	@param	cvar	The ConVar to change.
 *	@param	flags	The flags to add.
 *
 *	@error	If the ConVar is invalid, this returns false.
 */
stock bool AddConVarFlags(ConVar cvar, int flags)	{
	if(cvar == null)
		return	false;
	
	int flag = cvar.Flags;
	flag |= flags;
	cvar.Flags = flags;
	return true;
}

/**
 *	Adds ConVar flag(s).
 *
 *	@param	cvar	The ConVar name to change.
 *	@param	flags	The flags to add.
 *
 *	@error	If the ConVar is invalid, this returns false.
 */
stock bool AddConVarFlagsEx(const char[] convar, int flags)	{
	ConVar cvar = FindConVar(convar);
	if(cvar == null)	{
		delete cvar;
		return	false;
	}
	
	int flag = cvar.Flags;
	flag |= flags;
	cvar.Flags = flags;
	delete cvar;
	return true;
}

/**
 *	Removes ConVar flag(s).
 *
 *	@param	cvar	The ConVar to change.
 *	@param	flags	The flags to remove.
 *
 *	@error	If the ConVar is invalid, this returns false.
 */
stock bool RemoveConVarFlags(ConVar cvar, int flags)	{
	if(cvar == null)
		return	false;
	
	int flag = cvar.Flags;
	flag &= ~flags;
	cvar.Flags = flag;
	return true;
}

/**
 *	Removes ConVar flag(s).
 *
 *	@param	cvar	The ConVar name to change.
 *	@param	flags	The flags to remove.
 *
 *	@error	If the ConVar is invalid, this returns false.
 */
stock bool RemoveConVarFlagsEx(const char[] convar, int flags)	{
	ConVar cvar = FindConVar(convar);
	if(cvar == null)	{
		delete cvar;
		return	false;
	}
	
	int flag = cvar.Flags;
	flag &= ~flags;
	cvar.Flags = flag;
	delete cvar;
	return true;
}

/**
 *	Sends a SayText2 usermessage to a client.
 *
 *	@param	client		Users index.
 *	@param	index		Sender index.
 *	@param	message		Message.
 *
 *	@error	If the user is invalid or the procedure failed/not supported for the current gamemod, this returns false.
 */
stock bool SayText2(int client, int index=-1, const char[] message, any ...) {
	if(!Tklib_IsValidClient(client))
		return	false;
	
	if(index != -1)	{
		if(!Tklib_IsValidClient(index))
			return	false;
	}
	
	if(GetFeatureStatus(FeatureType_Native, "GetUserMessageType") == FeatureStatus_Unavailable
	|| GetUserMessageId("SayText2") == INVALID_MESSAGE_ID)
		return false;
	
	Handle msg = null;
	bool success = false;
	
	if((msg = StartMessageOne("SayText2", client, USERMSG_RELIABLE|USERMSG_BLOCKHOOKS)) != null)	{
		char format[256];
		VFormat(format, sizeof(format), message, 4);
		
		switch(GetUserMessageType())	{
			case	UM_Protobuf:	{
				Protobuf pb = UserMessageToProtobuf(msg);
				pb.SetInt("ent_idx", index);
				pb.SetBool("chat", true);
				pb.SetString("msg_name", format);
				pb.AddString("params", "");
				pb.AddString("params", "");
				pb.AddString("params", "");
				pb.AddString("params", "");
			}
			case	UM_BitBuf:	{
				BfWrite bf = UserMessageToBfWrite(msg);
				bf.WriteByte(index);
				bf.WriteByte(true);
				bf.WriteString(format);
			}
		}
	
		EndMessage();
		success = true;
	}
	
	return success;
}

/**
 *	Sends a SayText2 usermessage to everyone.
 *
 *	@param	index		Sender index.
 *	@param	message		Message.
 *
 *	@noreturn
 */
stock void SayText2All(int index=-1, const char[] message, any ...)	{
	char format[256];
	VFormat(format, sizeof(format), message, 2);
	
	for(int client = 1; client < MaxClients; client++)	{
		if(Tklib_IsValidClient(client))
			SayText2(client, index, format);
	}
}

/**
 *	Returns a cell in boolean from native parameter.
 *
 *	@param	param	Parameter number, starting from 1.
 *
 *	@return			Boolean value from cell at the parameter number.
 *
 *	@error			Invalid paramteter number or calling from non-native function.
 */
stock bool GetNativeBool(int param)	{
	return view_as<bool>(GetNativeCell(param));
}

/**
 *	Returns if the string is valid and is not NULL.
 *
 *	@param	str	The string to check.
 *
 *	@return	If the string is empty, this returns false.
 */
stock bool IsValidString(const char[] str)	{
	return (!StrEqual(str, "") && strlen(str) > 0);
}

/**
 *	Executes a simply query and returns a query Handle for
 *	recieving the results.
 *	This one is allows for additional parameters, making Format not required.
 *
 *	@param		database	The database handle.
 *	@param		query		The query string.
 *
 *	@return		A new Query Handle on success, else nulll.
 *
 *	@error		If database is invalid, this returns null.
 */
stock DBResultSet SQL_QueryEx(Handle database, const char[] query, any ...)	{
	if(database != null)	{
		char format[8192];
		VFormat(format, sizeof(format), query, 3);
		return SQL_Query(database, format, -1);
	}
	
	return null;
}

/**
 *	Returns a cell in address from native parameter.
 *
 *	@param	param	Parameter number, starting from 1.
 *
 *	@return			Address value from cell at the parameter number.
 *
 *	@error			Invalid paramteter number or calling from non-native function.
 */
stock Address GetNativeAddress(int param)	{
	return view_as<Address>(GetNativeCell(param));
}


/**
 *	Returns if SourceBans is loaded.
 *
 *	@param	comms	If true, this checks if SourceComms of SourceBans is loaded instead.
 */
stock bool IsSourceBansLoaded(bool comms = false)	{
	switch(comms)	{
		case true:	{
			if(GetFeatureStatus(FeatureType_Native, "SourceComms_SetClientMute") == FeatureStatus_Available)
				return true;
			
			if(GetFeatureStatus(FeatureType_Native, "SourceComms_SetClientGag") == FeatureStatus_Available)
				return true;
			
			if(GetFeatureStatus(FeatureType_Native, "SourceComms_GetClientMuteType") == FeatureStatus_Available)
				return true;
			
			if(GetFeatureStatus(FeatureType_Native, "SourceComms_GetClientGagType") == FeatureStatus_Available)
				return true;
		}
		
		case false:	{
			if(GetFeatureStatus(FeatureType_Native, "SBBanPlayer") == FeatureStatus_Available)
				return true;
			
			if(GetFeatureStatus(FeatureType_Native, "SBPP_BanPlayer") == FeatureStatus_Available)
				return true;
			
			if(GetFeatureStatus(FeatureType_Native, "SBPP_ReportPlayer") == FeatureStatus_Available)
				return true;
		}
	}
	
	return false;
}

/**
 *	Return an appropriate name for the source colour tag.
 *
 *	@param	source	Source string to check.
 *	@param	colour	Buffer string to store the colour name.
 *	@param	maxlen	Maximum length of the buffer string.
 *
 *	@noreturn.
 */
stock void GetNameFromColourTag(const char[] source, char[] colour, int maxlen)
{
	if(StrEqual(source, "{default}", false))
		strcopy(colour, maxlen, "Default");
	
	if(StrEqual(source, "{darkred}", false))
		strcopy(colour, maxlen, "Dark Red");
	
	if(StrEqual(source, "{green}", false))
		strcopy(colour, maxlen, "Green");
	
	if(StrEqual(source, "{lightgreen}", false))
		strcopy(colour, maxlen, "Light Green");
	
	if(StrEqual(source, "{red}", false))
		strcopy(colour, maxlen, "Red");
	
	if(StrEqual(source, "{blue}", false))
		strcopy(colour, maxlen, "Blue");
	
	if(StrEqual(source, "{olive}", false))
		strcopy(colour, maxlen, "Olive");
	
	if(StrEqual(source, "{lime}", false))
		strcopy(colour, maxlen, "Lime");
	
	if(StrEqual(source, "{lightred}", false))
		strcopy(colour, maxlen, "Light Red");
	
	if(StrEqual(source, "{purple}", false))
		strcopy(colour, maxlen, "Purple");
	
	if(StrEqual(source, "{grey}", false))
		strcopy(colour, maxlen, "Grey");
	
	if(StrEqual(source, "{yellow}", false))
		strcopy(colour, maxlen, "Yellow");
	
	if(StrEqual(source, "{orange}", false))
		strcopy(colour, maxlen, "Orange");
	
	if(StrEqual(source, "{bluegrey}", false))
		strcopy(colour, maxlen, "Blue Grey");
	
	if(StrEqual(source, "{lightblue}", false))
		strcopy(colour, maxlen, "Light Blue");
	
	if(StrEqual(source, "{darkblue}", false))
		strcopy(colour, maxlen, "Dark Blue");
	
	if(StrEqual(source, "{grey2}"))
		strcopy(colour, maxlen, "Grey 2");
	
	if(StrEqual(source, "{orchid}", false))
		strcopy(colour, maxlen, "Orchid");
	
	if(StrEqual(source, "{lightred2}", false))
		strcopy(colour, maxlen, "Light Red 2");
}

/**
 *	Converts an integer into a floating point.
 *
 *	@param	value	The integer to convert.
 */
stock float IntToFloat(int value)	{
	char format[128];
	Format(format, sizeof(format), "%i", value);
	return StringToFloat(format);
}

/**
 *	Returns the servers ip.
 *
 *	@param	ip		The servers ip address.
 *	@param	maxlen	The servers ip address string max length.
 *
 *	@error	If the ip address cvar wasn't found, this returns false.
 */
stock bool GetServerIP(char[] ip, int maxlen)	{
	ConVar cvar = FindConVar("hostip");
	bool valid = false;
	if(cvar != null)	{
		cvar.GetString(ip, maxlen);
		valid = true;
	}
	
	delete cvar;
	return valid;
} 

/**
 *	Returns the servers port.
 *
 *	@param	port	The servers port.
 *	@param	maxlen	The servers port string max length.
 *
 *	@error	If the port cvar wasn't found, this returns false.
 */
stock bool GetServerPort(char[] port, int maxlen)	{
	ConVar cvar = FindConVar("hostport");
	bool valid = false;
	if(cvar != null)	{
		cvar.GetString(port, maxlen);	
		valid = true;
	}
	
	delete cvar;
	return valid;
}

/**
 *	Returns the servers hostname.
 *
 *	@param	hostname	The servers hostname.
 *	@param	maxlen		The servers nostname max length.
 *
 *	@error	If the hostname cvar wasn't found, this returns false.
 */
stock bool GetServerHostname(char[] hostname, int maxlen)	{
	ConVar cvar = FindConVar("hostname");
	bool valid = false;
	if(cvar != null)	{
		cvar.GetString(hostname, maxlen);
		valid = true;
	}
	
	delete cvar;
	return valid;
}

#endif