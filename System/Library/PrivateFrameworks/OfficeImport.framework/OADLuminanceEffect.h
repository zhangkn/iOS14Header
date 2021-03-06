/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADBlipEffect.h>

@interface OADLuminanceEffect : OADBlipEffect {

	float mBrightness;
	float mContrast;

}
-(float)contrast;
-(float)brightness;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBrightness:(float)arg1 ;
-(unsigned long long)hash;
-(void)setContrast:(float)arg1 ;
@end

