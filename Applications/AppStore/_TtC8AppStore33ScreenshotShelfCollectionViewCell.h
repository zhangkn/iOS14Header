//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE;

@interface _TtC8AppStore33ScreenshotShelfCollectionViewCell : UICollectionViewCell
{
    MISSING_TYPE *platform;	// 8 = 0x8
    MISSING_TYPE *collectionView;	// 16 = 0x10
    MISSING_TYPE *flowLayout;	// 24 = 0x18
    MISSING_TYPE *screenshotFetcher;	// 32 = 0x20
    MISSING_TYPE *pageTraits;	// 40 = 0x28
    MISSING_TYPE *topAccessoryView;	// 48 = 0x30
    MISSING_TYPE *bottomAccessoryView;	// 56 = 0x38
    MISSING_TYPE *artwork;	// 64 = 0x40
    MISSING_TYPE *sizedArtwork;	// 72 = 0x48
    MISSING_TYPE *didSelectHandler;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001001ffdec
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000001001ffd18
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000001001ffd00
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001001ffc20
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001001ffa0c
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001001ff90c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001001ff7f4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001001ff70c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001001ff580
- (void)prepareForReuse;	// IMP=0x00000001001ff390
- (void)layoutSubviews;	// IMP=0x00000001001feec8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001fe844
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001fe824

@end
