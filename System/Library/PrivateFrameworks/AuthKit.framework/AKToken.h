/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface AKToken : NSObject {

	NSDate* _expirationDate;
	NSString* _stringValue;
	NSString* _name;

}

@property (nonatomic,copy) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)tokenWithBase64String:(id)arg1 ;
+(id)tokenWithValue:(id)arg1 lifetime:(id)arg2 ;
-(NSDate *)expirationDate;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)stringValue;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end
