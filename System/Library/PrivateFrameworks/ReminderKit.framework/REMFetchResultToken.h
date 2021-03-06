/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface REMFetchResultToken : NSObject <NSSecureCoding> {

	NSDictionary* _persistentHistoryTokens;

}

@property (nonatomic,readonly) NSDictionary * persistentHistoryTokens;              //@synthesize persistentHistoryTokens=_persistentHistoryTokens - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fetchResultTokenFromDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(NSDictionary *)persistentHistoryTokens;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPersistentHistoryTokens:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

