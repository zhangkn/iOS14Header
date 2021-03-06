/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OIXMLNode : NSObject <NSCopying>

@property (readonly) NSString * name; 
@property (retain) NSString * stringValue; 
@property (readonly) NSString * XMLString; 
@property (readonly) NSString * openingTagString; 
@property (readonly) NSString * contentString; 
@property (readonly) NSString * closingTagString; 
+(void)_escapeCharacters:(const unsigned short*)arg1 amount:(unsigned)arg2 escapeWhiteSpaces:(BOOL)arg3 inString:(id)arg4 appendingToString:(CFStringRef)arg5 ;
+(void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(CFStringRef)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)contentString;
-(NSString *)stringValue;
-(NSString *)name;
-(id)description;
-(NSString *)openingTagString;
-(NSString *)XMLString;
-(NSString *)closingTagString;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
@end

