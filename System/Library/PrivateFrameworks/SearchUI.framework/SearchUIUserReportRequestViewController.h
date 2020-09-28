/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>

@protocol SearchUIFeedbackDelegate;
@interface SearchUIUserReportRequestViewController : UIAlertController {

	id<SearchUIFeedbackDelegate> _feedbackDelegate;

}

@property (retain) id<SearchUIFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 feedbackDelegate:(id)arg3 sourceView:(id)arg4 ;
-(void)sendFeedbackForResult:(id)arg1 cardSection:(id)arg2 selectedPunchout:(id)arg3 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(BOOL)_canShowWhileLocked;
@end
