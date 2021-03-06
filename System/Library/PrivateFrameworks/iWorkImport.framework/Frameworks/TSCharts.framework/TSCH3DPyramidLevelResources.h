/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSUPair, TSCH3DPyramidBlurFBOResource;

@interface TSCH3DPyramidLevelResources : NSObject {

	TSUPair* mResourcePair;

}

@property (nonatomic,readonly) TSCH3DPyramidBlurFBOResource * finalResource; 
@property (nonatomic,readonly) TSCH3DPyramidBlurFBOResource * temporaryResource; 
@property (nonatomic,readonly) tvec2<int> size; 
+(id)resourcesWithFBOSize:(tvec2<int>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(tvec2<int>)size;
-(unsigned long long)hash;
-(TSCH3DPyramidBlurFBOResource *)finalResource;
-(id)initWithFBOSize:(tvec2<int>)arg1 ;
-(TSCH3DPyramidBlurFBOResource *)temporaryResource;
@end

