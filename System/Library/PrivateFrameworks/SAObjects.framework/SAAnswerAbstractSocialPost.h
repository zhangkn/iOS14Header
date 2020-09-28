/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, NSDate, NSURL;

@interface SAAnswerAbstractSocialPost : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSString * authorTitle; 
@property (nonatomic,copy) NSArray * comments; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,copy) NSDate * dateModified; 
@property (nonatomic,copy) NSURL * icon; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)abstractSocialPost;
+(id)abstractSocialPostWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)rank;
-(void)setAuthor:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)author;
-(id)groupIdentifier;
-(NSString *)text;
-(NSString *)title;
-(void)setDateCreated:(NSDate *)arg1 ;
-(void)setComments:(NSArray *)arg1 ;
-(NSURL *)icon;
-(void)setText:(NSString *)arg1 ;
-(void)setDateModified:(NSDate *)arg1 ;
-(NSArray *)comments;
-(void)setRank:(long long)arg1 ;
-(NSString *)authorTitle;
-(void)setAuthorTitle:(NSString *)arg1 ;
-(NSDate *)dateModified;
-(NSDate *)dateCreated;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(NSURL *)arg1 ;
@end
