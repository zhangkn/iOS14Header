/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:55:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PNPPencilView, PNPSyntheticPencilInteractionEventSource;

@interface PNPHardwareView : UIView {

	PNPPencilView* _pencilView;
	PNPSyntheticPencilInteractionEventSource* _eventSource;
	unsigned long long _animationType;

}

@property (assign,nonatomic) unsigned long long animationType;              //@synthesize animationType=_animationType - In the implementation block
-(unsigned long long)animationType;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimationType:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
