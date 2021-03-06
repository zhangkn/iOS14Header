/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EMContentRequestOptionsBuilder.h>

@class NSString, NSArray;

@interface EMContentRequestOptions : NSObject <NSSecureCoding, NSCopying, EMContentRequestOptionsBuilder> {

	BOOL _includeSuggestionItems;
	BOOL _requestAllHeaders;
	NSString* _requestedRepresentation;
	long long _networkUsage;
	NSArray* _requestedHeaderKeys;

}

@property (nonatomic,copy) NSString * requestedRepresentation;              //@synthesize requestedRepresentation=_requestedRepresentation - In the implementation block
@property (assign,nonatomic) long long networkUsage;                        //@synthesize networkUsage=_networkUsage - In the implementation block
@property (assign,nonatomic) BOOL includeSuggestionItems;                   //@synthesize includeSuggestionItems=_includeSuggestionItems - In the implementation block
@property (nonatomic,copy) NSArray * requestedHeaderKeys;                   //@synthesize requestedHeaderKeys=_requestedHeaderKeys - In the implementation block
@property (assign,nonatomic) BOOL requestAllHeaders;                        //@synthesize requestAllHeaders=_requestAllHeaders - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 ;
+(id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestionItems:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)networkUsage;
-(NSString *)requestedRepresentation;
-(id)debugDescription;
-(BOOL)includeSuggestionItems;
-(NSArray *)requestedHeaderKeys;
-(BOOL)requestAllHeaders;
-(void)setRequestedRepresentation:(NSString *)arg1 ;
-(void)setIncludeSuggestionItems:(BOOL)arg1 ;
-(void)setRequestAllHeaders:(BOOL)arg1 ;
-(void)setRequestedHeaderKeys:(NSArray *)arg1 ;
-(void)setNetworkUsage:(long long)arg1 ;
-(id)copyWithBuilder:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
@end

