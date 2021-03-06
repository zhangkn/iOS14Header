/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUIServices/WorkflowUIServices-Structs.h>
#import <WorkflowUIServices/WFWidgetFloatingView.h>

@protocol WFWidgetCellDelegate;
@class NSString, NSProgress, WFWidgetFloatingViewConfiguration, UITextView, UIImageView, WFWorkflowProgressView, NSTimer;

@interface WFWidgetCell : WFWidgetFloatingView {

	BOOL _enabled;
	BOOL _completingSuccessfully;
	BOOL _isRTL;
	id<WFWidgetCellDelegate> _delegate;
	NSString* _workflowIdentifier;
	NSProgress* _progress;
	long long _runningState;
	WFWidgetFloatingViewConfiguration* _currentConfiguration;
	UITextView* _nameView;
	UIImageView* _iconView;
	WFWorkflowProgressView* _progressView;
	NSTimer* _clearCompletedTimer;
	CGSize _iconViewSize;

}

@property (nonatomic,retain) WFWidgetFloatingViewConfiguration * currentConfiguration;              //@synthesize currentConfiguration=_currentConfiguration - In the implementation block
@property (assign,nonatomic) BOOL isRTL;                                                            //@synthesize isRTL=_isRTL - In the implementation block
@property (nonatomic,retain) UITextView * nameView;                                                 //@synthesize nameView=_nameView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) CGSize iconViewSize;                                                   //@synthesize iconViewSize=_iconViewSize - In the implementation block
@property (nonatomic,readonly) WFWorkflowProgressView * progressView;                               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSTimer * clearCompletedTimer;                                         //@synthesize clearCompletedTimer=_clearCompletedTimer - In the implementation block
@property (assign,nonatomic,__weak) id<WFWidgetCellDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * workflowIdentifier;                                  //@synthesize workflowIdentifier=_workflowIdentifier - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                 //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long runningState;                                                //@synthesize runningState=_runningState - In the implementation block
@property (assign,nonatomic) BOOL completingSuccessfully;                                           //@synthesize completingSuccessfully=_completingSuccessfully - In the implementation block
-(WFWorkflowProgressView *)progressView;
-(void)setIconView:(UIImageView *)arg1 ;
-(WFWidgetFloatingViewConfiguration *)currentConfiguration;
-(UIImageView *)iconView;
-(void)setNameView:(UITextView *)arg1 ;
-(CGSize)iconViewSize;
-(void)setCurrentConfiguration:(WFWidgetFloatingViewConfiguration *)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setIsRTL:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)init;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<WFWidgetCellDelegate>)arg1 ;
-(NSString *)workflowIdentifier;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id<WFWidgetCellDelegate>)delegate;
-(void)setRunningState:(long long)arg1 ;
-(NSProgress *)progress;
-(void)handleTap:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(long long)runningState;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isRTL;
-(BOOL)isMultiline;
-(UITextView *)nameView;
-(void)configureWithWorkflow:(id)arg1 cornerRadius:(double)arg2 sizeClass:(unsigned long long)arg3 ;
-(BOOL)touchIsInView:(id)arg1 event:(id)arg2 ;
-(BOOL)touchesContainNonIndirectTouch:(id)arg1 ;
-(void)resetToEmptyState;
-(void)resetProgressState;
-(BOOL)completingSuccessfully;
-(void)setCompletingSuccessfully:(BOOL)arg1 ;
-(void)setIconViewSize:(CGSize)arg1 ;
-(NSTimer *)clearCompletedTimer;
-(void)setClearCompletedTimer:(NSTimer *)arg1 ;
@end

