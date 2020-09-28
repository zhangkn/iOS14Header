/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/_UIContextMenuAccessoryView.h>

@class CKMessageAcknowledgmentPickerBarViewController, CKMessagePartChatItem;

@interface CKMessageAcknowledgmentPickerBarAccessoryView : _UIContextMenuAccessoryView {

	BOOL _visible;
	CKMessageAcknowledgmentPickerBarViewController* _pickerViewController;
	CKMessagePartChatItem* _chatItem;
	CGRect _layoutBounds;

}

@property (assign,nonatomic) BOOL visible;                                                                       //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) CGRect layoutBounds;                                                                //@synthesize layoutBounds=_layoutBounds - In the implementation block
@property (nonatomic,retain) CKMessageAcknowledgmentPickerBarViewController * pickerViewController;              //@synthesize pickerViewController=_pickerViewController - In the implementation block
@property (nonatomic,retain) CKMessagePartChatItem * chatItem;                                                   //@synthesize chatItem=_chatItem - In the implementation block
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithChatItem:(id)arg1 layoutBounds:(CGRect)arg2 ;
-(CKMessageAcknowledgmentPickerBarViewController *)pickerViewController;
-(CKMessagePartChatItem *)chatItem;
-(CGPoint)attachmentOffsetWithReferenceFrame:(CGRect)arg1 ;
-(void)setChatItem:(CKMessagePartChatItem *)arg1 ;
-(void)setLayoutBounds:(CGRect)arg1 ;
-(void)setPickerViewController:(CKMessageAcknowledgmentPickerBarViewController *)arg1 ;
-(CGRect)layoutBounds;
@end
