/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/MRPlatterViewControllerDelegate.h>
#import <libobjc.A.dylib/CSAdjunctItemHosting.h>

@class MRPlatterViewController, NSString, NSArray;

@interface CSMediaControlsViewController : CSCoverSheetViewControllerBase <MRPlatterViewControllerDelegate, CSAdjunctItemHosting> {

	MRPlatterViewController* _platterViewController;
	CGSize _containerSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
+(Class)viewClass;
-(long long)presentationPriority;
-(long long)presentationType;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(void)viewDidLoad;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)init;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)handleEvent:(id)arg1 ;
-(CGRect)_suggestedFrameForMediaControls;
-(NSArray *)requiredVisualStyleCategories;
-(void)_updatePersistentUpdatesEnabled:(BOOL)arg1 ;
-(void)_layoutMediaControls;
-(void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2 ;
-(void)setContainerSize:(CGSize)arg1 ;
@end

