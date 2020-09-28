/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UITableViewCell, UIImageView;

@interface UITableViewCellReorderControl : UIControl {

	UITableViewCell* _cell;
	CGPoint _downPoint;
	double _focalY;
	double _focalHeight;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)adjustLayoutForFocalRect:(CGRect)arg1 ;
-(void)_updateImageView;
-(BOOL)shouldTrack;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)initWithTableViewCell:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_imageView;
-(id)grabberImage;
@end
