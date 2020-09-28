/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DShaderEffect.h>

@interface TSCH3DLightShaderEffect : TSCH3DShaderEffect {

	unsigned long long mLightCount;

}
+(Class)stateClass;
+(void)createStateInEffectsStates:(id)arg1 ;
+(id)effectWithLightCount:(unsigned long long)arg1 ;
+(void)updatePackageState:(const LightingPackageShaderEffectState*)arg1 effectsStates:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)addVariables:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(void)uploadLightPositionablesWithUploader:(id)arg1 effectsStates:(id)arg2 ;
-(void)uploadLightDirectionalWithUploader:(id)arg1 effectsStates:(id)arg2 ;
-(id)initWithLightCount:(unsigned long long)arg1 ;
@end
