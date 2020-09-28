/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class SUScriptFunction, WebScriptObject, NSNumber, NSString;

@interface SUScriptMenuViewController : SUScriptViewController {

	SUScriptFunction* _action;

}

@property (retain) WebScriptObject * action; 
@property (retain) id items; 
@property (retain) NSNumber * selectedIndex; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)items;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(WebScriptObject *)action;
-(void)dealloc;
-(NSString *)title;
-(id)attributeKeys;
-(id)_viewController;
-(void)setItems:(id)arg1 ;
-(void)setAction:(WebScriptObject *)arg1 ;
-(NSNumber *)selectedIndex;
-(id)_className;
-(void)setTitle:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
-(id)newNativeViewController;
-(id)itemWithTitle:(id)arg1 userInfo:(id)arg2 ;
@end
