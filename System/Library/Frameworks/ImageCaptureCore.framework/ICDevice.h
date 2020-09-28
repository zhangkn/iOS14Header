/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDeviceDelegate;
#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSString, NSMutableDictionary, NSMutableSet, ICDeviceManager, NSNumber, NSDictionary, NSArray;

@interface ICDevice : NSObject {

	BOOL _hasOpenSession;
	BOOL _remote;
	BOOL _autoOpenSession;
	BOOL _openSessionPending;
	BOOL _closeSessionPending;
	BOOL _preferred;
	BOOL _canCancelSoftwareInstallation;
	int _usbLocationID;
	int _usbProductID;
	int _usbVendorID;
	int _moduleExecutableArchitecture;
	int _ipPort;
	id<ICDeviceDelegate> _delegate;
	unsigned long long _type;
	NSString* _name;
	NSString* _productKind;
	CGImageRef _icon;
	NSString* _systemSymbolName;
	NSString* _transportType;
	NSString* _UUIDString;
	NSString* _locationDescription;
	NSMutableDictionary* _userData;
	NSString* _modulePath;
	NSString* _moduleVersion;
	NSString* _serialNumberString;
	NSString* _autolaunchApplicationPath;
	NSString* _persistentIDString;
	NSMutableSet* _deviceCapabilities;
	ICDeviceManager* _deviceManager;
	NSString* _internalUUID;
	NSNumber* _deviceHandle;
	NSString* _volumePath;
	/*^block*/id _completionBlock;
	NSNumber* _connectionID;
	NSNumber* _deviceRef;
	NSNumber* _deviceID;
	NSString* _iconPath;
	NSString* _bonjourServiceType;
	NSString* _bonjourServiceName;
	NSDictionary* _bonjourTXTRecord;
	NSString* _ipAddress;
	id _userObject;
	double _softwareInstallPercentDone;

}

@property (assign,nonatomic) CGImageRef icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSMutableSet * deviceCapabilities;               //@synthesize deviceCapabilities=_deviceCapabilities - In the implementation block
@property (nonatomic,retain) ICDeviceManager * deviceManager;                 //@synthesize deviceManager=_deviceManager - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * productKind;                            //@synthesize productKind=_productKind - In the implementation block
@property (nonatomic,copy) NSString * transportType;                          //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,copy) NSString * UUIDString;                             //@synthesize UUIDString=_UUIDString - In the implementation block
@property (nonatomic,copy) NSString * persistentIDString;                     //@synthesize persistentIDString=_persistentIDString - In the implementation block
@property (assign,nonatomic) int usbLocationID;                               //@synthesize usbLocationID=_usbLocationID - In the implementation block
@property (assign,nonatomic) int usbProductID;                                //@synthesize usbProductID=_usbProductID - In the implementation block
@property (assign,nonatomic) int usbVendorID;                                 //@synthesize usbVendorID=_usbVendorID - In the implementation block
@property (nonatomic,copy) NSString * internalUUID;                           //@synthesize internalUUID=_internalUUID - In the implementation block
@property (nonatomic,copy) NSNumber * deviceHandle;                           //@synthesize deviceHandle=_deviceHandle - In the implementation block
@property (nonatomic,copy) NSString * volumePath;                             //@synthesize volumePath=_volumePath - In the implementation block
@property (assign,nonatomic) BOOL hasOpenSession;                             //@synthesize hasOpenSession=_hasOpenSession - In the implementation block
@property (assign) BOOL autoOpenSession;                                      //@synthesize autoOpenSession=_autoOpenSession - In the implementation block
@property (assign) BOOL openSessionPending;                                   //@synthesize openSessionPending=_openSessionPending - In the implementation block
@property (assign) BOOL closeSessionPending;                                  //@synthesize closeSessionPending=_closeSessionPending - In the implementation block
@property (copy) id completionBlock;                                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) NSNumber * connectionID;                       //@synthesize connectionID=_connectionID - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceRef;                          //@synthesize deviceRef=_deviceRef - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceID;                           //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSString * iconPath;                           //@synthesize iconPath=_iconPath - In the implementation block
@property (nonatomic,readonly) NSString * bonjourServiceType;                 //@synthesize bonjourServiceType=_bonjourServiceType - In the implementation block
@property (nonatomic,readonly) NSString * bonjourServiceName;                 //@synthesize bonjourServiceName=_bonjourServiceName - In the implementation block
@property (nonatomic,readonly) NSDictionary * bonjourTXTRecord;               //@synthesize bonjourTXTRecord=_bonjourTXTRecord - In the implementation block
@property (nonatomic,readonly) NSString * ipAddress;                          //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) int ipPort;                                    //@synthesize ipPort=_ipPort - In the implementation block
@property (retain) id userObject;                                             //@synthesize userObject=_userObject - In the implementation block
@property (readonly) BOOL preferred;                                          //@synthesize preferred=_preferred - In the implementation block
@property (readonly) double softwareInstallPercentDone;                       //@synthesize softwareInstallPercentDone=_softwareInstallPercentDone - In the implementation block
@property (readonly) BOOL canCancelSoftwareInstallation;                      //@synthesize canCancelSoftwareInstallation=_canCancelSoftwareInstallation - In the implementation block
@property (nonatomic,readonly) BOOL isAppleDevice; 
@property (assign,nonatomic) id<ICDeviceDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * capabilities; 
@property (nonatomic,copy,readonly) NSString * systemSymbolName;              //@synthesize systemSymbolName=_systemSymbolName - In the implementation block
@property (nonatomic,readonly) NSString * locationDescription;                //@synthesize locationDescription=_locationDescription - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * userData;                //@synthesize userData=_userData - In the implementation block
@property (nonatomic,readonly) NSString * modulePath;                         //@synthesize modulePath=_modulePath - In the implementation block
@property (nonatomic,readonly) NSString * moduleVersion;                      //@synthesize moduleVersion=_moduleVersion - In the implementation block
@property (nonatomic,readonly) NSString * serialNumberString;                 //@synthesize serialNumberString=_serialNumberString - In the implementation block
@property (nonatomic,copy) NSString * autolaunchApplicationPath;              //@synthesize autolaunchApplicationPath=_autolaunchApplicationPath - In the implementation block
@property (getter=isRemote,readonly) BOOL remote;                             //@synthesize remote=_remote - In the implementation block
@property (readonly) int moduleExecutableArchitecture;                        //@synthesize moduleExecutableArchitecture=_moduleExecutableArchitecture - In the implementation block
-(NSMutableSet *)deviceCapabilities;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)UUIDString;
-(BOOL)preferred;
-(NSMutableDictionary *)userData;
-(id)completionBlock;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(BOOL)isAppleDevice;
-(NSString *)locationDescription;
-(NSArray *)capabilities;
-(NSString *)transportType;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)userObject;
-(BOOL)isRemote;
-(void)requestEject;
-(void)dealloc;
-(void)requestOpenSessionWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSNumber *)deviceRef;
-(int)ipPort;
-(CGImageRef)icon;
-(void)setTransportType:(NSString *)arg1 ;
-(NSString *)bonjourServiceType;
-(ICDeviceManager *)deviceManager;
-(id)init;
-(void)setUUIDString:(NSString *)arg1 ;
-(unsigned long long)type;
-(void)setDelegate:(id<ICDeviceDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)connectionID;
-(NSNumber *)deviceID;
-(BOOL)canEject;
-(NSString *)ipAddress;
-(id<ICDeviceDelegate>)delegate;
-(NSString *)iconPath;
-(NSString *)bonjourServiceName;
-(void)addCapability:(id)arg1 ;
-(void)setDeviceCapabilities:(NSMutableSet *)arg1 ;
-(NSString *)name;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(NSString *)internalUUID;
-(void)setIcon:(CGImageRef)arg1 ;
-(NSString *)volumePath;
-(void)setInternalUUID:(NSString *)arg1 ;
-(id)description;
-(NSString *)productKind;
-(void)setDeviceManager:(ICDeviceManager *)arg1 ;
-(BOOL)hasOpenSession;
-(void)requestOpenSessionWithOptions:(id)arg1 ;
-(void)setOpenSessionPending:(BOOL)arg1 ;
-(void)setHasOpenSession:(BOOL)arg1 ;
-(void)requestCloseSessionWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCloseSessionPending:(BOOL)arg1 ;
-(void)requestOpenSession;
-(void)requestCloseSession;
-(void)setUserObject:(id)arg1 ;
-(int)usbVendorID;
-(void)removeCapability:(id)arg1 ;
-(void)requestEjectWithCompletion:(/*^block*/id)arg1 ;
-(void)setProductKind:(NSString *)arg1 ;
-(NSString *)systemSymbolName;
-(NSString *)modulePath;
-(NSString *)moduleVersion;
-(NSString *)serialNumberString;
-(int)usbLocationID;
-(void)setUsbLocationID:(int)arg1 ;
-(int)usbProductID;
-(void)setUsbProductID:(int)arg1 ;
-(void)setUsbVendorID:(int)arg1 ;
-(NSString *)autolaunchApplicationPath;
-(void)setAutolaunchApplicationPath:(NSString *)arg1 ;
-(NSString *)persistentIDString;
-(void)setPersistentIDString:(NSString *)arg1 ;
-(int)moduleExecutableArchitecture;
-(NSNumber *)deviceHandle;
-(void)setDeviceHandle:(NSNumber *)arg1 ;
-(void)setVolumePath:(NSString *)arg1 ;
-(BOOL)autoOpenSession;
-(void)setAutoOpenSession:(BOOL)arg1 ;
-(BOOL)openSessionPending;
-(BOOL)closeSessionPending;
-(NSDictionary *)bonjourTXTRecord;
-(double)softwareInstallPercentDone;
-(BOOL)canCancelSoftwareInstallation;
@end
