/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSURL, NSString;


@protocol PUImageInfoNode <PXRunNode>
@property (nonatomic,readonly) NSURL * imageDataURL; 
@property (nonatomic,readonly) NSString * imageDataUTI; 
@property (nonatomic,readonly) BOOL useEmbeddedPreview; 
@property (nonatomic,readonly) long long imageExifOrientation; 
@required
-(NSURL *)imageDataURL;
-(NSString *)imageDataUTI;
-(BOOL)useEmbeddedPreview;
-(long long)imageExifOrientation;

@end

