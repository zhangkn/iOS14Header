/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDEventModel.h>

@class NSString, NSData;

@interface HMDSignificantTimeEventModel : HMDEventModel

@property (nonatomic,retain) NSString * significantEvent; 
@property (nonatomic,retain) NSData * offset; 
+(id)properties;
+(id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4 ;
@end

