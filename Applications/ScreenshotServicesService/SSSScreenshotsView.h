//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AKToolbarViewOpacityEditingDelegate-Protocol.h"
#import "SSSScreenshotViewDelegate-Protocol.h"
#import "UINavigationBarDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIToolbarDelegate-Protocol.h"

@class AKToolbarView, NSArray, NSMutableArray, NSString, SSSScreenshot, SSSScreenshotCountIndicator, SSSScreenshotView, SSSScrollView, SSSShadowView, UIImage, UINavigationBar, UIVisualEffectView, _SSSPDFThumbnailView;
@protocol SSSScreenshotsViewDelegate, UICoordinateSpace;

@interface SSSScreenshotsView : UIView <UIScrollViewDelegate, UINavigationBarDelegate, UIToolbarDelegate, SSSScreenshotViewDelegate, AKToolbarViewOpacityEditingDelegate>
{
    UINavigationBar *_topBar;	// 8 = 0x8
    UIImage *_topBarEmptyBackgroundImage;	// 16 = 0x10
    UIVisualEffectView *_bottomBar;	// 24 = 0x18
    UIView *_topBarSeparatorLine;	// 32 = 0x20
    UIView *_bottomBarSeparatorLine;	// 40 = 0x28
    UIVisualEffectView *_thumbnailBackgroundView;	// 48 = 0x30
    AKToolbarView *_toolPalette;	// 56 = 0x38
    double _toolPaletteHeightOnPhone;	// 64 = 0x40
    SSSScrollView *_scrollView;	// 72 = 0x48
    SSSScreenshotCountIndicator *_countIndicator;	// 80 = 0x50
    SSSShadowView *_shadowView;	// 88 = 0x58
    long long _borderViewStyleOverride;	// 96 = 0x60
    _SSSPDFThumbnailView *_pdfThumbnailView;	// 104 = 0x68
    UIView *_layoutPositioningView;	// 112 = 0x70
    _Bool _hasPerformedFullscreenSetup;	// 120 = 0x78
    _Bool _isInStateTransition;	// 121 = 0x79
    NSMutableArray *_screenshotViews;	// 128 = 0x80
    long long _lastPageForSignificantChange;	// 136 = 0x88
    struct CGRect _keyboardFrame;	// 144 = 0x90
    _Bool _isShowingToolPalette;	// 176 = 0xb0
    double _cachedTopBarHeight;	// 184 = 0xb8
    _Bool _snapshotScreenshotEdits;	// 192 = 0xc0
    _Bool _showsShadow;	// 193 = 0xc1
    _Bool _screenshotViewsUseTrilinearMinificationFilter;	// 194 = 0xc2
    _Bool _currentScreenshotCropHandlesFadedOut;	// 195 = 0xc3
    _Bool _isSharing;	// 196 = 0xc4
    _Bool _isPerformingFullscreenSetup;	// 197 = 0xc5
    unsigned long long _state;	// 200 = 0xc8
    id _shareItemTarget;	// 208 = 0xd0
    SEL _shareItemAction;	// 216 = 0xd8
    id _undoItemTarget;	// 224 = 0xe0
    SEL _undoItemAction;	// 232 = 0xe8
    id _redoItemTarget;	// 240 = 0xf0
    SEL _redoItemAction;	// 248 = 0xf8
    id <SSSScreenshotsViewDelegate> _delegate;	// 256 = 0x100
    UIView *_rulerHostingView;	// 264 = 0x108
    SSSScreenshotView *_appearingScreenshotView;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000100040088
@property(nonatomic) __weak SSSScreenshotView *appearingScreenshotView; // @synthesize appearingScreenshotView=_appearingScreenshotView;
@property(nonatomic) _Bool isPerformingFullscreenSetup; // @synthesize isPerformingFullscreenSetup=_isPerformingFullscreenSetup;
@property(nonatomic) _Bool isSharing; // @synthesize isSharing=_isSharing;
@property(readonly, nonatomic) UIView *rulerHostingView; // @synthesize rulerHostingView=_rulerHostingView;
@property(nonatomic) _Bool currentScreenshotCropHandlesFadedOut; // @synthesize currentScreenshotCropHandlesFadedOut=_currentScreenshotCropHandlesFadedOut;
@property(nonatomic) __weak id <SSSScreenshotsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool screenshotViewsUseTrilinearMinificationFilter; // @synthesize screenshotViewsUseTrilinearMinificationFilter=_screenshotViewsUseTrilinearMinificationFilter;
@property(nonatomic) _Bool showsShadow; // @synthesize showsShadow=_showsShadow;
@property(nonatomic) SEL redoItemAction; // @synthesize redoItemAction=_redoItemAction;
@property(nonatomic) __weak id redoItemTarget; // @synthesize redoItemTarget=_redoItemTarget;
@property(nonatomic) SEL undoItemAction; // @synthesize undoItemAction=_undoItemAction;
@property(nonatomic) __weak id undoItemTarget; // @synthesize undoItemTarget=_undoItemTarget;
@property(nonatomic) SEL shareItemAction; // @synthesize shareItemAction=_shareItemAction;
@property(nonatomic) __weak id shareItemTarget; // @synthesize shareItemTarget=_shareItemTarget;
@property(readonly, nonatomic) UINavigationBar *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) _Bool snapshotScreenshotEdits; // @synthesize snapshotScreenshotEdits=_snapshotScreenshotEdits;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)dealloc;	// IMP=0x000000010003fe78
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010003fb08
- (_Bool)_isLandscapePhone;	// IMP=0x000000010003fa34
- (_Bool)_isPortraitPhone;	// IMP=0x000000010003f960
- (_Bool)_shouldBleedToBottom;	// IMP=0x000000010003f93c
- (_Bool)_contentSwitcherShouldMoveDown;	// IMP=0x000000010003f890
- (_Bool)_layoutShouldShowContentSwitcher;	// IMP=0x000000010003f7f4
- (void)didProcessDocumentUpdateForScreenshot:(id)arg1;	// IMP=0x000000010003f728
- (_Bool)_isShowingPDFScreenshot;	// IMP=0x000000010003f6d8
- (_Bool)_anyScreenshotPDFViewNeedsBleedToBottom;	// IMP=0x000000010003f590
- (id)_currentPDFView;	// IMP=0x000000010003f51c
- (long long)currentPDFPage;	// IMP=0x000000010003f4d0
- (void)cancelCrop;	// IMP=0x000000010003f478
- (void)doneCrop;	// IMP=0x000000010003f420
- (void)resetCrop;	// IMP=0x000000010003f3e0
- (void)enterCrop;	// IMP=0x000000010003f36c
@property(readonly, nonatomic, getter=isCropped) _Bool cropped;
@property(nonatomic) long long editMode;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010003eeb8
- (void)_updateSubviewOrdering;	// IMP=0x000000010003ecb8
- (_Bool)_shouldAvoidKeyboard;	// IMP=0x000000010003ebf4
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000010003ebe8
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000010003ebdc
- (void)_updateForKeyboardNotification:(id)arg1;	// IMP=0x000000010003e908
- (void)setBorderViewStyleOverride:(long long)arg1 withAnimator:(id)arg2;	// IMP=0x000000010003e854
- (id)createUndoViewController;	// IMP=0x000000010003e708
@property(readonly, nonatomic) struct CGRect rectForHorizontalPanningInWindowSpace;
@property(readonly, nonatomic) UIView *bottomBar;
- (long long)positionForBar:(id)arg1;	// IMP=0x000000010003e42c
- (void)dismissOverlayManagedViewControllers;	// IMP=0x000000010003e414
- (_Bool)_screenshotEditsShouldBeSnapshottedForCurrentScreenshot;	// IMP=0x000000010003e3c4
- (struct CGRect)_effectiveBottomBarExtent;	// IMP=0x000000010003e2e4
- (void)screenshotView:(id)arg1 noLongerHasHighPriorityGesture:(id)arg2;	// IMP=0x000000010003e270
- (void)screenshotView:(id)arg1 hasHighPriorityGesture:(id)arg2;	// IMP=0x000000010003e1fc
- (id)viewControllerForPresentationsFromScreenshotView:(id)arg1;	// IMP=0x000000010003e1a0
- (void)screenshotViewCropDidChange:(id)arg1;	// IMP=0x000000010003e158
- (void)screenshotViewTapped:(id)arg1;	// IMP=0x000000010003e0dc
- (void)screenshotViewUndoStackChanged:(id)arg1;	// IMP=0x000000010003e094
- (id)targetForCancellingDragItem:(id)arg1 inContainer:(id)arg2;	// IMP=0x000000010003df9c
- (id)previewForDragItem:(id)arg1 inContainer:(id)arg2;	// IMP=0x000000010003dcec
- (id)_screenshotViewForDragItem:(id)arg1;	// IMP=0x000000010003dcdc
@property(readonly, nonatomic) NSArray *imageItems;
@property(readonly, nonatomic) NSArray *dragItems;
@property(readonly, nonatomic) NSArray *activityItems;
- (id)_screenshotsEligibleForSharing;	// IMP=0x000000010003d520
- (id)screenshotViewForScreenshot:(id)arg1;	// IMP=0x000000010003d394
- (id)_screenshotAtIndex:(long long)arg1;	// IMP=0x000000010003d334
@property(readonly, nonatomic) NSArray *visibleScreenshots;
- (id)viewsForScreenshots:(id)arg1;	// IMP=0x000000010003cf64
- (void)_scrollToPage:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010003cf1c
- (long long)_numberOfPages;	// IMP=0x000000010003cf04
- (long long)_currentPage;	// IMP=0x000000010003cea8
- (long long)_pageForXOffsetInScrollView:(double)arg1;	// IMP=0x000000010003cd1c
- (struct CGRect)_scrollViewRectForPage:(long long)arg1;	// IMP=0x000000010003cc48
- (id)_viewForPage:(long long)arg1;	// IMP=0x000000010003cbd8
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000010003cb10
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010003cadc
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010003ca84
- (void)_noteCurrentPageForSignificantChange;	// IMP=0x000000010003ca50
- (void)_updateScrollPositionForCurrentPage;	// IMP=0x000000010003c9dc
- (void)_updateDisplayedPage;	// IMP=0x000000010003c8fc
- (void)stateTransitionFinished;	// IMP=0x000000010003c8e4
- (void)commitInflightEdits;	// IMP=0x000000010003c720
@property(readonly, nonatomic) long long numberOfScreenshotImages;
- (void)removeScreenshots:(id)arg1;	// IMP=0x000000010003c4d8
- (id)_screenshotViewForScreenshot:(id)arg1;	// IMP=0x000000010003c36c
- (void)parentScreenshotView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010003c29c
- (id)currentScreenshotView;	// IMP=0x000000010003c264
@property(readonly, nonatomic) SSSScreenshot *currentScreenshot;
- (void)endOpacityEditing;	// IMP=0x000000010003c1f8
- (void)toolbarDidSelectOpacityOptionWithAccessoryView:(id)arg1;	// IMP=0x000000010003c18c
- (void)_updateThumbnailViewVisibilityIfNeededAnimated:(_Bool)arg1;	// IMP=0x000000010003c004
@property(readonly, nonatomic) id <UICoordinateSpace> screenshotsParentCoordinateSpace;
@property(readonly, nonatomic) struct CGRect screenshotsExtentRect;
- (void)_layoutThumbnailView;	// IMP=0x000000010003ba60
- (double)_thumbnailTrayWidth;	// IMP=0x000000010003b990
- (id)_rectsForShadowView;	// IMP=0x000000010003b7b8
- (long long)_effectiveIndexForIndex:(long long)arg1 inNumberOfScreenshots:(long long)arg2;	// IMP=0x000000010003b77c
- (long long)_positioningIndexForIndex:(long long)arg1 numberOfScreenshots:(long long)arg2;	// IMP=0x000000010003b72c
- (_Bool)_shouldShowScreenshotViewAtIndex:(long long)arg1;	// IMP=0x000000010003b654
- (_Bool)_showAllScreenshotsForNumberOfScreenshots:(long long)arg1;	// IMP=0x000000010003b618
- (struct CGSize)_scrollContentSize;	// IMP=0x000000010003b440
- (struct UIEdgeInsets)_scrollContentInsets;	// IMP=0x000000010003b220
- (double)_interScreenshotSpacing;	// IMP=0x000000010003b1d0
- (struct CGSize)_screenshotMaximumSize;	// IMP=0x000000010003b11c
- (struct CGRect)_availableRectForContent;	// IMP=0x000000010003aed8
- (struct CGRect)_layoutBoundsForFullPageThumbnail;	// IMP=0x000000010003ae3c
- (struct CGRect)_layoutBounds;	// IMP=0x000000010003ada8
- (struct CGRect)_frameForScreenshot:(id)arg1 atIndex:(long long)arg2 numberOfScreenshots:(long long)arg3 maximumSize:(struct CGSize)arg4 interScreenshotSpacing:(double)arg5 rectToCenterAboveKeyboard:(struct CGRect)arg6 state:(unsigned long long)arg7;	// IMP=0x000000010003a8a4
- (void)_layoutScreenshotView:(id)arg1 forState:(unsigned long long)arg2 isFirstScreenshot:(_Bool)arg3 isCurrentScreenshot:(_Bool)arg4;	// IMP=0x000000010003a5fc
- (void)safeAreaInsetsDidChange;	// IMP=0x000000010003a5ac
- (double)_bottomBarHeightIncludingSafeAreaInsets;	// IMP=0x000000010003a4e4
- (double)_toolPickerHeightOnPhone;	// IMP=0x000000010003a408
- (_Bool)_shouldExtendBottomBarForPageDots;	// IMP=0x000000010003a350
- (_Bool)_shouldShowBottomBar;	// IMP=0x000000010003a238
- (void)updateForFrame:(struct CGRect)arg1;	// IMP=0x000000010003a0e0
- (void)_updatePaletteVisibilityIfNecessary:(_Bool)arg1;	// IMP=0x0000000100039f94
- (void)_setupPaletteIfNecessary;	// IMP=0x0000000100039cfc
- (void)layoutSubviews;	// IMP=0x0000000100038a04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
