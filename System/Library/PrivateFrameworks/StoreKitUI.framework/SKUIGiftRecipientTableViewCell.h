/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/MFComposeRecipientViewDelegate.h>
#import <libobjc.A.dylib/SKUIGiftContactSearchDelegate.h>

@class CNContactStore, CNContactPickerViewController, UILabel, MFComposeRecipientView, SKUIGiftContactSearchController, UIView, NSAttributedString, NSString, NSArray;

@interface SKUIGiftRecipientTableViewCell : UITableViewCell <CNContactPickerDelegate, MFComposeRecipientViewDelegate, SKUIGiftContactSearchDelegate> {

	CNContactStore* _contactStore;
	CNContactPickerViewController* _contactPickerController;
	UILabel* _placeholderLabel;
	MFComposeRecipientView* _recipientView;
	SKUIGiftContactSearchController* _searchController;
	UIView* _topBorderView;
	BOOL _didLayoutSubviews;
	BOOL _leftToRight;

}

@property (assign,nonatomic) BOOL didLayoutSubviews;                                //@synthesize didLayoutSubviews=_didLayoutSubviews - In the implementation block
@property (assign,nonatomic) BOOL leftToRight;                                      //@synthesize leftToRight=_leftToRight - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSArray * recipientAddresses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLeftToRight:(BOOL)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(void)setRecipientAddresses:(NSArray *)arg1 ;
-(void)dealloc;
-(id)_contactStore;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)recipientViewDidResignFirstResponder:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1 ;
-(BOOL)leftToRight;
-(NSArray *)recipientAddresses;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)presentSearchResultsPopover:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentPeoplePickerPopover:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDidLayoutSubviews:(BOOL)arg1 ;
-(BOOL)didLayoutSubviews;
-(void)_sendDismissContactPicker;
-(void)_resetSearchController;
-(void)_sendDidChangeRecipients;
-(void)_sendDidUpdateSearchController;
-(void)searchController:(id)arg1 didSelectRecipient:(id)arg2 ;
-(void)searchControllerDidFinishSearch:(id)arg1 ;
@end
