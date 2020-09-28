/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class NSString;

@interface STWifiStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	BOOL _wifiActive;
	unsigned long long _signalStrengthBars;
	BOOL _associatedToIOSHotspot;

}

@property (getter=isWifiActive,nonatomic,readonly) BOOL wifiActive;                                      //@synthesize wifiActive=_wifiActive - In the implementation block
@property (nonatomic,readonly) unsigned long long signalStrengthBars;                                    //@synthesize signalStrengthBars=_signalStrengthBars - In the implementation block
@property (getter=isAssociatedToIOSHotspot,nonatomic,readonly) BOOL associatedToIOSHotspot;              //@synthesize associatedToIOSHotspot=_associatedToIOSHotspot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isWifiActive;
-(unsigned long long)signalStrengthBars;
-(BOOL)isAssociatedToIOSHotspot;
-(id)diffFromData:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithWifiActive:(BOOL)arg1 signalStrengthBars:(unsigned long long)arg2 associatedToIOSHotspot:(BOOL)arg3 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)hash;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)dataByApplyingDiff:(id)arg1 ;
@end
