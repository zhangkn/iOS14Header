/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL;

@interface SALCMTvChannel : SADomainObject

@property (nonatomic,copy) NSString * callSign; 
@property (nonatomic,copy) NSString * channelIdentifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSURL * streamUrl; 
+(id)tvChannel;
+(id)tvChannelWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)channelIdentifier;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(void)setCallSign:(NSString *)arg1 ;
-(NSURL *)streamUrl;
-(void)setStreamUrl:(NSURL *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)callSign;
-(NSString *)name;
@end
