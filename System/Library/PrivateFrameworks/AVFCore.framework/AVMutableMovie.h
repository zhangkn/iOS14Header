/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMovie.h>

@class AVMutableMovieInternal, AVMediaDataStorage, NSArray;

@interface AVMutableMovie : AVMovie {

	AVMutableMovieInternal* _mutableMovieInternal;

}

@property (assign,getter=isModified,nonatomic) BOOL modified; 
@property (nonatomic,copy) AVMediaDataStorage * defaultMediaDataStorage; 
@property (assign,nonatomic) SCD_Struct_AV6 interleavingPeriod; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) float preferredRate; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) int timescale; 
@property (nonatomic,readonly) NSArray * tracks; 
+(id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)movieWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)movieWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)expectsPropertyRevisedNotifications;
-(float)preferredVolume;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setModified:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)_classForTrackInspectors;
-(void)setMetadata:(NSArray *)arg1 ;
-(id)data;
-(int)timescale;
-(NSArray *)tracks;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(NSArray *)metadata;
-(CGAffineTransform)preferredTransform;
-(SCD_Struct_AV6)duration;
-(void)_addFigAssetNotifications;
-(void)dealloc;
-(OpaqueFigMutableMovieRef)_figMutableMovie;
-(void)setTimescale:(int)arg1 ;
-(void)_signalMetadataUpdated;
-(id)URL;
-(id)initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(BOOL)isModified;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)fileType;
-(id)trackWithTrackID:(int)arg1 ;
-(void)_removeFigAssetNotifications;
-(void)setPreferredRate:(float)arg1 ;
-(id)_initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4 ;
-(id)_initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(id)_initWithFigError:(int)arg1 userInfo:(id)arg2 ;
-(void)_signalTracksUpdated;
-(AVMediaDataStorage *)defaultMediaDataStorage;
-(id)initWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2 ;
-(id)initWithFileType:(id)arg1 copySettingsFromMovie:(id)arg2 options:(id)arg3 ;
-(SCD_Struct_AV6)interleavingPeriod;
-(void)setInterleavingPeriod:(SCD_Struct_AV6)arg1 ;
-(void)setDefaultMediaDataStorage:(AVMediaDataStorage *)arg1 ;
-(BOOL)insertTimeRange:(SCD_Struct_AV7)arg1 ofAsset:(id)arg2 atTime:(SCD_Struct_AV6)arg3 copySampleData:(BOOL)arg4 error:(id*)arg5 ;
-(id)_addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3 ;
-(id)addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)addMutableTracksCopyingSettingsFromTracks:(id)arg1 options:(id)arg2 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)_initializationOptions;
-(float)preferredRate;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)description;
-(void)removeTrack:(id)arg1 ;
-(id)_mutableTracks;
-(void)insertEmptyTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)removeTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_AV7)arg1 toDuration:(SCD_Struct_AV6)arg2 ;
-(id)mutableTrackCompatibleWithTrack:(id)arg1 ;
@end
