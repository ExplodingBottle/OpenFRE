//  OpenFRE - The free Roblox executor
//  Copyright (C) 2022  kevlu8
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include "include.hpp"

/*
Grabs process ID of the specified program

@param Window Title
@param processid

@return None
*/
void getProcID(_In_ LPCSTR windowTitle, _Out_ DWORD& processID);

/*
Displays error messages in case of injection failure, then exits the program

@param Error Title
@param Error Message

@return None
*/
void errorMsg(_In_ LPCSTR errorTitle, _In_ LPCSTR errorMsg);

/*
Checks to see if a file exists

@param Name of file

@return True if file exists, false if it doesn't
*/
bool fileExists(_In_ std::string fileName);

/*
Main function, injects DLL into Roblox memory

@return True if success, false if error.
*/
bool inject();