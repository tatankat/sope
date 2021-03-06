/*
  Copyright (C) 2000-2005 SKYRIX Software AG

  This file is part of SOPE.

  SOPE is free software; you can redistribute it and/or modify it under
  the terms of the GNU Lesser General Public License as published by the
  Free Software Foundation; either version 2, or (at your option) any
  later version.

  SOPE is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with SOPE; see the file COPYING.  If not, write to the
  Free Software Foundation, 59 Temple Place - Suite 330, Boston, MA
  02111-1307, USA.
*/

#ifndef __SaxDocumentHandler_H__
#define __SaxDocumentHandler_H__

#import <Foundation/NSString.h>
#include <SaxObjC/SaxAttributeList.h>
#include <SaxObjC/SaxLocator.h>

/* deprecated in SAX 2.0beta (replaced by SaxXMLContentHandler) */

@protocol SaxDocumentHandler

- (void)startDocument;
- (void)endDocument;

- (void)startElement:(NSString *)_tagName
  attributes:(id<SaxAttributeList>)_attrs;
- (void)endElement:(NSString *)_tagName;

/* CDATA */

- (void)characters:(unichar *)_chars          length:(int)_len;
- (void)ignorableWhitespace:(unichar *)_chars length:(int)_len;

/* PIs */

- (void)processingInstruction:(NSString *)_pi data:(NSString *)_data;

/* positioning info */

- (void)setDocumentLocator:(id<NSObject,SaxLocator>)_locator;

@end

#endif /* __SaxDocumentHandler_H__ */
