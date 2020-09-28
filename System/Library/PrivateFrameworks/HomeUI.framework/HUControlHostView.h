/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView, NSArray;

@interface HUControlHostView : UIView {

	BOOL _requiresWellDefinedSize;
	UIView* _controlView;
	NSArray* _controlConstraints;

}

@property (nonatomic,retain) NSArray * controlConstraints;              //@synthesize controlConstraints=_controlConstraints - In the implementation block
@property (assign,nonatomic) BOOL requiresWellDefinedSize;              //@synthesize requiresWellDefinedSize=_requiresWellDefinedSize - In the implementation block
@property (nonatomic,retain) UIView * controlView;                      //@synthesize controlView=_controlView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setRequiresWellDefinedSize:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)setControlView:(UIView *)arg1 ;
-(UIView *)controlView;
-(NSArray *)controlConstraints;
-(void)setControlConstraints:(NSArray *)arg1 ;
-(BOOL)requiresWellDefinedSize;
-(id)initWithControlView:(id)arg1 ;
@end
