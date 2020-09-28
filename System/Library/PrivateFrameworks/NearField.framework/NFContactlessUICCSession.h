/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFContactlessSessionCallbacks.h>

@protocol NFContactlessUICCSessionDelegate;
@class NSString;

@interface NFContactlessUICCSession : NFSession <NFContactlessSessionCallbacks> {

	BOOL _fieldNotificationSent;
	id<NFContactlessUICCSessionDelegate> _delegate;

}

@property (assign) id<NFContactlessUICCSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<NFContactlessUICCSessionDelegate>)arg1 ;
-(id<NFContactlessUICCSessionDelegate>)delegate;
-(void)didEndUnexpectedly;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
-(void)didSelectApplet:(id)arg1 ;
@end
