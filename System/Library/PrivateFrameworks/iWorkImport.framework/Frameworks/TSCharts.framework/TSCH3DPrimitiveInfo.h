/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:22 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCH3DResource;

@interface TSCH3DPrimitiveInfo : NSObject {

	int _type;
	int _offset;
	unsigned _count;
	TSCH3DResource* _indices;

}

@property (nonatomic,readonly) int type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int offset;                                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned count;                               //@synthesize count=_count - In the implementation block
@property (nonatomic,retain,readonly) TSCH3DResource * indices;              //@synthesize indices=_indices - In the implementation block
@property (nonatomic,readonly) BOOL hasOffset; 
@property (nonatomic,readonly) BOOL hasCount; 
@property (nonatomic,readonly) BOOL hasEmptyCount; 
+(id)infoWithType:(int)arg1 offset:(int)arg2 count:(unsigned)arg3 indices:(id)arg4 ;
+(id)infoWithType:(int)arg1 ;
-(void)dealloc;
-(BOOL)hasOffset;
-(int)offset;
-(BOOL)hasCount;
-(int)type;
-(unsigned)count;
-(id)initWithType:(int)arg1 ;
-(TSCH3DResource *)indices;
-(id)initWithType:(int)arg1 offset:(int)arg2 count:(unsigned)arg3 indices:(id)arg4 ;
-(BOOL)hasEmptyCount;
@end

