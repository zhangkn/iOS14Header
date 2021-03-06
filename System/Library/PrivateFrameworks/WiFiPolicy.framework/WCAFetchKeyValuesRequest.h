/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WCAFetchRequest.h>

@class NSArray;

@interface WCAFetchKeyValuesRequest : WCAFetchRequest {

	NSArray* _keys;

}

@property (nonatomic,copy) NSArray * keys;              //@synthesize keys=_keys - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setKeys:(NSArray *)arg1 ;
-(NSArray *)keys;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

