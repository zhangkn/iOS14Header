/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>
#import <libobjc.A.dylib/REElementCoordinatorProperties.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, REObserverStore, NSMutableArray, NSObject;

@interface REElementCoordinator : RERelevanceEngineSubsystem <REElementCoordinatorProperties> {

	NSMutableDictionary* _displayElements;
	REObserverStore* _observers;
	BOOL _performingBatch;
	NSMutableArray* _updates;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) unsigned long long numberOfObservers; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (nonatomic,readonly) NSDictionary * displayElements; 
+(id)applicationPrewarmIdentifiers;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)numberOfObservers;
-(NSDictionary *)displayElements;
-(unsigned long long)numberOfElementsInSection:(id)arg1 ;
-(id)elementAtPath:(id)arg1 ;
-(id)initWithRelevanceEngine:(id)arg1 ;
-(void)reloadElement:(id)arg1 atPath:(id)arg2 ;
-(void)insertElement:(id)arg1 atPath:(id)arg2 ;
-(void)removeElement:(id)arg1 atPath:(id)arg2 ;
-(void)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
-(void)refreshElement:(id)arg1 atPath:(id)arg2 ;
-(id)pathForElement:(id)arg1 ;
-(void)performBatchUpdateBlock:(/*^block*/id)arg1 ;
-(void)didAddObserver:(id)arg1 ;
-(void)_enumerateValidObservers:(/*^block*/id)arg1 ;
-(void)didRemoveObserver:(id)arg1 ;
-(void)_performOperationsToDisplayElements:(id)arg1 ;
-(void)_performOperation:(id)arg1 toObserver:(id)arg2 ;
-(void)_enqueueOrPerformOperation:(id)arg1 ;
-(void)_performOperationsToDisplayElements:(id)arg1 toSection:(id)arg2 ;
@end
