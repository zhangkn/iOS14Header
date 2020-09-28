/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarKit/AvatarKit-Structs.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>
#import <libobjc.A.dylib/_SCNSceneRendererDelegateSPI.h>

@protocol MTLCommandQueue;
@class AVTAvatar, AVTAvatarEnvironment, SCNRenderer, MTLRenderPassDescriptor, NSString;

@interface AVTVariantBatchSnapshotter : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {

	AVTAvatar* _avatar;
	AVTAvatarEnvironment* _environment;
	CGSize _size;
	double _scale;
	unsigned long long _antialiasingMode;
	SCNRenderer* _renderer;
	id<MTLCommandQueue> _commandQueue;
	MTLRenderPassDescriptor* _renderPassDescriptor;
	CGContextRef _bitmapContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2 ;
-(void)dealloc;
-(void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(/*^block*/id)arg3 ;
-(id)_renderer:(id)arg1 subdivDataForHash:(id)arg2 ;
-(id)initWithAvatar:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 antialiasingMode:(unsigned long long)arg4 device:(id)arg5 ;
-(id)imageWithOptions:(id)arg1 modifications:(/*^block*/id)arg2 ;
@end
