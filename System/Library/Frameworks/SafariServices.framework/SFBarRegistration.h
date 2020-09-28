/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIResponder.h>
#import <libobjc.A.dylib/_SFBarRegistrationToken.h>

@class NSOrderedSet, UIToolbar, _SFBarManager, NSMutableSet, UIBarButtonItem, SFDownloadsBarButtonItem, NSString;

@interface SFBarRegistration : UIResponder <_SFBarRegistrationToken> {

	NSOrderedSet* _arrangedBarItems;
	UIToolbar* _bar;
	_SFBarManager* _barManager;
	NSMutableSet* _hiddenBarItems;
	NSOrderedSet* _lastCommittedArrangedBarItems;
	long long _layout;
	UIBarButtonItem* _backItem;
	UIBarButtonItem* _bookmarksItem;
	SFDownloadsBarButtonItem* _downloadsItem;
	UIBarButtonItem* _forwardItem;
	UIBarButtonItem* _newTabItem;
	UIBarButtonItem* _shareItem;
	UIBarButtonItem* _tabExposeItem;
	UIBarButtonItem* _openInSafariItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBarItem:(long long)arg1 enabled:(BOOL)arg2 ;
-(id)_UIBarButtonItemForBarItem:(long long)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)popoverSourceInfoForItem:(long long)arg1 ;
-(long long)_barItemForUIBarButtonItem:(id)arg1 ;
-(void)setBarItem:(long long)arg1 hidden:(BOOL)arg2 ;
-(void)setDownloadsItemProgress:(double)arg1 ;
-(void)_itemReceivedTap:(id)arg1 ;
-(BOOL)containsBarItem:(long long)arg1 ;
-(BOOL)_arrangedBarItemsNeedUpdate;
-(id)_newBarButtonItemForSFBarItem:(long long)arg1 ;
-(id)_effectiveArrangedBarItems;
-(void)updateArrangedUIBarButtonItemsIfNeeded;
-(id)_UIBarButtonItemsForArrangedBarItems:(id)arg1 ;
-(id)initWithBar:(id)arg1 barManager:(id)arg2 layout:(long long)arg3 persona:(unsigned long long)arg4 ;
-(void)pulseDownloadsItem;
-(void)_itemReceivedTouchDown:(id)arg1 ;
-(void)setBookmarksItemSelected:(BOOL)arg1 ;
-(void)_itemReceivedLongPress:(id)arg1 ;
-(id)UIBarButtonItemForItem:(long long)arg1 ;
@end
