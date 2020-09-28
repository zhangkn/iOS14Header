/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/ICAttachmentThumbnailOperation.h>

@protocol ICAttachmentThumbnailOperation
@required
-(void)addCompletionBlock:(/*^block*/id)arg1;
-(BOOL)isMatchingOperationForCacheKey:(id)arg1 cache:(id)arg2;

@end


@class ICAppearanceInfo, ICThumbnailDataCache, NSString, ICAttachmentThumbnailOperationQueue, NSMutableArray, NSManagedObjectID, ICAttachmentPreviewImageLoader, NSURL;

@interface ICAttachmentThumbnailOperation : NSOperation <ICAttachmentThumbnailOperation> {

	BOOL _attachmentPropertiesCaptured;
	BOOL _showAsFileIcon;
	BOOL _isMovie;
	double _scale;
	ICAppearanceInfo* _appearanceInfo;
	ICThumbnailDataCache* _cache;
	NSString* _cacheKey;
	/*^block*/id _fallbackBlock;
	/*^block*/id _processingBlock;
	ICAttachmentThumbnailOperationQueue* _queue;
	NSMutableArray* _completionBlocks;
	NSManagedObjectID* _attachmentID;
	ICAttachmentPreviewImageLoader* _attachmentPreviewImageLoader;
	NSURL* _mediaURL;
	unsigned long long _imageScaling;
	CGSize _minSize;

}

@property (assign,nonatomic) CGSize minSize;                                                             //@synthesize minSize=_minSize - In the implementation block
@property (assign,nonatomic) double scale;                                                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) ICAppearanceInfo * appearanceInfo;                                          //@synthesize appearanceInfo=_appearanceInfo - In the implementation block
@property (nonatomic,retain) ICThumbnailDataCache * cache;                                               //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                                                        //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy) id fallbackBlock;                                                             //@synthesize fallbackBlock=_fallbackBlock - In the implementation block
@property (nonatomic,copy) id processingBlock;                                                           //@synthesize processingBlock=_processingBlock - In the implementation block
@property (assign,nonatomic,__weak) ICAttachmentThumbnailOperationQueue * queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;                                          //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * attachmentID;                                           //@synthesize attachmentID=_attachmentID - In the implementation block
@property (assign,nonatomic) BOOL attachmentPropertiesCaptured;                                          //@synthesize attachmentPropertiesCaptured=_attachmentPropertiesCaptured - In the implementation block
@property (nonatomic,retain) ICAttachmentPreviewImageLoader * attachmentPreviewImageLoader;              //@synthesize attachmentPreviewImageLoader=_attachmentPreviewImageLoader - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                                           //@synthesize mediaURL=_mediaURL - In the implementation block
@property (assign,nonatomic) unsigned long long imageScaling;                                            //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) BOOL showAsFileIcon;                                                        //@synthesize showAsFileIcon=_showAsFileIcon - In the implementation block
@property (assign,nonatomic) BOOL isMovie;                                                               //@synthesize isMovie=_isMovie - In the implementation block
-(NSString *)cacheKey;
-(NSMutableArray *)completionBlocks;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)setCache:(ICThumbnailDataCache *)arg1 ;
-(ICThumbnailDataCache *)cache;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setMinSize:(CGSize)arg1 ;
-(BOOL)isMovie;
-(CGSize)minSize;
-(unsigned long long)imageScaling;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(BOOL)showAsFileIcon;
-(void)setShowAsFileIcon:(BOOL)arg1 ;
-(void)setIsMovie:(BOOL)arg1 ;
-(void)setAppearanceInfo:(ICAppearanceInfo *)arg1 ;
-(ICAttachmentThumbnailOperationQueue *)queue;
-(void)setCacheKey:(NSString *)arg1 ;
-(NSURL *)mediaURL;
-(id)processingBlock;
-(void)setQueue:(ICAttachmentThumbnailOperationQueue *)arg1 ;
-(ICAppearanceInfo *)appearanceInfo;
-(void)main;
-(NSManagedObjectID *)attachmentID;
-(void)setAttachmentID:(NSManagedObjectID *)arg1 ;
-(void)requestThumbnail;
-(void)setFallbackBlock:(id)arg1 ;
-(void)setProcessingBlock:(id)arg1 ;
-(void)capturePropertiesFromAttachment:(id)arg1 ;
-(void)setAttachmentPreviewImageLoader:(ICAttachmentPreviewImageLoader *)arg1 ;
-(ICAttachmentPreviewImageLoader *)attachmentPreviewImageLoader;
-(void)setAttachmentPropertiesCaptured:(BOOL)arg1 ;
-(BOOL)attachmentPropertiesCaptured;
-(id)fallbackBlock;
-(BOOL)isMatchingOperationForCacheKey:(id)arg1 cache:(id)arg2 ;
-(id)initWithAttachment:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 processingBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 fallbackBlock:(/*^block*/id)arg9 queue:(id)arg10 ;
@end
