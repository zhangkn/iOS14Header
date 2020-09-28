/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSNumber;

@interface HMDAccessorySettingMergeStrategy : HMFObject {

	NSNumber* _conflictValue;
	long long _strategy;

}

@property (nonatomic,readonly) NSNumber * conflictValue;              //@synthesize conflictValue=_conflictValue - In the implementation block
@property (nonatomic,readonly) long long strategy;                    //@synthesize strategy=_strategy - In the implementation block
-(long long)strategy;
-(id)initWithMergeStrategy:(id)arg1 ;
-(NSNumber *)conflictValue;
@end
