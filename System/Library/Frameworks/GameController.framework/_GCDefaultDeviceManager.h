/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GCPhysicalDeviceManager.h>
#import <libobjc.A.dylib/_GCLogicalDeviceManager.h>

@protocol _GCDeviceMatchingFilter, OS_dispatch_queue, NSObjectNSCopyingNSSecureCoding, GCPhysicalDeviceRegistryGCLogicalDeviceRegistry, _GCDefaultDeviceManagerDelegate;
@class NSNumber, NSObject, NSMutableSet, NSMutableDictionary, NSString;

@interface _GCDefaultDeviceManager : NSObject <_GCPhysicalDeviceManager, _GCLogicalDeviceManager> {

	NSNumber* _probeScore;
	id<_GCDeviceMatchingFilter> _matchingFilter;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _claimedServices;
	NSMutableDictionary* _physicalDevices;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	id<GCPhysicalDeviceRegistry><GCLogicalDeviceRegistry> _deviceRegistry;
	id<_GCDefaultDeviceManagerDelegate> _delegate;

}

@property (__weak) id<GCPhysicalDeviceRegistry><GCLogicalDeviceRegistry> deviceRegistry;              //@synthesize deviceRegistry=_deviceRegistry - In the implementation block
@property (assign,nonatomic,__weak) id<_GCDefaultDeviceManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setDeviceRegistry:(id<GCPhysicalDeviceRegistry><GCLogicalDeviceRegistry>)arg1 ;
-(id)initWithIdentifier:(id)arg1 matchingFilter:(id)arg2 probeScore:(id)arg3 ;
-(void)_onqueue_registerDefaultConfigurationForDevice:(id)arg1 ;
-(void)setDelegate:(id<_GCDefaultDeviceManagerDelegate>)arg1 ;
-(id)matchHIDDevice:(id)arg1 ;
-(id<_GCDefaultDeviceManagerDelegate>)delegate;
-(void)claimHIDDevice:(id)arg1 ;
-(id<GCPhysicalDeviceRegistry><GCLogicalDeviceRegistry>)deviceRegistry;
-(void)relinquishHIDDevice:(id)arg1 ;
-(id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2 ;
-(BOOL)acceptDriverConnection:(id)arg1 forHIDDevice:(id)arg2 ;
@end
