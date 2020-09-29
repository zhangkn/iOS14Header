/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:25 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSMutableDictionary, HMCameraRecordingEventManager, NSMutableArray, NSArray;

@interface HFCameraPlaybackEngineCache : NSObject {

	NSMutableDictionary* _firstOfTheDayClips;
	NSMutableDictionary* _firstOfTheDayEvents;
	HMCameraRecordingEventManager* _eventManager;
	NSMutableArray* _allCameraEvents;

}

@property (assign,nonatomic,__weak) HMCameraRecordingEventManager * eventManager;              //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * allCameraEvents;                                 //@synthesize allCameraEvents=_allCameraEvents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * firstOfTheDayClips;                         //@synthesize firstOfTheDayClips=_firstOfTheDayClips - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * firstOfTheDayEvents;                        //@synthesize firstOfTheDayEvents=_firstOfTheDayEvents - In the implementation block
@property (nonatomic,copy,readonly) NSArray * cameraEvents; 
@property (nonatomic,copy,readonly) NSArray * cameraClips; 
@property (nonatomic,copy,readonly) NSArray * datesContainingClips; 
-(void)dealloc;
-(NSMutableArray *)allCameraEvents;
-(id)hfCameraRecordingEventsFromArray:(id)arg1 ;
-(void)prepareFirstOfTheDayEvents;
-(BOOL)isEventDisplayable:(id)arg1 ;
-(void)updateContainerForCameraRecordingEvent:(id)arg1 ;
-(void)prepareAndAddClipEvent:(id)arg1 toEvents:(id)arg2 ;
-(NSMutableDictionary *)firstOfTheDayEvents;
-(NSMutableDictionary *)firstOfTheDayClips;
-(void)updateFirstOfTheDayEvents:(id)arg1 firstOfTheDayClips:(id)arg2 withEvent:(id)arg3 previousEvent:(id)arg4 ;
-(void)_updateFirstOfDayEvents:(id)arg1 withEvent:(id)arg2 previousEvent:(id)arg3 ;
-(id)initWithEventManager:(id)arg1 ;
-(NSArray *)cameraEvents;
-(NSArray *)cameraClips;
-(void)resetCacheWithEvents:(id)arg1 ;
-(void)updateForEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeEventUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)datesContainingClips;
-(void)setFirstOfTheDayClips:(NSMutableDictionary *)arg1 ;
-(void)setFirstOfTheDayEvents:(NSMutableDictionary *)arg1 ;
-(void)setAllCameraEvents:(NSMutableArray *)arg1 ;
-(void)setEventManager:(HMCameraRecordingEventManager *)arg1 ;
-(HMCameraRecordingEventManager *)eventManager;
@end
