/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RPCompanionLinkDevice, RPCompanionLinkClient, NSMutableDictionary, NSSet;

@interface HUNearbyDevice : NSObject {

	BOOL _activating;
	BOOL _shouldTrack;
	RPCompanionLinkDevice* _device;
	unsigned long long _connectionStatus;
	RPCompanionLinkClient* _client;
	NSMutableDictionary* _previousMessageCache;
	NSSet* _cachableKeys;

}

@property (retain) RPCompanionLinkClient * client;                                    //@synthesize client=_client - In the implementation block
@property (assign,getter=isActivating,nonatomic) BOOL activating;                     //@synthesize activating=_activating - In the implementation block
@property (assign,nonatomic) BOOL shouldTrack;                                        //@synthesize shouldTrack=_shouldTrack - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * previousMessageCache;              //@synthesize previousMessageCache=_previousMessageCache - In the implementation block
@property (nonatomic,retain) NSSet * cachableKeys;                                    //@synthesize cachableKeys=_cachableKeys - In the implementation block
@property (nonatomic,retain) RPCompanionLinkDevice * device;                          //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) unsigned long long connectionStatus;                     //@synthesize connectionStatus=_connectionStatus - In the implementation block
+(id)nearbyDeviceWithPeerDevice:(id)arg1 ;
-(RPCompanionLinkDevice *)device;
-(id)identifier;
-(void)setConnectionStatus:(unsigned long long)arg1 ;
-(unsigned long long)connectionStatus;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(void)dealloc;
-(BOOL)shouldTrack;
-(void)sendMessage:(id)arg1 ;
-(void)reset;
-(BOOL)isEqual:(id)arg1 ;
-(RPCompanionLinkClient *)client;
-(void)setDevice:(RPCompanionLinkDevice *)arg1 ;
-(id)name;
-(void)stop;
-(id)description;
-(BOOL)representsPeerDevice:(id)arg1 ;
-(void)purgeMessageCache;
-(BOOL)representsAWatch;
-(id)initWithPeerDevice:(id)arg1 ;
-(void)setShouldTrack:(BOOL)arg1 ;
-(void)setupSessionIfNecessary;
-(void)setCachableKeys:(NSSet *)arg1 ;
-(void)setActivating:(BOOL)arg1 ;
-(BOOL)isActivating;
-(NSSet *)cachableKeys;
-(NSMutableDictionary *)previousMessageCache;
-(void)setPreviousMessageCache:(NSMutableDictionary *)arg1 ;
@end

