/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSArray;

@interface PKReplicaManager : NSObject {

	NSObject*<OS_dispatch_queue> _uuidAccessQueue;
	NSMutableOrderedSet* _replicaUUIDs;
	NSMutableDictionary* _replicaEntries;
	NSMutableArray* _replicaManagerErrors;
	/*^block*/id _saveStateBlock;
	BOOL _dirtyTokenSet;
	BOOL _shouldPersist;
	BOOL _testMode;

}

@property (assign,nonatomic) BOOL testMode;                                 //@synthesize testMode=_testMode - In the implementation block
@property (nonatomic,readonly) NSArray * replicaManagerErrors; 
+(id)sharedReplicaManager;
-(void)setTestMode:(BOOL)arg1 ;
-(BOOL)testMode;
-(void)_loadState;
-(id)init;
-(void)_applicationWillTerminate;
-(id)description;
-(id)checkoutReplicaUUIDForDrawing:(id)arg1 ;
-(void)returnReplicaForDrawing:(id)arg1 ;
-(void)updateVersionForDrawing:(id)arg1 ;
-(void)persistIfNeeded;
-(void)_saveStateImmediately;
-(void)_setReplicasDirtyToken;
-(void)_scheduleSaveState;
-(BOOL)isValidBundleIDForSaving:(id)arg1 ;
-(void)_resetAllReplicaUUIDs;
-(NSArray *)replicaManagerErrors;
@end

