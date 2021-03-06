/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>

@class OFEmitterView;

@interface OKWidgetEmitterView : OKWidgetView {

	unsigned _seed;
	OFEmitterView* _emitterView;
	CGPoint _originalEmitterPosition;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(void)setSettingSpin:(double)arg1 ;
-(void)setSettingLifetime:(double)arg1 ;
-(double)settingVelocity;
-(double)settingSpin;
-(void)dealloc;
-(void)setSettingScale:(double)arg1 ;
-(void)layoutSubviews;
-(double)settingBirthRate;
-(double)settingScale;
-(void)setSettingEmitterCells:(id)arg1 ;
-(double)settingLifetime;
-(id)settingObjectForKey:(id)arg1 ;
-(id)settingEmitterCells;
-(void)setSettingVelocity:(double)arg1 ;
-(void)setSettingBirthRate:(double)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(void)resumeEmitter;
-(void)pauseEmitter;
-(BOOL)isEmitting;
-(double)settingEmitterDepth;
-(void)setSettingEmitterDepth:(double)arg1 ;
-(id)settingEmitterMode;
-(void)setSettingEmitterMode:(id)arg1 ;
-(CGPoint)settingEmitterPosition;
-(void)setSettingEmitterPosition:(CGPoint)arg1 ;
-(id)settingEmitterShape;
-(void)setSettingEmitterShape:(id)arg1 ;
-(CGSize)settingEmitterSize;
-(void)setSettingEmitterSize:(CGSize)arg1 ;
-(double)settingEmitterZPosition;
-(void)setSettingEmitterZPosition:(double)arg1 ;
-(id)settingRenderMode;
-(void)setSettingRenderMode:(id)arg1 ;
-(double)settingSeed;
-(void)setSettingSeed:(double)arg1 ;
@end

