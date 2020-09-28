/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class SBSeparatorNubView;

@interface SBSeparatorView : UIView {

	unsigned long long _nubStyle;
	SBSeparatorNubView* _nubView;

}

@property (nonatomic,retain) SBSeparatorNubView * nubView;              //@synthesize nubView=_nubView - In the implementation block
@property (assign,nonatomic) unsigned long long nubStyle;               //@synthesize nubStyle=_nubStyle - In the implementation block
@property (nonatomic,readonly) CGRect nubRect; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(SBSeparatorNubView *)nubView;
-(CGRect)nubRect;
-(unsigned long long)nubStyle;
-(void)setNubStyle:(unsigned long long)arg1 ;
-(void)_updateNubViewFrame;
-(void)setNubView:(SBSeparatorNubView *)arg1 ;
@end
