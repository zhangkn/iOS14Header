/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol OS_dispatch_queue, MRExternalDeviceControllerDelegate;
@class NSObject, NSNetServiceBrowser, NSMutableSet, NSString;

@interface MRExternalDeviceController : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSNetServiceBrowser* _serviceBrowser;
	NSMutableSet* _discoveredDevices;
	NSMutableSet* _resolvingServices;
	NSMutableSet* _monitoringServices;
	BOOL _discovering;
	id<MRExternalDeviceControllerDelegate> _delegate;
	NSString* _bonjourServiceType;

}

@property (assign,nonatomic,__weak) id<MRExternalDeviceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * bonjourServiceType;                                     //@synthesize bonjourServiceType=_bonjourServiceType - In the implementation block
@property (getter=isDiscovering,nonatomic,readonly) BOOL discovering;                             //@synthesize discovering=_discovering - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)externalDeviceClass;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)dealloc;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(BOOL)_isManagedConfigIDAllowed:(id)arg1 ;
-(id)initWithBonjourServiceType:(id)arg1 ;
-(NSString *)bonjourServiceType;
-(BOOL)isDiscovering;
-(void)beginDiscovery;
-(void)setDelegate:(id<MRExternalDeviceControllerDelegate>)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(id<MRExternalDeviceControllerDelegate>)delegate;
-(void)endDiscovery;
@end

