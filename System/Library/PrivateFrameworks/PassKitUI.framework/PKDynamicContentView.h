/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIImageView, PKDynamicLayerEmitterConfiguration, CAEmitterLayer;

@interface PKDynamicContentView : UIView {

	UIImageView* _imageView;
	PKDynamicLayerEmitterConfiguration* _dynamicLayerEmitterConfiguration;
	CAEmitterLayer* _emitterLayer;
	BOOL _paused;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
-(void)invalidate;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(void)_pauseEmitters;
-(void)_configureEmitterLayerWithImage:(id)arg1 ;
-(void)_startEmitters;
-(id)initWithImage:(id)arg1 emitterImage:(id)arg2 dynamicLayerEmitterConfiguration:(id)arg3 ;
@end

