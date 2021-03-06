/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SUScriptNavigationItem.h>

@class SUScriptCanvasContext, WebScriptObject, UIImage, NSString;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem> {

	id _action;
	SUScriptCanvasContext* _canvas;
	BOOL _shouldPerformDefaultAction;
	WebScriptObject* _target;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) UIEdgeInsets imageEdgeInsets; 
@property (assign,nonatomic) BOOL shouldPerformDefaultAction;              //@synthesize shouldPerformDefaultAction=_shouldPerformDefaultAction - In the implementation block
@property (retain) id action; 
@property (retain) SUScriptCanvasContext * canvas; 
@property (assign) BOOL enabled; 
@property (assign) BOOL loading; 
@property (readonly) id showingConfirmation; 
@property (retain) NSString * subtitle; 
@property (retain) NSString * style; 
@property (assign) long long tag; 
@property (retain) NSString * title; 
@property (retain) WebScriptObject * target; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(BOOL)loading;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)subtitle;
-(void)setLoading:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)buttonItem;
-(long long)tag;
-(id)action;
-(void)dealloc;
-(NSString *)title;
-(id)attributeKeys;
-(NSString *)style;
-(BOOL)enabled;
-(UIEdgeInsets)imageEdgeInsets;
-(id)init;
-(UIImage *)image;
-(void)setAction:(id)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(void)setCanvas:(SUScriptCanvasContext *)arg1 ;
-(WebScriptObject *)target;
-(id)_className;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_action;
-(void)setTarget:(WebScriptObject *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(SUScriptCanvasContext *)canvas;
-(void)setStyle:(NSString *)arg1 ;
-(void)setTag:(long long)arg1 ;
-(id)scriptAttributeKeys;
-(id)showingConfirmation;
-(id)_initSUScriptButton;
-(id)initWithSystemItemString:(id)arg1 ;
-(id)_boxedNativeButton;
-(id)nativeButtonOfType:(int)arg1 ;
-(id)_nativeButton;
-(void)hideConfirmationAnimated:(BOOL)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setImageInsetsTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4 ;
-(void)setImageWithURLString:(id)arg1 scale:(id)arg2 ;
-(void)performActionWithArguments:(id)arg1 ;
-(void)setNativeButton:(id)arg1 ;
-(id)_systemItemString;
-(void)setShouldPerformDefaultAction:(BOOL)arg1 ;
@end

