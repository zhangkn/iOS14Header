/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <MediaControls/MediaControlsExpandableButton.h>

@class NSSet, MediaControlsHapticPlayer, UIColor, NSString;

@interface MediaControlsBluetoothListeningModeButton : MediaControlsExpandableButton {

	NSSet* _availableListeningModes;
	MediaControlsHapticPlayer* _hapticPlayer;
	UIColor* _offColor;

}

@property (nonatomic,retain) MediaControlsHapticPlayer * hapticPlayer;              //@synthesize hapticPlayer=_hapticPlayer - In the implementation block
@property (nonatomic,retain) UIColor * offColor;                                    //@synthesize offColor=_offColor - In the implementation block
@property (nonatomic,retain) NSSet * availableListeningModes;                       //@synthesize availableListeningModes=_availableListeningModes - In the implementation block
@property (nonatomic,retain) NSString * selectedListeningMode; 
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_springAnimate:(/*^block*/id)arg1 ;
-(void)setSelectedListeningMode:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAvailableListeningModes:(NSSet *)arg1 ;
-(NSString *)selectedListeningMode;
-(void)playRequiresBothBudsInEarErrorHaptic;
-(void)playFailedValueChangedEventHaptic;
-(id)initForControlCenter;
-(void)playValueChangedEventHaptic;
-(void)setSelectedListeningMode:(NSString *)arg1 ;
-(void)playFailedValueChangedEventHapticWithMessage:(id)arg1 ;
-(NSSet *)availableListeningModes;
-(MediaControlsHapticPlayer *)hapticPlayer;
-(void)setHapticPlayer:(MediaControlsHapticPlayer *)arg1 ;
-(UIColor *)offColor;
-(void)setOffColor:(UIColor *)arg1 ;
@end
