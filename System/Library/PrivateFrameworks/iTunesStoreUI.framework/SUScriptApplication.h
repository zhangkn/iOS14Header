/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSNumber;

@interface SUScriptApplication : SUScriptObject

@property (getter=isDelayingTerminate,readonly) id delayingTerminate; 
@property (getter=isRunningInStoreDemoMode,readonly) id runningInStoreDemoMode; 
@property (retain) id iconBadgeNumber; 
@property (readonly) NSString * identifier; 
@property (readonly) id screenHeight; 
@property (readonly) id screenWidth; 
@property (assign) id statusBarHidden; 
@property (assign) long long statusBarStyle; 
@property (readonly) NSString * version; 
@property (getter=wasLaunchedFromLibrary,readonly) id launchedFromLibrary; 
@property (readonly) NSNumber * exitStoreReasonButton; 
@property (readonly) NSNumber * exitStoreReasonDownloadComplete; 
@property (readonly) NSNumber * exitStoreReasonFatalError; 
@property (readonly) NSNumber * exitStoreReasonGotoMainStore; 
@property (readonly) NSNumber * exitStoreReasonOther; 
@property (readonly) NSNumber * exitStoreReasonPurchase; 
@property (readonly) long long statusBarAnimationFade; 
@property (readonly) long long statusBarAnimationNone; 
@property (readonly) long long statusBarAnimationSlide; 
@property (readonly) long long statusBarStyleDefault; 
@property (readonly) long long statusBarStyleBlackOpaque; 
@property (readonly) long long statusBarStyleBlackTranslucent; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)statusBarHidden;
-(NSString *)identifier;
-(NSString *)version;
-(void)setStatusBarStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setStatusBarHidden:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(id)attributeKeys;
-(id)hostIdentifier;
-(id)screenHeight;
-(void)setStatusBarStyle:(long long)arg1 ;
-(long long)statusBarStyle;
-(id)isRunningInStoreDemoMode;
-(void)setStatusBarHidden:(BOOL)arg1 withAnimation:(long long)arg2 ;
-(id)screenWidth;
-(id)scriptAttributeKeys;
-(id)wasLaunchedFromLibrary;
-(void)beginDelayingTerminate;
-(void)endDelayingTerminate;
-(void)exitStoreWithReason:(id)arg1 ;
-(void)returnToLibrary;
-(void)scrollIconToVisible:(id)arg1 shouldSuspend:(BOOL)arg2 ;
-(void)showNewsstand;
-(id)iconBadgeNumber;
-(id)isDelayingTerminate;
-(void)setIconBadgeNumber:(id)arg1 ;
-(NSNumber *)exitStoreReasonButton;
-(NSNumber *)exitStoreReasonDownloadComplete;
-(NSNumber *)exitStoreReasonFatalError;
-(NSNumber *)exitStoreReasonGotoMainStore;
-(NSNumber *)exitStoreReasonOther;
-(NSNumber *)exitStoreReasonPurchase;
-(long long)statusBarAnimationFade;
-(long long)statusBarAnimationNone;
-(long long)statusBarAnimationSlide;
-(long long)statusBarStyleDefault;
-(long long)statusBarStyleBlackOpaque;
-(long long)statusBarStyleBlackTranslucent;
@end

