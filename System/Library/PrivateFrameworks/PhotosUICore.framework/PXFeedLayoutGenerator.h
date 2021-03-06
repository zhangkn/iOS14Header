/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXFeedLayoutGeneratorScanState;

@interface PXFeedLayoutGenerator : NSObject {

	long long _cacheTailLocation;
	long long _cacheHeadLocation;
	PXTileInfo _cachedTileInfo[20];
	id _cachedBatchID[20];
	BOOL _scannedBatchHasCaption;
	BOOL _shouldStop;
	long long _tileCount;
	/*^block*/id _tileImageSizeBlock;
	/*^block*/id _tileMinimumSizeBlock;
	/*^block*/id _tileHasCaptionBlock;
	/*^block*/id _tileCaptionSizeBlock;
	/*^block*/id _tileHasLikesBlock;
	/*^block*/id _tileLikesSizeBlock;
	/*^block*/id _tileCommentCountBlock;
	/*^block*/id _tileCommentSizeBlock;
	/*^block*/id _tileBatchIDBlock;
	long long _numberOfMagneticGuidelines;
	double _roundingScale;
	/*^block*/id _parsedFrameBlock;
	long long _scanLocation;
	id _scannedBatchID;
	long long _scanSpecialSequenceCount;
	CGSize _interTileSpacing;
	CGSize _noCaptionSpacing;
	UIEdgeInsets _captionPadding;

}

@property (nonatomic,copy) id parsedFrameBlock;                                       //@synthesize parsedFrameBlock=_parsedFrameBlock - In the implementation block
@property (assign,nonatomic) PXFeedLayoutGeneratorScanState * scanState; 
@property (assign,nonatomic) long long scanLocation;                                  //@synthesize scanLocation=_scanLocation - In the implementation block
@property (nonatomic,retain) id scannedBatchID;                                       //@synthesize scannedBatchID=_scannedBatchID - In the implementation block
@property (assign,nonatomic) BOOL scannedBatchHasCaption;                             //@synthesize scannedBatchHasCaption=_scannedBatchHasCaption - In the implementation block
@property (assign,nonatomic) long long scanSpecialSequenceCount;                      //@synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount - In the implementation block
@property (nonatomic,readonly) BOOL isAtEnd; 
@property (assign,nonatomic) BOOL shouldStop;                                         //@synthesize shouldStop=_shouldStop - In the implementation block
@property (assign,nonatomic) long long tileCount;                                     //@synthesize tileCount=_tileCount - In the implementation block
@property (assign,nonatomic) CGSize interTileSpacing;                                 //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (nonatomic,copy) id tileImageSizeBlock;                                     //@synthesize tileImageSizeBlock=_tileImageSizeBlock - In the implementation block
@property (nonatomic,copy) id tileMinimumSizeBlock;                                   //@synthesize tileMinimumSizeBlock=_tileMinimumSizeBlock - In the implementation block
@property (assign,nonatomic) UIEdgeInsets captionPadding;                             //@synthesize captionPadding=_captionPadding - In the implementation block
@property (assign,nonatomic) CGSize noCaptionSpacing;                                 //@synthesize noCaptionSpacing=_noCaptionSpacing - In the implementation block
@property (nonatomic,copy) id tileHasCaptionBlock;                                    //@synthesize tileHasCaptionBlock=_tileHasCaptionBlock - In the implementation block
@property (nonatomic,copy) id tileCaptionSizeBlock;                                   //@synthesize tileCaptionSizeBlock=_tileCaptionSizeBlock - In the implementation block
@property (nonatomic,copy) id tileHasLikesBlock;                                      //@synthesize tileHasLikesBlock=_tileHasLikesBlock - In the implementation block
@property (nonatomic,copy) id tileLikesSizeBlock;                                     //@synthesize tileLikesSizeBlock=_tileLikesSizeBlock - In the implementation block
@property (nonatomic,copy) id tileCommentCountBlock;                                  //@synthesize tileCommentCountBlock=_tileCommentCountBlock - In the implementation block
@property (nonatomic,copy) id tileCommentSizeBlock;                                   //@synthesize tileCommentSizeBlock=_tileCommentSizeBlock - In the implementation block
@property (nonatomic,copy) id tileBatchIDBlock;                                       //@synthesize tileBatchIDBlock=_tileBatchIDBlock - In the implementation block
@property (assign,nonatomic) long long numberOfMagneticGuidelines;                    //@synthesize numberOfMagneticGuidelines=_numberOfMagneticGuidelines - In the implementation block
@property (assign,nonatomic) double roundingScale;                                    //@synthesize roundingScale=_roundingScale - In the implementation block
-(PXFeedLayoutGeneratorScanState *)scanState;
-(void)parseTiles;
-(void)setScanState:(PXFeedLayoutGeneratorScanState *)arg1 ;
-(void)willParseTiles;
-(void)didParseTiles;
-(BOOL)scanAnyTile:(PXTileInfo*)arg1 ;
-(BOOL)scanTileWithPortraitImage:(PXTileInfo*)arg1 ;
-(BOOL)scanTileWithLandscapeImage:(PXTileInfo*)arg1 ;
-(double)valueByRounding:(double)arg1 usingMagneticGuidelines:(BOOL)arg2 ;
-(BOOL)scanTileWithHorizontalPanorama:(PXTileInfo*)arg1 ;
-(BOOL)scannedBatchHasCaption;
-(BOOL)scanTile:(PXTileInfo*)arg1 type:(long long*)arg2 ;
-(BOOL)scanTile:(PXTileInfo*)arg1 ofType:(long long)arg2 ;
-(BOOL)scanTileWithSquareImage:(PXTileInfo*)arg1 ;
-(CGSize)captionSizeForTileAtIndex:(long long)arg1 proposedSize:(CGSize)arg2 ;
-(void)parsedFrame:(CGRect)arg1 type:(long long)arg2 forTileAtIndex:(long long)arg3 ;
-(long long)numberOfMagneticGuidelines;
-(long long)scanSpecialSequenceCount;
-(void)setScanSpecialSequenceCount:(long long)arg1 ;
-(BOOL)parseNextTiles;
-(long long)tileCount;
-(void)setParsedFrameBlock:(id)arg1 ;
-(void)setScannedBatchID:(id)arg1 ;
-(id)scannedBatchID;
-(void)setScannedBatchHasCaption:(BOOL)arg1 ;
-(id)tileImageSizeBlock;
-(id)tileMinimumSizeBlock;
-(id)tileHasCaptionBlock;
-(id)tileBatchIDBlock;
-(BOOL)scanTile:(PXTileInfo*)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)tileCaptionSizeBlock;
-(id)parsedFrameBlock;
-(double)roundingScale;
-(void)setTileCommentSizeBlock:(id)arg1 ;
-(void)setTileCommentCountBlock:(id)arg1 ;
-(void)setTileLikesSizeBlock:(id)arg1 ;
-(void)setTileHasLikesBlock:(id)arg1 ;
-(void)setInterTileSpacing:(CGSize)arg1 ;
-(void)setCaptionPadding:(UIEdgeInsets)arg1 ;
-(void)setNoCaptionSpacing:(CGSize)arg1 ;
-(void)setScanLocation:(long long)arg1 ;
-(CGSize)likesSizeForTileAtIndex:(long long)arg1 proposedSize:(CGSize)arg2 ;
-(CGSize)commentSizeForTileAtIndex:(long long)arg1 commentIndex:(long long)arg2 proposedSize:(CGSize)arg3 ;
-(void)parsedFrame:(CGRect)arg1 type:(long long)arg2 forLikesAtIndex:(long long)arg3 ;
-(void)parsedFrame:(CGRect)arg1 type:(long long)arg2 forCommentAtIndex:(long long)arg3 ;
-(id)tileHasLikesBlock;
-(id)tileLikesSizeBlock;
-(id)tileCommentCountBlock;
-(id)tileCommentSizeBlock;
-(BOOL)shouldStop;
-(id)init;
-(long long)scanLocation;
-(void)setShouldStop:(BOOL)arg1 ;
-(BOOL)isAtEnd;
-(void)enumerateFramesWithBlock:(/*^block*/id)arg1 ;
-(void)setTileCount:(long long)arg1 ;
-(void)setTileImageSizeBlock:(id)arg1 ;
-(void)setTileHasCaptionBlock:(id)arg1 ;
-(void)setTileMinimumSizeBlock:(id)arg1 ;
-(void)setTileCaptionSizeBlock:(id)arg1 ;
-(void)setTileBatchIDBlock:(id)arg1 ;
-(CGSize)interTileSpacing;
-(UIEdgeInsets)captionPadding;
-(CGSize)noCaptionSpacing;
-(void)setNumberOfMagneticGuidelines:(long long)arg1 ;
-(void)setRoundingScale:(double)arg1 ;
@end

