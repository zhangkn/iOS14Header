/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEIKEv2SPI.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying> {

	unsigned _value;

}

@property (assign) unsigned value;              //@synthesize value=_value - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithValue:(unsigned)arg1 ;
-(void)setValue:(unsigned)arg1 ;
-(unsigned)value;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
