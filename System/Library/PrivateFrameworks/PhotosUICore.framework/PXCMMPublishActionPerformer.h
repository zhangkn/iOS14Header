/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXCMMActionPerformer.h>

@class NSURL;

@interface PXCMMPublishActionPerformer : PXCMMActionPerformer {

	NSURL* _publishedURL;

}

@property (nonatomic,retain) NSURL * publishedURL;              //@synthesize publishedURL=_publishedURL - In the implementation block
-(BOOL)isCancellable;
-(id)createActionProgress;
-(void)setPublishedURL:(NSURL *)arg1 ;
-(id)performPublishActionWithSession:(id)arg1 shareOrigin:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_completePublishActionWithSuccess:(BOOL)arg1 error:(id)arg2 shareOrigin:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)publishedURL;
@end

