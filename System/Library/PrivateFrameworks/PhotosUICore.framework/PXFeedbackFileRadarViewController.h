/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UINavigationController.h>

@interface PXFeedbackFileRadarViewController : UINavigationController {

	unsigned long long _collectionType;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) unsigned long long collectionType;              //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)_handleUserCancel:(id)arg1 ;
-(id)initWithCollectionType:(unsigned long long)arg1 ;
-(void)_handleUserConfirmation;
-(void)_handleRadarFiledWithError:(id)arg1 ;
-(void)_handleCompletion;
-(unsigned long long)collectionType;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
@end
