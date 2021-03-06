/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString, NSNumber;

@interface SASPronunciationContext : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * domainObjectIdentifier; 
@property (nonatomic,copy) NSString * domainObjectPropertyIdentifier; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSNumber * tokenOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pronunciationContext;
+(id)pronunciationContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSURL *)domainObjectIdentifier;
-(void)setDomainObjectIdentifier:(NSURL *)arg1 ;
-(NSString *)domainObjectPropertyIdentifier;
-(void)setDomainObjectPropertyIdentifier:(NSString *)arg1 ;
-(NSString *)language;
-(NSString *)orthography;
-(void)setFullName:(NSString *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(NSNumber *)tokenOffset;
-(void)setTokenOffset:(NSNumber *)arg1 ;
-(NSString *)fullName;
@end

