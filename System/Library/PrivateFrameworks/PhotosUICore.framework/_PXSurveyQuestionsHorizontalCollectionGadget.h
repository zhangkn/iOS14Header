/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:05 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXHorizontalCollectionGadget.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSString;

@interface _PXSurveyQuestionsHorizontalCollectionGadget : PXHorizontalCollectionGadget <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(unsigned long long)accessoryButtonType;
-(id)accessoryButtonTitle;
-(unsigned long long)headerStyle;
-(/*^block*/id)accessoryButtonAction;
-(void)_hideAccessoryButtonAction;
-(void)_infoAccessoryButtonAction;
-(void)_hideSurveyQuestionsUntilDate:(id)arg1 ;
-(void)_sendRequestConsentFormMail;
@end
