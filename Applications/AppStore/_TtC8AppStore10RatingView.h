//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

@interface _TtC8AppStore10RatingView : UIView
{
    MISSING_TYPE *rating;	// 8 = 0x8
    MISSING_TYPE *starColor;	// 16 = 0x10
    MISSING_TYPE *maxNumberOfStars;	// 24 = 0x18
    MISSING_TYPE *starSize;	// 32 = 0x20
    MISSING_TYPE *hollowStarRowView;	// 40 = 0x28
    MISSING_TYPE *filledStarRowView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010016ee60
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010016ee00
@property(nonatomic, readonly) double accessibilityRating;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010016ed10
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)tintColorDidChange;	// IMP=0x000000010016ea38
- (void)layoutSubviews;	// IMP=0x000000010016e92c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010016e780

@end

