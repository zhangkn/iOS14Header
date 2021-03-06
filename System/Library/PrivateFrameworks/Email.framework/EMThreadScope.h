/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFCacheable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class EMMailboxScope, NSPredicate, NSString;

@interface EMThreadScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {

	EMMailboxScope* _mailboxScope;
	NSPredicate* _filterPredicate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) EMMailboxScope * mailboxScope;                     //@synthesize mailboxScope=_mailboxScope - In the implementation block
@property (nonatomic,readonly) NSPredicate * filterPredicate;                     //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
-(id)cachedSelf;
-(NSPredicate *)filterPredicate;
-(NSString *)ef_publicDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMailboxScope:(id)arg1 filterPredicate:(id)arg2 ;
-(unsigned long long)hash;
-(EMMailboxScope *)mailboxScope;
-(NSString *)description;
@end

