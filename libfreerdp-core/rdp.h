/**
 * FreeRDP: A Remote Desktop Protocol Client
 * RDP Core
 *
 * Copyright 2011 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __RDP_H
#define __RDP_H

#include <freerdp/freerdp.h>
#include <freerdp/utils/stream.h>

/* Security Header Flags */
#define SEC_EXCHANGE_PKT		0x0001
#define SEC_ENCRYPT			0x0008
#define SEC_RESET_SEQNO			0x0010
#define	SEC_IGNORE_SEQNO		0x0020
#define	SEC_INFO_PKT			0x0040
#define	SEC_LICENSE_PKT			0x0080
#define SEC_LICENSE_ENCRYPT_CS		0x0200
#define SEC_LICENSE_ENCRYPT_SC		0x0200
#define SEC_REDIRECTION_PKT		0x0400
#define SEC_SECURE_CHECKSUM		0x0800
#define SEC_FLAGSHI_VALID		0x8000

void rdp_read_security_header(STREAM* s, uint16* flags);
void rdp_write_security_header(STREAM* s, uint16 flags);

#endif /* __RDP_H */
