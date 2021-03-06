/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAVoice : SADomainObject

@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageString; 
@property (nonatomic,copy) NSString * masteredVersion; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * quality; 
@property (assign,nonatomic) long long resourceContentVersion; 
@property (nonatomic,copy) NSString * resourceMasteredVersion; 
@property (assign,nonatomic) long long voiceContentVersion; 
@property (nonatomic,copy) NSString * voiceType; 
+(id)voice;
+(id)voiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setQuality:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)quality;
-(id)groupIdentifier;
-(void)setLanguageString:(NSString *)arg1 ;
-(void)setMasteredVersion:(NSString *)arg1 ;
-(void)setVoiceType:(NSString *)arg1 ;
-(void)setVoiceContentVersion:(long long)arg1 ;
-(NSString *)masteredVersion;
-(NSString *)voiceType;
-(NSString *)languageString;
-(long long)resourceContentVersion;
-(void)setResourceContentVersion:(long long)arg1 ;
-(NSString *)resourceMasteredVersion;
-(void)setResourceMasteredVersion:(NSString *)arg1 ;
-(long long)voiceContentVersion;
-(void)setName:(NSString *)arg1 ;
-(NSString *)gender;
-(NSString *)name;
-(void)setGender:(NSString *)arg1 ;
@end

