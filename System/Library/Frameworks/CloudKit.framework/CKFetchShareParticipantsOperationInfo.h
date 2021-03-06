/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKFetchShareParticipantsOperationInfo : CKOperationInfo <NSSecureCoding> {

	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,copy) NSArray * userIdentityLookupInfos;              //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)userIdentityLookupInfos;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

