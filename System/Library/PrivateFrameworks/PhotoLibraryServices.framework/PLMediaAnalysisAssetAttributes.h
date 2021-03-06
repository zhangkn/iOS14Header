/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, PLManagedAsset;

@interface PLMediaAnalysisAssetAttributes : PLManagedObject

@property (nonatomic,retain) NSDate * mediaAnalysisTimeStamp; 
@property (assign,nonatomic) unsigned long long mediaAnalysisVersion; 
@property (assign,nonatomic) int bestVideoRangeDurationTimeScale; 
@property (assign,nonatomic) long long bestVideoRangeDurationValue; 
@property (assign,nonatomic) int bestVideoRangeStartTimeScale; 
@property (assign,nonatomic) long long bestVideoRangeStartValue; 
@property (assign,nonatomic) int bestKeyFrameTimeScale; 
@property (assign,nonatomic) long long bestKeyFrameValue; 
@property (assign,nonatomic) long long packedBestPlaybackRect; 
@property (assign,nonatomic) float blurrinessScore; 
@property (assign,nonatomic) float exposureScore; 
@property (assign,nonatomic) float autoplaySuggestionScore; 
@property (assign,nonatomic) float videoScore; 
@property (assign,nonatomic) float activityScore; 
@property (assign,nonatomic) unsigned long long faceCount; 
@property (assign,nonatomic) short audioClassification; 
@property (nonatomic,retain) PLManagedAsset * asset; 
+(id)entityName;
+(id)fetchRequest;
-(SCD_Struct_PL41)bestVideoTimeRange;
-(void)setBestVideoTimeRange:(SCD_Struct_PL41)arg1 ;
-(void)willSave;
-(void)setBestKeyFrameTime:(SCD_Struct_PL14)arg1 ;
-(SCD_Struct_PL14)bestKeyFrameTime;
@end

