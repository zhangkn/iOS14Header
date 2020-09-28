/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@class NSString, NSURL, CNContactViewController;

@interface _SFContactPreviewViewController : UINavigationController {

	NSString* _filePath;
	NSURL* _sourceURL;
	CNContactViewController* _contactViewController;
	/*^block*/id _beforeDismissHandler;
	BOOL _deleteFileWhenDone;

}
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_done:(id)arg1 ;
-(void)dealloc;
-(id)initWithFilePath:(id)arg1 sourceURL:(id)arg2 deleteFileWhenDone:(BOOL)arg3 beforeDismissHandler:(/*^block*/id)arg4 ;
-(void)_presentActivityViewController:(id)arg1 ;
@end
