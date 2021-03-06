/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NTKEditOption;

@interface NTKEditModeConfiguration : NSObject <NSSecureCoding> {

	NSMutableDictionary* _optionsBySlot;
	NTKEditOption* _nilSlotOption;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dailySnapshotKey;
-(id)JSONObjectRepresentation;
-(void)setEditOption:(id)arg1 forSlot:(id)arg2 ;
-(id)editOptionForSlot:(id)arg1 ;
-(void)enumerateSlotsWithBlock:(/*^block*/id)arg1 ;
-(id)_alphabeticalSlots;
-(id)initWithJSONObjectRepresentation:(id)arg1 editOptionClass:(Class)arg2 forDevice:(id)arg3 ;
@end

