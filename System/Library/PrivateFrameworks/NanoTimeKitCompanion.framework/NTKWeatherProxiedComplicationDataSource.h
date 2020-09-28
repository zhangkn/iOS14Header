/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKWeatherProxiedComplicationDataSource : NTKComplicationDataSource {

	id _proxy;

}

@property (nonatomic,retain) id proxy;              //@synthesize proxy=_proxy - In the implementation block
+(Class)proxyClass;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(void)becomeActive;
-(void)setProxy:(id)arg1 ;
-(void)pause;
-(id)proxy;
-(void)setDelegate:(id)arg1 ;
-(void)resume;
-(void)getTimelineEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(id)sampleTemplate;
-(id)complicationApplicationIdentifier;
-(id)lockedTemplate;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)becomeInactive;
@end
