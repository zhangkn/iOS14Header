/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CALayer;

@interface CKTransientReplicaButtonContainer : UIView {

	UIView* _sendButtonCircle;
	UIView* _cancelButtonCircle;
	CALayer* _sendButtonGlyphLayer;
	CALayer* _cancelButtonGlyphLayer;

}

@property (nonatomic,readonly) UIView * sendButtonCircle;                     //@synthesize sendButtonCircle=_sendButtonCircle - In the implementation block
@property (nonatomic,readonly) UIView * cancelButtonCircle;                   //@synthesize cancelButtonCircle=_cancelButtonCircle - In the implementation block
@property (nonatomic,readonly) CALayer * sendButtonGlyphLayer;                //@synthesize sendButtonGlyphLayer=_sendButtonGlyphLayer - In the implementation block
@property (nonatomic,readonly) CALayer * cancelButtonGlyphLayer;              //@synthesize cancelButtonGlyphLayer=_cancelButtonGlyphLayer - In the implementation block
-(CALayer *)cancelButtonGlyphLayer;
-(id)initWithFrame:(CGRect)arg1 hasDarkVibrancy:(BOOL)arg2 isInDarkMode:(BOOL)arg3 color:(id)arg4 sendColor:(char)arg5 ;
-(UIView *)cancelButtonCircle;
-(UIView *)sendButtonCircle;
-(CALayer *)sendButtonGlyphLayer;
-(id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1 ;
@end

