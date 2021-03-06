/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NTKGreenfieldComplicationSharingOption : NSObject {

	NSString* _name;
	NSString* _uniqueIdentifier;
	unsigned long long _optionType;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long optionType;                 //@synthesize optionType=_optionType - In the implementation block
+(id)optionWithName:(id)arg1 uniqueIdentifier:(id)arg2 optionType:(unsigned long long)arg3 ;
-(NSString *)uniqueIdentifier;
-(NSString *)name;
-(unsigned long long)optionType;
@end

