/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _GCLogicalDevice, NSCopyingNSObjectNSSecureCoding, _GCDriverClientInterface;
@class NSMutableArray, _GCHapticClientProxy;

@interface _GCHapticLogicalDevice : NSObject {

	id<_GCLogicalDevice> _logicalDevice;
	id<NSCopying><NSObject><NSSecureCoding> _identifier;
	NSMutableArray* _hapticClients;
	NSMutableArray* _hapticPlayers;
	float _prevSharpness[4];
	float _prevIntensity[4];
	id<_GCDriverClientInterface> _driver;
	_GCHapticClientProxy* _clientConnection;

}
-(id)initWithIdentifier:(id)arg1 clientConnection:(id)arg2 ;
-(void)registerHapticClient:(id)arg1 ;
-(void)unregisterHapticClient:(id)arg1 ;
-(BOOL)hasClients;
-(void)stopAllHaptics;
@end

