/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIKeyboardInputManagerWrapper.h>

@interface TIKeyboardInputManagerPolymorph : TIKeyboardInputManagerWrapper
-(void)setInputManagerForKeyboardState:(id)arg1 ;
-(void)dealloc;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 ;
-(void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setInputManagerForInputMode:(id)arg1 withKeyboardState:(id)arg2 class:(Class)arg3 ;
-(void)handleKeyboardState:(id)arg1 ;
@end

