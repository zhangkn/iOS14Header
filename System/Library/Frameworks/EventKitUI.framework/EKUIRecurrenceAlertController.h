/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UIAlertController, NSString;

@interface EKUIRecurrenceAlertController : NSObject <UIActionSheetDelegate> {

	UIAlertController* _alertController;
	/*^block*/id _completionHandler;

}

@property (copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) UIAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
+(id)newAlertControllerWithCompletionHandler:(/*^block*/id)arg1 ;
+(int)_determineChoicesForEvent:(id)arg1 options:(unsigned long long)arg2 ;
+(id)_cancelLocalizedString;
+(id)_detachAllLocalizedString;
+(id)_detachFutureLocalizedString;
+(id)deleteAlertWithOptions:(unsigned long long)arg1 forEvent:(id)arg2 stringForDeleteButton:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
+(id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 stringForDeleteButton:(id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
+(id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 forEvent:(id)arg5 stringForDeleteButton:(id)arg6 withCompletionHandler:(/*^block*/id)arg7 ;
+(id)presentAttachmentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
+(id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 forEvent:(id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(void)_cleanup;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)_presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 barButtonItem:(id)arg5 forEvent:(id)arg6 stringForDeleteButton:(id)arg7 ;
-(void)setupDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 forEvent:(id)arg3 stringForDeleteButton:(id)arg4 ;
-(void)_presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 barButtonItem:(id)arg5 forEvent:(id)arg6 ;
-(void)_presentAttachmentsAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 ;
-(BOOL)_useSheetForViewController:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_completeWithSelection:(int)arg1 ;
-(void)_configureAlertControllerWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 barButtonItem:(id)arg3 ;
-(void)dealloc;
-(UIAlertController *)alertController;
-(void)setCompletionHandler:(id)arg1 ;
-(void)cancelAnimated:(BOOL)arg1 ;
-(id)completionHandler;
@end

