/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@interface EKCompatibility : NSObject
+(void)perform:(/*^block*/id)arg1 whileSimulatingLegacyBehaviors:(BOOL)arg2 ;
+(BOOL)simulateLegacyBehaviors;
+(void)performWhileSimulatingLegacyBehaviors:(/*^block*/id)arg1 ;
+(void)setSimulateLegacyBehaviors:(BOOL)arg1 ;
+(BOOL)isProgramSDKAtLeast:(SCD_Struct_EK2)arg1 ;
@end
