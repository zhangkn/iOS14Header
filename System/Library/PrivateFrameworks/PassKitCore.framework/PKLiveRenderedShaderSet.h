/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKLiveRenderedShaderSet : NSObject <NSSecureCoding> {

	NSString* _geometryEntryPointShader;
	NSString* _surfaceEntryPointShader;
	NSString* _lightingModelEntryPointShader;
	NSString* _fragmentEntryPointShader;

}

@property (nonatomic,copy,readonly) NSString * geometryEntryPointShader;                   //@synthesize geometryEntryPointShader=_geometryEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * surfaceEntryPointShader;                    //@synthesize surfaceEntryPointShader=_surfaceEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightingModelEntryPointShader;              //@synthesize lightingModelEntryPointShader=_lightingModelEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * fragmentEntryPointShader;                   //@synthesize fragmentEntryPointShader=_fragmentEntryPointShader - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)geometryEntryPointShader;
-(NSString *)surfaceEntryPointShader;
-(NSString *)lightingModelEntryPointShader;
-(NSString *)fragmentEntryPointShader;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDataAccessor:(id)arg1 suffix:(id)arg2 ;
@end
