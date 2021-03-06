/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSApplication.framework/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TSAPdfTagInfo : NSObject {

	int _tagType;
	NSDictionary* _tagProperties;

}

@property (nonatomic,readonly) int tagType;                               //@synthesize tagType=_tagType - In the implementation block
@property (nonatomic,readonly) NSDictionary * tagProperties;              //@synthesize tagProperties=_tagProperties - In the implementation block
+(id)tagPropertiesWithActualText:(id)arg1 alternativeText:(id)arg2 titleText:(id)arg3 ;
-(int)tagType;
-(id)initWithTagType:(int)arg1 tagProperties:(id)arg2 ;
-(NSDictionary *)tagProperties;
@end

