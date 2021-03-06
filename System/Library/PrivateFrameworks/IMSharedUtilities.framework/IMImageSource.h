/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSURL, NSString;

@interface IMImageSource : NSObject {

	CGImageSourceRef _imageSourceRef;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) BOOL fileExists; 
@property (nonatomic,readonly) CGImageSourceRef imageSourceRef;              //@synthesize imageSourceRef=_imageSourceRef - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * filePath; 
-(NSString *)filePath;
-(NSURL *)fileURL;
-(void)dealloc;
-(CGImageSourceRef)imageSourceRef;
-(BOOL)fileExists;
-(id)initWithFileURL:(id)arg1 ;
@end

