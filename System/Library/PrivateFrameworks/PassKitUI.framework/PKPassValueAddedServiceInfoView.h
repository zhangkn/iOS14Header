/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPass, PKPassSnapshotter, UILabel, UIImageView;

@interface PKPassValueAddedServiceInfoView : UIView {

	long long _style;
	PKPass* _pass;
	PKPassSnapshotter* _snapshotter;
	UILabel* _labelView;
	UIImageView* _snapshotView;
	UILabel* _statusView;

}

@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PKPass * pass;                //@synthesize pass=_pass - In the implementation block
-(id)_labelFont;
-(void)setPass:(PKPass *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)dealloc;
-(long long)style;
-(void)layoutSubviews;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_statusAttributedStringForStyle:(long long)arg1 ;
-(void)_calculateViewMetricsForWidth:(double)arg1 labelSize:(CGSize*)arg2 statusSize:(CGSize*)arg3 baselineAdjustment:(double*)arg4 ;
-(void)setPass:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_labelAttributedStringForString:(id)arg1 ;
-(id)_statusFont;
-(PKPass *)pass;
-(double)_baselineDistance;
-(void)setStyle:(long long)arg1 ;
-(CGSize)_snapshotSize;
@end
