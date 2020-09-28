/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TURoute.h>

@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute {

	NSString* _avAudioRouteName;
	NSDictionary* _route;

}

@property (nonatomic,copy,readonly) NSString * avAudioRouteName;                                         //@synthesize avAudioRouteName=_avAudioRouteName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bluetoothProductIdentifier; 
@property (getter=isHeadphoneJackConnected,nonatomic,readonly) BOOL headphoneJackConnected; 
@property (nonatomic,copy,readonly) NSDictionary * route;                                                //@synthesize route=_route - In the implementation block
-(BOOL)isPreferred;
-(BOOL)supportsPreferredAndActive;
-(id)customDescription;
-(long long)deviceType;
-(BOOL)isDefaultRoute;
-(BOOL)isSpeaker;
-(BOOL)isWiredHeadphones;
-(NSString *)avAudioRouteName;
-(BOOL)isHandset;
-(BOOL)isBluetooth;
-(NSString *)bluetoothProductIdentifier;
-(BOOL)isHeadphoneJackConnected;
-(BOOL)isReceiver;
-(BOOL)isBluetoothLE;
-(id)identifiersOfOtherConnectedDevices;
-(BOOL)_routeTypeEqualTo:(id)arg1 ;
-(BOOL)isCarAudio;
-(NSDictionary *)route;
-(long long)bluetoothEndpointType;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isCurrentlyPicked;
-(BOOL)isWirelessHeadset;
-(BOOL)isPreferredAndActive;
-(BOOL)isWiredHeadset;
-(BOOL)isAirTunes;
@end
