/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface WiFiUsageInterfaceStats : NSObject <NSCopying> {

	unsigned long long _txBytes;
	unsigned long long _rxBytes;
	NSDate* _timestamp;

}

@property (assign,nonatomic) unsigned long long txBytes;              //@synthesize txBytes=_txBytes - In the implementation block
@property (assign,nonatomic) unsigned long long rxBytes;              //@synthesize rxBytes=_rxBytes - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
+(id)statsForInterfaceName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTxBytes:(unsigned long long)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(unsigned long long)rxBytes;
-(unsigned long long)txBytes;
-(void)setRxBytes:(unsigned long long)arg1 ;
@end

