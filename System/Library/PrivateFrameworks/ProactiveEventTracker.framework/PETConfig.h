/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PETConfig : NSObject {

	NSDictionary* _config;
	unsigned long long _version;
	NSDictionary* _messageGroups;

}

@property (readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
-(id)whitelistForMessageName:(id)arg1 ;
-(unsigned long long)version;
-(void)_enumerateMessageConfigsWithBlock:(/*^block*/id)arg1 ;
-(id)nestedFieldsForMessageName:(id)arg1 ;
-(id)bucketsForMessageName:(id)arg1 ;
-(id)groupForMessageName:(id)arg1 ;
-(id)_whitelistHelper:(id)arg1 ;
-(double)deviceSamplingForMessageName:(id)arg1 isSeed:(BOOL)arg2 ;
-(id)_nestedFieldsHelper:(id)arg1 ;
-(double)messageSamplingForMessageName:(id)arg1 ;
-(id)initWithFile:(id)arg1 ;
-(unsigned long long)sigFigsForMessageName:(id)arg1 ;
-(id)_configForMessageName:(id)arg1 ;
-(unsigned long long)samplingLimitForMessageGroup:(id)arg1 ;
-(void)writeToFile:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)_enumerateGroupConfigsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isAggregatedForMessageName:(id)arg1 ;
-(id)_groupConfigForMessageName:(id)arg1 ;
@end

