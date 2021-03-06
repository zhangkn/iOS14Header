/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RMSSessionProxy.h>
#import <libobjc.A.dylib/RMSDiscoverySession.h>

@protocol RMSDiscoverySessionDelegate;
@class NSArray, RMSIDSClient, NSString;

@interface RMSDiscoverySessionProxy : RMSSessionProxy <RMSDiscoverySession> {

	RMSIDSClient* _idsClient;
	long long _retryRate;
	BOOL _discovering;
	BOOL _wifiAvailable;
	BOOL _networkAvailable;
	id<RMSDiscoverySessionDelegate> _delegate;
	long long _discoveryTypes;
	NSArray* _availableServices;
	NSArray* _pairedNetworkNames;

}

@property (assign,nonatomic,__weak) id<RMSDiscoverySessionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long discoveryTypes;                                       //@synthesize discoveryTypes=_discoveryTypes - In the implementation block
@property (nonatomic,readonly) NSArray * availableServices;                                  //@synthesize availableServices=_availableServices - In the implementation block
@property (getter=isNetworkAvailable,nonatomic,readonly) BOOL networkAvailable;              //@synthesize networkAvailable=_networkAvailable - In the implementation block
@property (nonatomic,retain) NSArray * pairedNetworkNames;                                   //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isNetworkAvailable;
-(void)dealloc;
-(id)init;
-(void)beginDiscovery;
-(void)setDelegate:(id<RMSDiscoverySessionDelegate>)arg1 ;
-(id<RMSDiscoverySessionDelegate>)delegate;
-(void)endDiscovery;
-(NSArray *)availableServices;
-(void)_availableServicesDidUpdateNotification:(id)arg1 ;
-(void)_handleSessionDidEndNotification:(id)arg1 ;
-(void)_companionAvailabilityDidChange:(id)arg1 ;
-(void)_wifiAvailabilityDidChange:(id)arg1 ;
-(void)_updateNetworkAvailability;
-(long long)discoveryTypes;
-(void)setDiscoveryTypes:(long long)arg1 ;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(void)heartbeatDidFail;
@end

