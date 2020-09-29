/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:34 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <Memories/Memories-Structs.h>
@class VideoMovie;

@interface FrameGeneratorCacheInfo : NSObject {

	VideoMovie* m_movie;
	SCD_Struct_PM8 m_time;
	CGSize m_size;
	double m_rotation;

}

@property (nonatomic,retain) VideoMovie * movie; 
@property (assign,nonatomic) SCD_Struct_PM8 time; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double rotation; 
-(void)setRotation:(double)arg1 ;
-(SCD_Struct_PM8)time;
-(double)rotation;
-(VideoMovie *)movie;
-(void)setTime:(SCD_Struct_PM8)arg1 ;
-(void)dealloc;
-(void)setSize:(CGSize)arg1 ;
-(void)setMovie:(VideoMovie *)arg1 ;
-(CGSize)size;
@end
