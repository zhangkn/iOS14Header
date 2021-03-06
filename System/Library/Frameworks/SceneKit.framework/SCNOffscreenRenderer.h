/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNRenderer.h>

@interface SCNOffscreenRenderer : SCNRenderer

@property (nonatomic,readonly) unsigned textureID; 
@property (assign,nonatomic) unsigned long long antialiasingMode; 
@property (assign,nonatomic) CGSize size; 
+(id)offscreenRendererWithDevice:(id)arg1 size:(CGSize)arg2 ;
+(id)offscreenRendererWithContext:(id)arg1 size:(CGSize)arg2 ;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(unsigned long long)antialiasingMode;
-(void)setSize:(CGSize)arg1 ;
-(id)snapshot;
-(CGSize)size;
-(unsigned)textureID;
@end

