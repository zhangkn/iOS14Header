/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoBooksComplicationsCompanion.bundle/NanoBooksComplicationsCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockComplications/CLKCComplicationBundleDataSource.h>
#import <libobjc.A.dylib/NBComplicationSharedDataSourceObserver.h>

@class NBComplicationSharedDataSource;

@interface NanoBooksComplicationBundleDataSource : CLKCComplicationBundleDataSource <NBComplicationSharedDataSourceObserver> {

	BOOL _paused;
	BOOL _needsInvalidate;
	BOOL _wantsRecentBookName;
	NBComplicationSharedDataSource* _dataSource;

}

@property (nonatomic,retain) NBComplicationSharedDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                              //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL needsInvalidate;                                     //@synthesize needsInvalidate=_needsInvalidate - In the implementation block
@property (assign,nonatomic) BOOL wantsRecentBookName;                                 //@synthesize wantsRecentBookName=_wantsRecentBookName - In the implementation block
+(id)appIdentifier;
+(id)localizedAppName;
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(void)setDataSource:(NBComplicationSharedDataSource *)arg1 ;
-(void)pause;
-(void)dealloc;
-(BOOL)isPaused;
-(NBComplicationSharedDataSource *)dataSource;
-(void)setPaused:(BOOL)arg1 ;
-(void)resume;
-(id)description;
-(void)_invalidateIfNeeded;
-(void)getTimelineEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(id)sampleTemplate;
-(BOOL)supportsTapAction;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)sharedDataSourceDidChange;
-(BOOL)needsInvalidate;
-(BOOL)wantsRecentBookName;
-(void)setNeedsInvalidate:(BOOL)arg1 ;
-(void)mq_invalidateIfNeeded;
-(void)setWantsRecentBookName:(BOOL)arg1 ;
@end
