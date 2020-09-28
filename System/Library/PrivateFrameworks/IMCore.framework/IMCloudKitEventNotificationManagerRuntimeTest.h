/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMRuntimeTestCase.h>
#import <IMCore/IMCloudKitEventHandler.h>

@class IMCloudKitHookTestSingleton, NSString;

@interface IMCloudKitEventNotificationManagerRuntimeTest : IMRuntimeTestCase <IMCloudKitEventHandler> {

	double _previousInterval;
	double _defaultTestDuration;
	IMCloudKitHookTestSingleton* _cloudKitHooks;

}

@property (assign) double defaultTestDuration;                                         //@synthesize defaultTestDuration=_defaultTestDuration - In the implementation block
@property (nonatomic,retain) IMCloudKitHookTestSingleton * cloudKitHooks;              //@synthesize cloudKitHooks=_cloudKitHooks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tearDown;
-(IMCloudKitHookTestSingleton *)cloudKitHooks;
-(void)setCloudKitHooks:(IMCloudKitHookTestSingleton *)arg1 ;
-(void)setUp;
-(void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2 ;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(void)startTest;
-(void)sendSyncStateChangedEvent;
-(id)createSyncStatisticsForMockSyncState:(id)arg1 ;
-(void)willUpdateSyncState:(id)arg1 ;
-(void)setDefaultTestDuration:(double)arg1 ;
-(void)willSendSyncState:(id)arg1 withSyncStatistics:(id)arg2 ;
-(void)updateMockSyncState;
-(double)defaultTestDuration;
@end
