/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:27 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFHomeKitSettingsVendor;
@class NAFuture, RPCompanionLinkClient, NSMutableArray;

@interface HFAccessorySettingDeviceOptionsAdapterUtility : NSObject {

	BOOL _isAccessoryReachableOverRapport;
	BOOL _isAccessoryGrouped;
	id<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> _delegate;
	NAFuture* _inProgressSysdiagnoseCollectionFuture;
	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	unsigned long long _mode;
	NAFuture* _linkIsActivatedFuture;
	NAFuture* _accessoryCompanionLinkDeviceFuture;
	NAFuture* _accessoryCompanionDevicesIDFuture;
	RPCompanionLinkClient* _client;
	NSMutableArray* _deviceIDArray;

}

@property (nonatomic,retain) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;                                      //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                                //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL isAccessoryReachableOverRapport;                                                   //@synthesize isAccessoryReachableOverRapport=_isAccessoryReachableOverRapport - In the implementation block
@property (nonatomic,readonly) NAFuture * linkIsActivatedFuture;                                                     //@synthesize linkIsActivatedFuture=_linkIsActivatedFuture - In the implementation block
@property (nonatomic,readonly) NAFuture * accessoryCompanionLinkDeviceFuture;                                        //@synthesize accessoryCompanionLinkDeviceFuture=_accessoryCompanionLinkDeviceFuture - In the implementation block
@property (nonatomic,readonly) NAFuture * accessoryCompanionDevicesIDFuture;                                         //@synthesize accessoryCompanionDevicesIDFuture=_accessoryCompanionDevicesIDFuture - In the implementation block
@property (nonatomic,readonly) RPCompanionLinkClient * client;                                                       //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NAFuture * inProgressSysdiagnoseCollectionFuture;                                       //@synthesize inProgressSysdiagnoseCollectionFuture=_inProgressSysdiagnoseCollectionFuture - In the implementation block
@property (assign,nonatomic) BOOL isAccessoryGrouped;                                                                //@synthesize isAccessoryGrouped=_isAccessoryGrouped - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceIDArray;                                                         //@synthesize deviceIDArray=_deviceIDArray - In the implementation block
@property (assign,nonatomic,__weak) id<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)mode;
-(id)_home;
-(void)setMode:(unsigned long long)arg1 ;
-(id)mediaProfileContainer;
-(id)identifyAccessory;
-(void)setDelegate:(id<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate>)arg1 ;
-(RPCompanionLinkClient *)client;
-(id<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate>)delegate;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(id)_mediaSessionAccessoryUniqueIdentifier;
-(void)_updateDeviceForGroupedAccessory;
-(void)_setupRapportClient;
-(NSMutableArray *)deviceIDArray;
-(NAFuture *)accessoryCompanionDevicesIDFuture;
-(id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2 groupedAccessory:(BOOL)arg3 delegate:(id)arg4 ;
-(id)requestSysdiagnose:(id)arg1 options:(id)arg2 ;
-(id)restartAccessory;
-(id)restartAccessories;
-(NAFuture *)inProgressSysdiagnoseCollectionFuture;
-(void)setInProgressSysdiagnoseCollectionFuture:(NAFuture *)arg1 ;
-(BOOL)isAccessoryReachableOverRapport;
-(void)setIsAccessoryReachableOverRapport:(BOOL)arg1 ;
-(void)setIsAccessoryGrouped:(BOOL)arg1 ;
-(void)setDeviceIDArray:(NSMutableArray *)arg1 ;
-(void)_resetRapportClientWithInvalidation:(BOOL)arg1 ;
-(id)_sendRapportMessageWithIdentifier:(id)arg1 request:(id)arg2 options:(id)arg3 ;
-(id)requestAirDrop:(id)arg1 options:(id)arg2 ;
-(id)_sendRapportMessageToGroupedAccessoryWithIdentifier:(id)arg1 request:(id)arg2 options:(id)arg3 ;
-(id)_homeKitAccessoryUniqueIdentifier;
-(NAFuture *)linkIsActivatedFuture;
-(NAFuture *)accessoryCompanionLinkDeviceFuture;
-(BOOL)isAccessoryGrouped;
-(void)_updateDevice;
-(void)setHomeKitSettingsVendor:(id<HFHomeKitSettingsVendor>)arg1 ;
@end

