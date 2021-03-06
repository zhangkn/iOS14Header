/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol WFTextAttachmentInteractionDelegate;
@class UIView, NSTextContainer, UITapGestureRecognizer, NSString;

@interface WFTextAttachmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {

	UIView* _view;
	id<WFTextAttachmentInteractionDelegate> _delegate;
	NSTextContainer* _textContainer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIEdgeInsets _textContainerInset;

}

@property (assign,nonatomic,__weak) UITapGestureRecognizer * tapGestureRecognizer;                 //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<WFTextAttachmentInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSTextContainer * textContainer;                                      //@synthesize textContainer=_textContainer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textContainerInset;                                      //@synthesize textContainerInset=_textContainerInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                               //@synthesize view=_view - In the implementation block
-(UIEdgeInsets)textContainerInset;
-(id)textStorage;
-(void)setTextContainer:(NSTextContainer *)arg1 ;
-(NSTextContainer *)textContainer;
-(void)didMoveToView:(id)arg1 ;
-(id)layoutManager;
-(void)willMoveToView:(id)arg1 ;
-(void)dealloc;
-(UIView *)view;
-(void)setDelegate:(id<WFTextAttachmentInteractionDelegate>)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id<WFTextAttachmentInteractionDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setTextContainerInset:(UIEdgeInsets)arg1 ;
-(id)attachmentAtPoint:(CGPoint)arg1 characterRange:(out NSRange*)arg2 ;
-(void)handleTextTap:(id)arg1 ;
@end

