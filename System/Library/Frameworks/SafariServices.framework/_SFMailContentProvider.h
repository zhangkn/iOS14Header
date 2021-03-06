/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@protocol _SFMailContentProviderDataSource;
@class NSString;

@interface _SFMailContentProvider : NSObject <MFMailComposeViewControllerDelegate> {

	BOOL _restrictAddingPDFContent;
	id<_SFMailContentProviderDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<_SFMailContentProviderDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL restrictAddingPDFContent;                                       //@synthesize restrictAddingPDFContent=_restrictAddingPDFContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(id<_SFMailContentProviderDataSource>)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(id<_SFMailContentProviderDataSource>)dataSource;
-(long long)_bestContentTypeForPreferredContentType:(long long)arg1 ;
-(void)_getReaderContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getPDFDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_preferentiallyOrderedContentTypes;
-(BOOL)_canProvideContentType:(long long)arg1 ;
-(void)prepareMailComposeViewController:(id)arg1 withMailToURL:(id)arg2 contentURL:(id)arg3 preferredContentType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_preferentiallyOrderedAvailableContentTypes;
-(long long)_defaultPreferredContentType;
-(void)getMailComposeViewControllerWithMailToURL:(id)arg1 contentURL:(id)arg2 preferredContentType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_getWebArchiveDataWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)restrictAddingPDFContent;
-(void)setRestrictAddingPDFContent:(BOOL)arg1 ;
@end

