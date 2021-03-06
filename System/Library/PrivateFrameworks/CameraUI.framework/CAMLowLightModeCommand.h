/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMLowLightModeCommand : CAMCaptureCommand {

	long long __lowLightMode;

}

@property (nonatomic,readonly) long long _lowLightMode;              //@synthesize _lowLightMode=__lowLightMode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithLowLightMode:(long long)arg1 ;
-(long long)_lowLightMode;
@end

