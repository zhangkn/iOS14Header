/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputAdditions
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@optional
-(id)selectionInteractionAssistant;
-(BOOL)_allowAnimatedUpdateSelectionRectViews;
-(id)_textInputViewForAddingGestureRecognizers;
-(BOOL)_useGesturesForEditableContent;

@required
-(id)textInputView;
-(BOOL)isEditable;
-(void)endSelectionChange;
-(void)beginSelectionChange;
-(id)interactionAssistant;
-(BOOL)isEditing;
-(CGRect*)_caretRect;

@end

