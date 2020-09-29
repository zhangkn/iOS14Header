/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:50 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUForYouSuggestionActionPerformer.h>

@interface PUForYouSuggestionSaveActionPerformer : PUForYouSuggestionActionPerformer {

	BOOL _isReverting;

}

@property (nonatomic,readonly) BOOL isReverting;              //@synthesize isReverting=_isReverting - In the implementation block
-(id)initWithAsset:(id)arg1 ;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_dismissPresentedViewController:(id)arg1 ;
-(id)initWithAsset:(id)arg1 isReverting:(BOOL)arg2 ;
-(void)_performLoopingVideoSaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performLivePhotoSaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performImageSaveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateSuggestionState;
-(BOOL)isReverting;
-(void)_handleSuccess:(BOOL)arg1 ;
-(void)_displayToast;
-(void)_displayFailureAlert;
@end
