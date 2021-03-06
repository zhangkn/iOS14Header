/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NTKComplicationItem <NSObject>
@property (nonatomic,readonly) NSString * ntk_identifier; 
@property (nonatomic,readonly) NSString * ntk_sectionIdentifier; 
@property (nonatomic,readonly) unsigned long long ntk_itemType; 
@property (nonatomic,readonly) NSString * ntk_contactIdentifier; 
@required
-(NSString *)ntk_sectionIdentifier;
-(NSString *)ntk_identifier;
-(NSString *)ntk_contactIdentifier;
-(id)ntk_localizedNameWithOptions:(unsigned long long)arg1 forRichComplicationSlot:(BOOL)arg2;
-(unsigned long long)ntk_itemType;

@end

