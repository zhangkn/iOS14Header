/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/FMFSessionDelegate.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>
#import <CoreUtils/CoreTelephonyClientDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet, NSData, CUBluetoothClient, TUCallCenter, CXCallObserver, NSArray, CUSystemMonitor, NSString, CUNetInterfaceMonitor, CoreTelephonyClient, RTRoutineManager, NSMutableArray, CUWiFiManager;

@interface CUSystemMonitorImp : NSObject <FMFSessionDelegate, CXCallObserverDelegate, CoreTelephonyClientDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _monitors;
	SCD_Struct_CU6 _bluetoothAddress48;
	NSData* _bluetoothAddressData;
	CUBluetoothClient* _bluetoothClient;
	TUCallCenter* _callCenter;
	CXCallObserver* _callObserver;
	int _activeCallCount;
	unsigned _callFlags;
	BOOL _callStatusObserving;
	int _connectedCallCount;
	int _familyBuddyToken;
	BOOL _familyFailed;
	NSArray* _familyMembers;
	BOOL _familyObserving;
	CUSystemMonitor* _familyPrimaryIPMonitor;
	int _familyUpdatedToken;
	BOOL _manateeAvailable;
	BOOL _manateeObserving;
	int _fmfDevicesChangedToken;
	int _meDeviceChangedToken;
	int _meDeviceRetryToken;
	NSString* _meDeviceFMFDeviceID;
	NSString* _meDeviceIDSDeviceID;
	NSString* _meDeviceName;
	BOOL _meDeviceIsMe;
	BOOL _meDeviceValid;
	CUNetInterfaceMonitor* _netInterfaceMonitor;
	unsigned _netFlags;
	SCD_Union_CU22 _primaryIPv4Addr;
	SCD_Union_CU22 _primaryIPv6Addr;
	NSString* _primaryNetworkSignature;
	int _powerSourceToken;
	BOOL _powerUnlimited;
	NSString* _primaryAppleID;
	BOOL _primaryAppleIDActive;
	BOOL _primaryAppleIDIsHSA2;
	int _primaryAppleIDNotifyToken;
	BOOL _primaryAppleIDObserving;
	CoreTelephonyClient* _regionCTClient;
	CTServerConnectionRef _regionCTServerCnx;
	NSString* _regionISOCountryCode;
	NSString* _regionMobileCountryCode;
	RTRoutineManager* _regionRoutineManager;
	NSString* _regionRoutineCountry;
	int _regionRoutineNotifyToken;
	NSString* _regionRoutineState;
	SCD_Struct_CU6 _rotatingIdentifier48;
	NSData* _rotatingIdentifierData;
	NSObject*<OS_dispatch_source> _rotatingIdentifierTimer;
	BOOL _screenLocked;
	int _screenLockedToken;
	BOOL _screenOn;
	int _screenBlankedToken;
	BOOL _screenSaverActive;
	BOOL _scChangesPending;
	SCDynamicStoreRef _scDynamicStore;
	NSMutableArray* _scInitialKeys;
	NSString* _scKeySystemName;
	NSString* _scPatternNetInterfaceIPv4;
	NSString* _scPatternNetInterfaceIPv6;
	NSArray* _scNotificationKeys;
	NSArray* _scNotificationPatterns;
	NSString* _systemName;
	int _systemLockState;
	int _systemLockStateToken;
	BOOL _firstUnlocked;
	int _firstUnlockToken;
	CUWiFiManager* _wifiManager;
	unsigned _wifiFlags;
	int _wifiState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_regionMonitorStop;
-(void)_screenOnMonitorStop;
-(unsigned)_callFlagsUncached;
-(void)_familyGetMembers:(BOOL)arg1 ;
-(void)_rotatingIdentifierTimerFired;
-(void)_familyNetworkChanged;
-(void)_systemLockStateUpdate:(BOOL)arg1 ;
-(void)_regionMonitorGet;
-(void)_firstUnlockMonitorStart;
-(void)_regionMonitorStart;
-(void)_meDeviceMonitorStop;
-(void)_screenSaverMonitorStart;
-(void)_wifiMonitorStart;
-(void)updateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_meDeviceCheckStart:(BOOL)arg1 ;
-(void)_rotatingIdentifierMonitorStart;
-(void)_systemConfigSystemNameChanged:(BOOL)arg1 ;
-(void)_wifiMonitorStateChanged:(BOOL)arg1 ;
-(void)_screenLockedChanged;
-(void)removeMonitor:(id)arg1 ;
-(void)_manateeMonitorStop;
-(void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(BOOL)arg3 ;
-(void)_screenSaverMonitorStop;
-(void)_bluetoothAddressMonitorStart;
-(void)_rotatingIdentifierMonitorStop;
-(void)_regionMonitorUpdateLocationsOfInterest:(id)arg1 ;
-(void)_familyMonitorStart;
-(void)_familyMonitorStop;
-(void)_netInterfaceMonitorStop;
-(void)_systemConfigNetInterfaceChanged:(id)arg1 initial:(BOOL)arg2 ;
-(id)init;
-(void)_familyUpdated:(id)arg1 ;
-(void)_regionMonitorUpdateMCC:(id)arg1 ;
-(void)_callMonitorStart;
-(void)_callMonitorStop;
-(void)_manateeMonitorStart;
-(void)_manateeChanged:(id)arg1 ;
-(void)_primaryAppleIDChanged:(id)arg1 ;
-(void)_systemConfigChanged:(id)arg1 initial:(BOOL)arg2 ;
-(void)_callCenterStatusChanged:(id)arg1 ;
-(int)_activeCallCountUnached;
-(void)_powerUnlimitedMonitorStop;
-(void)_systemLockStateMonitorStop;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)_wifiMonitorStop;
-(id)_primaryAppleIDAccount;
-(BOOL)_hasMonitorPassingTest:(/*^block*/id)arg1 ;
-(void)_firstUnlockMonitorStop;
-(void)_screenLockedMonitorStart;
-(void)_systemConfigUpdateNotifications;
-(void)cellMonitorUpdate:(id)arg1 info:(id)arg2 ;
-(void)_primaryAppleIDMonitorStop;
-(void)_callInfoChanged;
-(void)_meDeviceMonitorStart;
-(int)_connectedCallCountUnached;
-(void)_primaryAppleIDMonitorStart;
-(void)addMonitor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_systemConfigUpdateKeyPtr:(id*)arg1 name:(id)arg2 enabled:(BOOL)arg3 creator:(/*^block*/id)arg4 ;
-(void)_firstUnlockMonitorCheck:(BOOL)arg1 ;
-(void)_primaryAppleIDChanged2:(BOOL)arg1 ;
-(void)_screenLockedMonitorStop;
-(void)_invokeBlock:(/*^block*/id)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)_locationsOfInterestDidChange:(BOOL)arg1 ;
-(void)_screenOnMonitorStart;
-(void)_systemLockStateMonitorStart;
-(void)_screenChanged:(BOOL)arg1 ;
-(void)_netInterfaceMonitorStart;
-(void)_update;
-(void)_powerUnlimitedMonitorStart;
-(void)_bluetoothAddressMonitorStop;
@end

