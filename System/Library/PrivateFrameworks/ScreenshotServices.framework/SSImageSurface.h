/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface SSImageSurface : NSObject <BSXPCCoding> {

	IOSurfaceRef _backingSurface;
	double _scale;
	long long _orientation;

}

@property (assign,nonatomic) IOSurfaceRef backingSurface;              //@synthesize backingSurface=_backingSurface - In the implementation block
@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)dealloc;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)orientation;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)init;
-(void)setOrientation:(long long)arg1 ;
-(IOSurfaceRef)backingSurface;
-(void)setBackingSurface:(IOSurfaceRef)arg1 ;
@end

