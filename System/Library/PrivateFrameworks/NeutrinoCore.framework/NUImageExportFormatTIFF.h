/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatTIFF : NUImageExportFormat {

	BOOL _preserveAlpha;
	long long _pixelType;
	long long _compression;

}

@property (assign) long long pixelType;                //@synthesize pixelType=_pixelType - In the implementation block
@property (assign) long long compression;              //@synthesize compression=_compression - In the implementation block
@property (assign) BOOL preserveAlpha;                 //@synthesize preserveAlpha=_preserveAlpha - In the implementation block
-(int)depth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compression;
-(void)setCompression:(long long)arg1 ;
-(id)init;
-(id)fileType;
-(long long)pixelType;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg1 ;
-(BOOL)preserveAlpha;
-(void)setPreserveAlpha:(BOOL)arg1 ;
-(void)setPixelType:(long long)arg1 ;
@end

