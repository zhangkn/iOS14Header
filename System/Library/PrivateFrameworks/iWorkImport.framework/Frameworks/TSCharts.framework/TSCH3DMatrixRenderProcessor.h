/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DRetargetRenderProcessor.h>

@interface TSCH3DMatrixRenderProcessor : TSCH3DRetargetRenderProcessor {

	StateStack<glm::detail::tmat4x4<float>, 8> mTransformStack;
	tmat4x4<float> mProjection;
	BOOL mTransformChanged;
	BOOL mProjectionChanged;

}

@property (nonatomic,readonly) const tmat4x4<float>* current; 
@property (nonatomic,readonly) const tmat4x4<float>* projection; 
@property (nonatomic,readonly) BOOL transformChanged; 
@property (nonatomic,readonly) BOOL projectionChanged; 
-(void)replace:(tmat4x4<float>*)arg1 ;
-(void)scale:(tvec3<float>*)arg1 ;
-(void)translate:(tvec3<float>*)arg1 ;
-(const tmat4x4<float>*)current;
-(const tmat4x4<float>*)projection;
-(void)projection:(tmat4x4<float>*)arg1 ;
-(void)multiply:(tmat4x4<float>*)arg1 ;
-(void)pushMatrix;
-(void)popMatrix;
-(void)copyProjectionInto:(tmat4x4<float>*)arg1 ;
-(void)copyTransformInto:(tmat4x4<float>*)arg1 ;
-(void)resetChangeFlags;
-(id)normalizedViewAll;
-(BOOL)transformChanged;
-(BOOL)projectionChanged;
@end
