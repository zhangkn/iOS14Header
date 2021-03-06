/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSDictionary;

@interface IMPreviewGeneratorManager : NSObject {

	NSDictionary* _UTITypes;
	NSDictionary* _dynamicTypes;

}

@property (nonatomic,copy) NSDictionary * UTITypes;                  //@synthesize UTITypes=_UTITypes - In the implementation block
@property (nonatomic,copy) NSDictionary * dynamicTypes;              //@synthesize dynamicTypes=_dynamicTypes - In the implementation block
+(id)sharedInstance;
-(BOOL)generateAndPersistPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out CGSize*)arg3 previewConstraints:(IMPreviewConstraints)arg4 error:(id*)arg5 ;
-(BOOL)sizePreviewFromSourceURL:(id)arg1 size:(out CGSize*)arg2 previewConstraints:(IMPreviewConstraints)arg3 error:(id*)arg4 ;
-(void)setUTITypes:(NSDictionary *)arg1 ;
-(void)dealloc;
-(NSDictionary *)UTITypes;
-(BOOL)persistPreviewToDiskCache:(CGImageRef)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
-(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
-(id)init;
-(void)setDynamicTypes:(NSDictionary *)arg1 ;
-(Class)_previewGeneratorClassForSourceURL:(id)arg1 ;
-(BOOL)movePreviewToDiskCache:(id)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)dynamicTypes;
-(BOOL)generateAndPersistMapPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out CGSize*)arg3 previewConstraints:(IMPreviewConstraints)arg4 error:(id*)arg5 ;
-(Class)previewGeneratorClassForUTIType:(id)arg1 ;
-(BOOL)generateAndPersistContactCardPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 size:(out CGSize*)arg3 previewConstraints:(IMPreviewConstraints)arg4 error:(id*)arg5 ;
@end

