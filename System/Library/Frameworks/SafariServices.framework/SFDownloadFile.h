/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol SFDownloadFileDelegate;
@class NSURL, NSOperationQueue, NSSet, NSData, NSString;

@interface SFDownloadFile : NSObject <NSFilePresenter> {

	BOOL _invalidated;
	BOOL _usingSecurityScopedURL;
	BOOL _suspended;
	id<SFDownloadFileDelegate> _delegate;
	NSURL* _URL;
	NSData* _bookmarkData;

}

@property (assign,nonatomic,__weak) id<SFDownloadFileDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSData * bookmarkData;                                    //@synthesize bookmarkData=_bookmarkData - In the implementation block
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 bookmarkData:(id)arg2 ;
-(id)initWithBookmarkData:(id)arg1 ;
-(NSData *)bookmarkData;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)setDelegate:(id<SFDownloadFileDelegate>)arg1 ;
-(void)presentedItemDidChange;
-(void)_resume;
-(id<SFDownloadFileDelegate>)delegate;
-(NSURL *)presentedItemURL;
-(void)_suspend;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

