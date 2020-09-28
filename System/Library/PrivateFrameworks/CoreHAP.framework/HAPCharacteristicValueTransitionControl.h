/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPCharacteristicValueTransitionFetch, HAPCharacteristicValueTransitionStart, NSString;

@interface HAPCharacteristicValueTransitionControl : NSObject <NSCopying, HAPTLVProtocol> {

	HAPCharacteristicValueTransitionFetch* _transitionFetch;
	HAPCharacteristicValueTransitionStart* _transitionStart;

}

@property (nonatomic,retain) HAPCharacteristicValueTransitionFetch * transitionFetch;              //@synthesize transitionFetch=_transitionFetch - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueTransitionStart * transitionStart;              //@synthesize transitionStart=_transitionStart - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)naturalLightingActiveTransitionContextForCharacteristic:(id)arg1 ;
-(id)naturalLightingEnabledForCharacteristic:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)setTransitionStart:(HAPCharacteristicValueTransitionStart *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithTransitionFetch:(id)arg1 transitionStart:(id)arg2 ;
-(HAPCharacteristicValueTransitionStart *)transitionStart;
-(void)setTransitionFetch:(HAPCharacteristicValueTransitionFetch *)arg1 ;
-(HAPCharacteristicValueTransitionFetch *)transitionFetch;
@end
