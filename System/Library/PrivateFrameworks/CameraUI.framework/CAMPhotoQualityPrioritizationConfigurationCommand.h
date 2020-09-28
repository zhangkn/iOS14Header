/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPhotoQualityPrioritizationConfigurationCommand : CAMCaptureCommand {

	long long __photoQualityPrioritization;

}

@property (nonatomic,readonly) long long _photoQualityPrioritization;              //@synthesize _photoQualityPrioritization=__photoQualityPrioritization - In the implementation block
-(long long)_photoQualityPrioritization;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPhotoQualityPrioritization:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithSubcommands:(id)arg1 ;
@end
