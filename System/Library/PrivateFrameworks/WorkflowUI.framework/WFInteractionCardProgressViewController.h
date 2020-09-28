/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class SUICProgressEventViewController;

@interface WFInteractionCardProgressViewController : UIViewController {

	SUICProgressEventViewController* _progressEventViewController;

}

@property (nonatomic,retain) SUICProgressEventViewController * progressEventViewController;              //@synthesize progressEventViewController=_progressEventViewController - In the implementation block
-(void)loadView;
-(void)handleEvent:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(SUICProgressEventViewController *)progressEventViewController;
-(void)setProgressEventViewController:(SUICProgressEventViewController *)arg1 ;
@end
