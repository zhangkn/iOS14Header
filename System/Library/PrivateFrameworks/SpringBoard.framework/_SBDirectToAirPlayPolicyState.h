/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface _SBDirectToAirPlayPolicyState : NSObject {

	NSString* _routeName;
	NSSet* _foregroundIneligibleBundleIDs;
	NSSet* _foregroundEligibleBundleIDs;
	NSSet* _foregroundReadyBundleIDs;
	NSSet* _foregroundPlayingBundleIDs;
	NSSet* _allForegroundBundleIDs;
	NSSet* _allPlayingBundleIDs;
	BOOL _currentRouteIsWired;
	BOOL _playingAppIsActivelyPlaying;
	BOOL _suppressReadyStateForLock;
	BOOL _suppressStateChangesForObscured;
	unsigned long long _policyStateSerialNumber;

}

@property (nonatomic,copy,readonly) NSString * routeName;                               //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,copy,readonly) NSSet * foregroundEligibleBundleIDs;                //@synthesize foregroundEligibleBundleIDs=_foregroundEligibleBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * foregroundIneligibleBundleIDs;              //@synthesize foregroundIneligibleBundleIDs=_foregroundIneligibleBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * foregroundReadyBundleIDs;                   //@synthesize foregroundReadyBundleIDs=_foregroundReadyBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * foregroundPlayingBundleIDs;                 //@synthesize foregroundPlayingBundleIDs=_foregroundPlayingBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allForegroundBundleIDs;                     //@synthesize allForegroundBundleIDs=_allForegroundBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allPlayingBundleIDs;                        //@synthesize allPlayingBundleIDs=_allPlayingBundleIDs - In the implementation block
@property (nonatomic,readonly) BOOL currentRouteIsWired;                                //@synthesize currentRouteIsWired=_currentRouteIsWired - In the implementation block
@property (nonatomic,readonly) BOOL playingAppIsActivelyPlaying;                        //@synthesize playingAppIsActivelyPlaying=_playingAppIsActivelyPlaying - In the implementation block
@property (nonatomic,readonly) BOOL suppressReadyStateForLock;                          //@synthesize suppressReadyStateForLock=_suppressReadyStateForLock - In the implementation block
@property (nonatomic,readonly) BOOL suppressStateChangesForObscured;                    //@synthesize suppressStateChangesForObscured=_suppressStateChangesForObscured - In the implementation block
@property (nonatomic,readonly) BOOL anyEligibleAppIsForeground; 
@property (nonatomic,readonly) BOOL anyReadyAppIsForeground; 
@property (nonatomic,readonly) BOOL anyPlayingAppIsForeground; 
@property (nonatomic,readonly) BOOL anyIneligibleAppIsForeground; 
@property (nonatomic,readonly) BOOL anyAppIsPlaying; 
@property (nonatomic,readonly) unsigned long long policyStateSerialNumber;              //@synthesize policyStateSerialNumber=_policyStateSerialNumber - In the implementation block
-(NSString *)routeName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)anyEligibleAppIsForeground;
-(unsigned long long)policyStateSerialNumber;
-(BOOL)anyAppIsPlaying;
-(NSSet *)allForegroundBundleIDs;
-(BOOL)anyReadyAppIsForeground;
-(BOOL)playingAppIsActivelyPlaying;
-(BOOL)suppressReadyStateForLock;
-(BOOL)suppressStateChangesForObscured;
-(BOOL)currentRouteIsWired;
-(NSSet *)foregroundEligibleBundleIDs;
-(NSSet *)foregroundReadyBundleIDs;
-(NSSet *)foregroundIneligibleBundleIDs;
-(NSSet *)foregroundPlayingBundleIDs;
-(NSSet *)allPlayingBundleIDs;
-(BOOL)anyIneligibleAppIsForeground;
-(BOOL)anyPlayingAppIsForeground;
@end

