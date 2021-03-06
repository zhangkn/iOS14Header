/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <Foundation/NSMutableString.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXAttributedString : NSMutableString <NSCopying> {

	CFAttributedStringRef _string;

}
+(id)string;
+(id)axAttributedStringWithString:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)string;
-(void)appendString:(id)arg1 ;
-(id)attributedString;
-(void)appendFormat:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)removeAttributes:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)appendStringOrAXAttributedString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributesAtIndex:(long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)isAXAttributedString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)lowercaseString;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(id)uppercaseString;
-(void)replaceString:(CFStringRef)arg1 ;
-(void)dealloc;
-(BOOL)hasAttribute:(id)arg1 ;
-(unsigned long long)length;
-(id)initWithStringOrAttributedString:(id)arg1 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(id)initWithCFAttributedString:(CFAttributedStringRef)arg1 ;
-(id)axAttributedStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateAttributesUsingBlock:(/*^block*/id)arg1 ;
-(id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1 ;
-(id)coalescedAttributes;
-(id)stringByTrimmingCharactersInSet:(id)arg1 ;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)axStringByReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)appendAXAttributedString:(id)arg1 ;
-(id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1 ;
-(BOOL)hasAttributes;
-(id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(void)setAttributes:(id)arg1 ;
-(id)coalescedFontAttributes;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(NSRange)arg3 ;
-(void)convertAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(id)axAttributedStringDescription;
-(void)setAttributes:(id)arg1 withRange:(NSRange)arg2 ;
-(id)description;
-(const CFAttributedStringRef)cfAttributedString;
-(id)attributeValueForKey:(id)arg1 ;
@end

