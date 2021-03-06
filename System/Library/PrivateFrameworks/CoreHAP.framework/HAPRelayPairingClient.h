/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayPairingClientDelegate;
@class NSURL;

@interface HAPRelayPairingClient : HMFObject {

	id<HAPRelayPairingClientDelegate> _delegate;
	NSURL* _accessoryBagURL;

}

@property (__weak) id<HAPRelayPairingClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * accessoryBagURL;                     //@synthesize accessoryBagURL=_accessoryBagURL - In the implementation block
-(void)open;
-(void)close;
-(void)setDelegate:(id<HAPRelayPairingClientDelegate>)arg1 ;
-(id<HAPRelayPairingClientDelegate>)delegate;
-(NSURL *)accessoryBagURL;
-(void)requestControllerIdentifier;
-(void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2 ;
@end

