/*
    TheengsDecoder - Decode things and devices

    Copyright: (c)Florian ROBERT

    This file is part of TheengsDecoder.

    TheengsDecoder is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    TheengsDecoder is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _THEENGS_H_
#define _THEENGS_H_

#ifdef __cplusplus
extern "C" {
#endif

void* Theengs_NewDecoder();
void Theengs_DestroyDecoder(void* decoder);
const char* Theengs_DecodeBLE(void* decoder, const char* json_data);
const char* Theengs_GetProperties(void* decoder, const char* model_id);
const char* Theengs_GetAttribute(void* decoder, const char* model_id, const char* attribute);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // _THEENGS_H_