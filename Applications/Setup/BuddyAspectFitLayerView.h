//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface BuddyAspectFitLayerView : UIView
{
    CALayer *_managedLayer;	// 8 = 0x8
    struct CGRect _originalManagerLayerBounds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000da418
@property(nonatomic) struct CGRect originalManagerLayerBounds; // @synthesize originalManagerLayerBounds=_originalManagerLayerBounds;
@property(retain, nonatomic) CALayer *managedLayer; // @synthesize managedLayer=_managedLayer;
- (void)layoutSubviews;	// IMP=0x00000001000da1dc
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000001000da050
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000001000da000

@end
