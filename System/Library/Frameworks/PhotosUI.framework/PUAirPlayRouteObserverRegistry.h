/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@protocol PUAirPlayRouteObserverRegistryDelegate, OS_dispatch_queue;
@class AVOutputDeviceDiscoverySession, NSHashTable, NSObject, NSDate, NSString;

@interface PUAirPlayRouteObserverRegistry : NSObject <PXSettingsKeyObserver> {

	BOOL __discoveryAllowed;
	AVOutputDeviceDiscoverySession* __discoverySession;
	id<PUAirPlayRouteObserverRegistryDelegate> _delegate;
	unsigned long long _routeAvailability;
	NSHashTable* __routeObservers;
	NSObject*<OS_dispatch_queue> __discoverySessionIsolationQueue;
	unsigned long long _lastKnownRouteAvailability;
	NSDate* _lastKnownRouteAvailabilityDate;

}

@property (setter=_setRouteObservers:,nonatomic,retain) NSHashTable * _routeObservers;                                                             //@synthesize _routeObservers=__routeObservers - In the implementation block
@property (setter=_setDiscoverySession:,nonatomic,retain) AVOutputDeviceDiscoverySession * _discoverySession;                                      //@synthesize _discoverySession=__discoverySession - In the implementation block
@property (setter=_setDiscoverySessionIsolationQueue:,nonatomic,retain) NSObject*<OS_dispatch_queue> _discoverySessionIsolationQueue;              //@synthesize _discoverySessionIsolationQueue=__discoverySessionIsolationQueue - In the implementation block
@property (assign,setter=_setRouteAvailability:,nonatomic) unsigned long long routeAvailability;                                                   //@synthesize routeAvailability=_routeAvailability - In the implementation block
@property (assign,setter=_setDiscoveryAllowed:,getter=_isDiscoveryAllowed,nonatomic) BOOL _discoveryAllowed;                                       //@synthesize _discoveryAllowed=__discoveryAllowed - In the implementation block
@property (assign,nonatomic) unsigned long long lastKnownRouteAvailability;                                                                        //@synthesize lastKnownRouteAvailability=_lastKnownRouteAvailability - In the implementation block
@property (nonatomic,retain) NSDate * lastKnownRouteAvailabilityDate;                                                                              //@synthesize lastKnownRouteAvailabilityDate=_lastKnownRouteAvailabilityDate - In the implementation block
@property (assign,nonatomic,__weak) id<PUAirPlayRouteObserverRegistryDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isDiscoveryAllowed;
-(void)_setRouteAvailability:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)_discoverySessionIsolationQueue;
-(void)_updateAllObservers;
-(NSDate *)lastKnownRouteAvailabilityDate;
-(void)_appEnteredBackground:(id)arg1 ;
-(void)dealloc;
-(void)_setDiscoverySession:(id)arg1 ;
-(void)_updateObserver:(id)arg1 ;
-(void)removeRouteObserver:(id)arg1 ;
-(void)_discoverySessionIsolationQueue_updateRouteAvailability;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(NSHashTable *)_routeObservers;
-(unsigned long long)lastKnownRouteAvailability;
-(void)setLastKnownRouteAvailabilityDate:(NSDate *)arg1 ;
-(void)_setRouteObservers:(id)arg1 ;
-(id)init;
-(void)_appEnteringForeground:(id)arg1 ;
-(void)_setDiscoveryAllowed:(BOOL)arg1 ;
-(void)setDelegate:(id<PUAirPlayRouteObserverRegistryDelegate>)arg1 ;
-(void)addRouteObserver:(id)arg1 ;
-(id<PUAirPlayRouteObserverRegistryDelegate>)delegate;
-(void)_setDiscoverySessionIsolationQueue:(id)arg1 ;
-(unsigned long long)routeAvailability;
-(void)_updateDiscoverySession;
-(void)_availableOutputDevicesDidChange:(id)arg1 ;
-(void)setLastKnownRouteAvailability:(unsigned long long)arg1 ;
-(AVOutputDeviceDiscoverySession *)_discoverySession;
@end

