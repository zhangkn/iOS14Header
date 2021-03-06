/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDMessageHandlerFailureMetricEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _messageName;
	NSString* _type;

}

@property (copy,readonly) NSString * messageName;              //@synthesize messageName=_messageName - In the implementation block
@property (copy,readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
+(id)identifier;
-(NSString *)messageName;
-(NSString *)type;
-(id)eventName;
-(id)serializedEvent;
-(id)initWithFailureType:(unsigned long long)arg1 messageName:(id)arg2 ;
@end

