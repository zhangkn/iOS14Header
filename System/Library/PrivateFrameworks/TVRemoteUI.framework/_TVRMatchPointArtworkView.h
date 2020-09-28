/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView;

@interface _TVRMatchPointArtworkView : UIView {

	UIView* _selectIndicator;
	UIImageView* _upImageView;
	UIImageView* _rightImageView;
	UIImageView* _downImageView;
	UIImageView* _leftImageView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)highlightForButtonType:(long long)arg1 enabled:(BOOL)arg2 ;
-(BOOL)touchLocationIsConsideredCenter:(CGPoint)arg1 ;
@end
