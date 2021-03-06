/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol IMTypingIndicatorLayerProtocol;
@class CALayer, CKBaseLayer;

@interface CKTypingView : UIView {

	CALayer*<IMTypingIndicatorLayerProtocol> _indicatorLayer;
	CKBaseLayer* _baseLayer;

}

@property (nonatomic,retain) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer;              //@synthesize indicatorLayer=_indicatorLayer - In the implementation block
@property (nonatomic,retain) CKBaseLayer * baseLayer;                                              //@synthesize baseLayer=_baseLayer - In the implementation block
-(CKBaseLayer *)baseLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBaseLayer:(CKBaseLayer *)arg1 ;
-(void)setIndicatorLayer:(CALayer*<IMTypingIndicatorLayerProtocol>)arg1 ;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
@end

