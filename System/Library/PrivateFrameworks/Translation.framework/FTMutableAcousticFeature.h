/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAcousticFeature.h>

@class NSArray;

@interface FTMutableAcousticFeature : FTAcousticFeature

@property (nonatomic,copy) NSArray * acoustic_feature_per_frame; 
@property (assign,nonatomic) float frame_duration; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)acoustic_feature_per_frame;
-(void)setAcoustic_feature_per_frame:(NSArray *)arg1 ;
-(float)frame_duration;
-(void)setFrame_duration:(float)arg1 ;
-(id)init;
@end
