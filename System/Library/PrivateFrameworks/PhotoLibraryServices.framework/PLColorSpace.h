/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLColorSpace : NSObject {

	NSString* _colorSpaceName;

}

@property (nonatomic,copy) NSString * colorSpaceName;              //@synthesize colorSpaceName=_colorSpaceName - In the implementation block
+(id)colorSpaceFromName:(id)arg1 ;
+(id)commonColorSpace_unspecified;
+(id)commonColorSpace_displaySpace;
+(id)commonColorSpace_sRGB;
-(id)initWithName:(id)arg1 ;
-(void)setColorSpaceName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)colorSpaceName;
-(unsigned long long)hash;
@end

