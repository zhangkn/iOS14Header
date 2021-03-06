/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLKDevice, NSString;

@interface NTKEditOption : NSObject <NSSecureCoding> {

	CLKDevice* _device;

}

@property (nonatomic,readonly) long long swatchStyle; 
@property (nonatomic,readonly) CLKDevice * device;                             //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * dailySnapshotKey; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * localizedNameForAction; 
+(BOOL)supportsSecureCoding;
+(CGSize)sizeForSwatchStyle:(long long)arg1 ;
+(id)optionsDescription;
-(CLKDevice *)device;
-(NSString *)localizedName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)description;
-(long long)swatchStyle;
-(NSString *)dailySnapshotKey;
-(NSString *)localizedNameForAction;
-(id)JSONObjectRepresentation;
-(BOOL)isValidOption;
-(BOOL)optionExistsInDevice:(id)arg1 ;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
@end

