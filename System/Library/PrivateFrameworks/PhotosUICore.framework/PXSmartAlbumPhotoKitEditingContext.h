/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXSmartAlbumEditingContext.h>

@class NSArray, PHPhotoLibrary, NSString;

@interface PXSmartAlbumPhotoKitEditingContext : NSObject <PXSmartAlbumEditingContext> {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) NSArray * conditionTypeValues; 
@property (nonatomic,readonly) NSArray * albumValues; 
@property (nonatomic,readonly) NSArray * cameraModels; 
@property (nonatomic,readonly) NSArray * lensModels; 
@property (nonatomic,readonly) NSArray * keywordValues; 
@property (nonatomic,readonly) NSArray * personNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(id)init;
-(NSArray *)lensModels;
-(id)apertureValuesWithFormatter:(id)arg1 ;
-(id)ISOValuesWithFormatter:(id)arg1 ;
-(id)focalLengthValuesWithFormatter:(id)arg1 ;
-(id)shutterSpeedValuesWithFormatter:(id)arg1 ;
-(NSArray *)conditionTypeValues;
-(NSArray *)albumValues;
-(NSArray *)cameraModels;
-(NSArray *)keywordValues;
-(NSArray *)personNames;
@end

