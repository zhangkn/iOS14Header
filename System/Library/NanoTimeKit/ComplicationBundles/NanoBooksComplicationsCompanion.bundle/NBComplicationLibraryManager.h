/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoBooksComplicationsCompanion.bundle/NanoBooksComplicationsCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NBComplicationLibraryItem, NSHashTable, NSObject, NSDate;

@interface NBComplicationLibraryManager : NSObject {

	NBComplicationLibraryItem* _recentAudiobook;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastFetchedDate;

}

@property (nonatomic,retain) NSHashTable * observers;                                  //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NBComplicationLibraryItem * recentAudiobook;              //@synthesize recentAudiobook=_recentAudiobook - In the implementation block
@property (nonatomic,retain) NSDate * lastFetchedDate;                                 //@synthesize lastFetchedDate=_lastFetchedDate - In the implementation block
+(id)sharedManager;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDate *)lastFetchedDate;
-(void)setLastFetchedDate:(NSDate *)arg1 ;
-(NBComplicationLibraryItem *)recentAudiobook;
-(void)setRecentAudiobook:(NBComplicationLibraryItem *)arg1 ;
-(void)q_updateMediaItem;
-(void)q_coalescedCheckForUpdates;
-(void)_notifyObserversWithLibraryItem:(id)arg1 ;
-(void)checkForUpdates:(BOOL)arg1 ;
@end

