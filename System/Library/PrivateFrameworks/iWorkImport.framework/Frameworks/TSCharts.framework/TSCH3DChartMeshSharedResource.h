/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DChartMeshSharedChildResource.h>

@class TSCH3DDataBuffer;

@interface TSCH3DChartMeshSharedResource : TSCH3DChartMeshSharedChildResource {

	TSCH3DDataBuffer* mMesh;

}

@property (nonatomic,retain) TSCH3DDataBuffer * mesh; 
-(TSCH3DDataBuffer *)mesh;
-(void)dealloc;
-(void)setMesh:(TSCH3DDataBuffer *)arg1 ;
-(id)get;
-(void)flushMemory;
-(void)setChildRegenerated:(BOOL)arg1 ;
@end
