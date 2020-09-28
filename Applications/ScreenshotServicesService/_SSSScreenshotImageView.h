//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_SSSScreenshotAnnotationView.h"

#import "SSSScreenshotContainerView-Protocol.h"

@class SSSScreenshot, UIView, _SSSScreenshotContentOverlayController, _SSSScreenshotFullsizeStaticImageView;

@interface _SSSScreenshotImageView : _SSSScreenshotAnnotationView <SSSScreenshotContainerView>
{
    _SSSScreenshotFullsizeStaticImageView *_imageView;	// 8 = 0x8
    _Bool _useTrilinearMinificationFilter;	// 16 = 0x10
    _SSSScreenshotFullsizeStaticImageView *_cachedOutputImageView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000fdd8
@property(retain, nonatomic) _SSSScreenshotFullsizeStaticImageView *cachedOutputImageView; // @synthesize cachedOutputImageView=_cachedOutputImageView;
@property(nonatomic) _Bool useTrilinearMinificationFilter; // @synthesize useTrilinearMinificationFilter=_useTrilinearMinificationFilter;
- (void)setCachedViewsHidden:(_Bool)arg1;	// IMP=0x000000010000fd8c
- (void)generateSnapshotImageIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000faf0
- (void)enterEditing;	// IMP=0x000000010000f974
@property(readonly, nonatomic) UIView *viewWithScreenshotImage;
@property(nonatomic) __weak SSSScreenshot *screenshot;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010000f750
- (void)layoutSubviews;	// IMP=0x000000010000f3cc
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000010000f37c
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000010000f32c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000f198

// Remaining properties
@property(retain, nonatomic) _SSSScreenshotContentOverlayController *overlayController;
@property(nonatomic) _Bool screenshotEditsSnapshotted;
@property(nonatomic) double vellumOpacity;

@end
