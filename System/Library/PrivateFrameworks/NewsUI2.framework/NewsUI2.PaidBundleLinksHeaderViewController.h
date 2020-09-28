/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/SXDocumentSectionItemProvider.h>

@interface NewsUI2.PaidBundleLinksHeaderViewController : UIViewController <UITextViewDelegate, SXDocumentSectionItemProvider> {

	 eventHandler;
	 viewProvider;
	 headerDelegate;

}
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)requestDismissal;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(double)sectionItemHeightForSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(id)sectionItemViewController;
@end
