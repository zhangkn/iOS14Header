/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NTKUpNextComplicationConfiguration : NSObject <NSSecureCoding> {

	long long _family;

}

@property (nonatomic,readonly) long long family;              //@synthesize family=_family - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)bezelConfigurationWithMaskImage:(id)arg1 radius:(double)arg2 ;
+(id)graphicRectangularConfiguration;
-(long long)family;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFamily:(long long)arg1 ;
-(id)_newPickerView;
@end

