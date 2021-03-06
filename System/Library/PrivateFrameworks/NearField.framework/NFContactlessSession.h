/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFContactlessSessionCallbacks.h>

@protocol NFContactlessSessionDelegate;
@class NSDictionary, NFApplet, NSString;

@interface NFContactlessSession : NFSession <NFContactlessSessionCallbacks> {

	NSDictionary* _appletsById;
	id<NFContactlessSessionDelegate> _delegate;
	BOOL _fieldNotificationSent;
	NFApplet* _activeApplet;

}

@property (assign) id<NFContactlessSessionDelegate> delegate; 
@property (retain,readonly) NFApplet * activeApplet;                       //@synthesize activeApplet=_activeApplet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)stopCardEmulation:(id*)arg1 ;
-(NFApplet *)activeApplet;
-(BOOL)stopCardEmulation;
-(id)allApplets;
-(void)setDelegate:(id<NFContactlessSessionDelegate>)arg1 ;
-(id<NFContactlessSessionDelegate>)delegate;
-(void)didStartSession:(id)arg1 ;
-(id)appletWithIdentifier:(id)arg1 ;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)didEndUnexpectedly;
-(void)endSession;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
-(BOOL)setActiveApplet:(id)arg1 error:(id*)arg2 ;
-(BOOL)startCardEmulation:(id*)arg1 ;
-(void)didSelectApplet:(id)arg1 ;
-(void)didFelicaStateChange:(id)arg1 ;
-(BOOL)setActiveApplet:(NFApplet *)arg1 ;
-(BOOL)startCardEmulation;
@end

