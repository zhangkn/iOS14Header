/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLBinaryKey : NSObject <NSCopying> {

	SCD_Struct_MT19 _hash;

}

@property (readonly) const SCD_Struct_MT19* value; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHash:(const SCD_Struct_MT19*)arg1 ;
-(const SCD_Struct_MT19*)value;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToKey:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

