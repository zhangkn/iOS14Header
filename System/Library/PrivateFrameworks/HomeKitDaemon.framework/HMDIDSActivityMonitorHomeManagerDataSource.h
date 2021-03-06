/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDIDSActivityMonitorDataSource.h>

@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate;
@class HMDHomeManager, NSString;

@interface HMDIDSActivityMonitorHomeManagerDataSource : NSObject <HMFLogging, HMDIDSActivityMonitorDataSource> {

	id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate;
	HMDHomeManager* _homeManager;

}

@property (readonly) HMDHomeManager * homeManager;                                                        //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate; 
+(id)logCategory;
-(HMDHomeManager *)homeManager;
-(void)start;
-(void)setDelegate:(id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate>)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate>)delegate;
-(id)currentDevice;
-(id)pushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2 ;
-(void)startObservingDevice:(id)arg1 subActivity:(id)arg2 ;
-(void)stopObservingDevice:(id)arg1 subActivity:(id)arg2 ;
-(void)startWithNotificationCenter:(id)arg1 ;
-(void)handleDeviceAdded:(id)arg1 ;
-(void)handleDeviceRemoved:(id)arg1 ;
-(void)handleRegistrationUpdated:(id)arg1 ;
-(BOOL)homeHasCamera:(id)arg1 ;
@end

