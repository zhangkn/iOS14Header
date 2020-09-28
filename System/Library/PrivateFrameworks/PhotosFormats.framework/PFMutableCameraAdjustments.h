/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <PhotosFormats/PFCameraAdjustments.h>

@class NSString, AVApplePortraitMetadata;

@interface PFMutableCameraAdjustments : PFCameraAdjustments

@property (nonatomic,copy) NSString * effectFilterName; 
@property (nonatomic,copy) NSString * portraitEffectFilterName; 
@property (nonatomic,retain) AVApplePortraitMetadata * portraitMetadata; 
@property (assign,getter=isDepthEnabled,nonatomic) BOOL depthEnabled; 
@property (assign,nonatomic) CGRect cropRect; 
-(void)setCropRect:(CGRect)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPortraitEffectFilterName:(NSString *)arg1 ;
-(void)setEffectFilterName:(NSString *)arg1 ;
-(void)setPortraitMetadata:(AVApplePortraitMetadata *)arg1 ;
-(void)setDepthEnabled:(BOOL)arg1 ;
@end
