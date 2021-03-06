//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class NSMutableArray, NSString, NSURL, UIActivityIndicatorView;

@interface ADPreviewAdViewController : UICollectionViewController
{
    NSString *_sourceApplication;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicator;	// 16 = 0x10
    NSURL *_URL;	// 24 = 0x18
    NSMutableArray *_data;	// 32 = 0x20
    double _bannerHeight;	// 40 = 0x28
    double _bannerWidth;	// 48 = 0x30
}

@property(nonatomic) double bannerWidth; // @synthesize bannerWidth=_bannerWidth;
@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
- (void)moveToCenter;	// IMP=0x0000000100008764
- (void)_prepareData:(double)arg1;	// IMP=0x0000000100008630
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010000843c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001000083fc
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001000083d8
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000081d4
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100008114
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000001000080a8
- (void)_closeApplication;	// IMP=0x0000000100008010
- (void)_serverSetupDidFinishNotification:(id)arg1;	// IMP=0x0000000100007f40
- (void)_bannerViewDidFailToReceiveAdWithError:(id)arg1;	// IMP=0x0000000100007ed4
- (void)_bannerViewActionDidFinish:(id)arg1;	// IMP=0x0000000100007eb0
- (void)_bannerViewDidLoadAd:(id)arg1;	// IMP=0x0000000100007e04
- (id)_previewCollectionView;	// IMP=0x0000000100007df8
- (void)viewDidLoad;	// IMP=0x0000000100007b9c
- (void)dealloc;	// IMP=0x0000000100007af8
- (void)initWithURL:(id)arg1;	// IMP=0x0000000100007a70

@end

