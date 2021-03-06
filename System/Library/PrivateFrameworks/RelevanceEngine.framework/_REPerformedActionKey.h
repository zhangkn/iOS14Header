/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol REDonatedActionIdentifierProviding;
@class NSString;

@interface _REPerformedActionKey : NSObject {

	id<REDonatedActionIdentifierProviding> _identifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) id<REDonatedActionIdentifierProviding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)keyForBundleIdentifier:(id)arg1 identifier:(id)arg2 ;
-(id<REDonatedActionIdentifierProviding>)identifier;
-(NSString *)bundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

