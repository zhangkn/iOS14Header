/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivityItemProvider.h>
#import <UIKit/UIActivityItemApplicationExtensionSource.h>

@class _SFQuickLookDocument, NSString;

@interface _SFDownloadActivityItemProvider : _SFActivityItemProvider <UIActivityItemApplicationExtensionSource> {

	_SFQuickLookDocument* _quickLookDocument;

}

@property (nonatomic,retain) _SFQuickLookDocument * quickLookDocument;              //@synthesize quickLookDocument=_quickLookDocument - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)item;
-(id)initWithQuickLookDocument:(id)arg1 URL:(id)arg2 webView:(id)arg3 ;
-(void)setQuickLookDocument:(_SFQuickLookDocument *)arg1 ;
-(id)pageTitle;
-(_SFQuickLookDocument *)quickLookDocument;
-(id)activityViewControllerApplicationExtensionItem:(id)arg1 ;
@end
