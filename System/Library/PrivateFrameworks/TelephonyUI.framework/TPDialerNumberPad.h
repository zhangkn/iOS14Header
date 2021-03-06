/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TPNumberPad.h>
#import <libobjc.A.dylib/TPDialerKeypadProtocol.h>

@protocol TPDialerKeypadDelegate;
@class TPDialerSoundController, NSString;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol> {

	BOOL _playsSounds;
	id<TPDialerKeypadDelegate> _delegate;
	TPDialerSoundController* _soundController;

}

@property (retain) TPDialerSoundController * soundController;              //@synthesize soundController=_soundController - In the implementation block
@property (assign,nonatomic) BOOL playsSounds;                             //@synthesize playsSounds=_playsSounds - In the implementation block
@property (assign) id<TPDialerKeypadDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dialerNumberPadNumericCharacters;
+(id)dialerNumberPadFullCharacters;
-(void)buttonDown:(id)arg1 ;
-(void)buttonUpOutside:(id)arg1 ;
-(void)setSoundController:(TPDialerSoundController *)arg1 ;
-(void)highlightKeyAtIndex:(long long)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(TPDialerSoundController *)soundController;
-(void)buttonUp:(id)arg1 ;
-(void)setDelegate:(id<TPDialerKeypadDelegate>)arg1 ;
-(void)buttonLongPressed:(id)arg1 ;
-(id<TPDialerKeypadDelegate>)delegate;
-(long long)indexForHighlightedKey;
-(void)setPlaysSounds:(BOOL)arg1 ;
-(BOOL)playsSounds;
@end

