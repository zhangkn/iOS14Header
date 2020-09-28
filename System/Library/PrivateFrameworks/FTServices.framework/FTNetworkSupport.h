/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class APSConnection, NSTimer;

@interface FTNetworkSupport : NSObject {

	Class _APSConnectionClass;
	APSConnection* _apsConnection;
	NSTimer* _reliabilityAttemptTimer;
	BOOL _enableCriticalReliability;
	BOOL _criticalReliabilityEnabledState;

}

@property (nonatomic,readonly) BOOL allowAnyNetwork; 
@property (nonatomic,readonly) BOOL validNetworkEnabled; 
@property (nonatomic,readonly) BOOL validNetworkActive; 
@property (nonatomic,readonly) BOOL validNetworkReachable; 
@property (nonatomic,readonly) BOOL wiFiActiveAndReachable; 
@property (nonatomic,readonly) BOOL willSearchForNetwork; 
@property (nonatomic,readonly) BOOL dataActiveAndReachable; 
@property (nonatomic,readonly) BOOL networkEnabled; 
@property (nonatomic,readonly) BOOL networkActive; 
@property (nonatomic,readonly) BOOL networkReachable; 
@property (assign,nonatomic) BOOL enableCriticalReliability; 
+(id)sharedInstance;
-(BOOL)validNetworkActive;
-(BOOL)validNetworkReachableForBundleId:(id)arg1 ;
-(void)_createAPSConnectionIfNeeded;
-(BOOL)validNetworkEnabled;
-(BOOL)validNetworkActiveForBundleId:(id)arg1 ;
-(BOOL)allowAnyNetwork;
-(BOOL)networkEnabled;
-(void)_clearReliabilityTimeoutInterval;
-(BOOL)validNetworkReachable;
-(BOOL)dataActiveAndReachable;
-(BOOL)networkReachable;
-(void)_tryToEnableReliability;
-(void)_setReliabilityTimeoutInterval;
-(BOOL)enableCriticalReliability;
-(BOOL)willSearchForNetworkForBundleId:(id)arg1 ;
-(void)_reallySetCriticalReliability:(BOOL)arg1 ;
-(BOOL)wiFiActiveAndReachable;
-(BOOL)validNetworkEnabledForBundleId:(id)arg1 ;
-(BOOL)networkActive;
-(BOOL)willSearchForNetwork;
-(void)setEnableCriticalReliability:(BOOL)arg1 ;
@end
