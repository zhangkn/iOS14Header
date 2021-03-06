/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXComposeRecipientView.h>
#import <libobjc.A.dylib/CNComposeRecipientTextViewDelegate.h>

@class CNComposeRecipientTextView, NSMutableArray, NSString;

@interface PXCNComposeRecipientView : PXComposeRecipientView <CNComposeRecipientTextViewDelegate> {

	CNComposeRecipientTextView* _recipientTextView;
	CGSize _preferredSize;
	NSMutableArray* _internalRecipients;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)becomeFirstResponder;
-(id)recipients;
-(BOOL)resignFirstResponder;
-(void)addRecipient:(id)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)text;
-(id)addButton;
-(void)setMaxRecipients:(long long)arg1 ;
-(long long)maxRecipients;
-(void)removeRecipients:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)composeHeaderView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2 ;
-(void)addRecipients:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)label;
-(void)setSeparatorHidden:(BOOL)arg1 ;
@end

