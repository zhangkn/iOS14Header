/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSSet, NSString, SFCard;


@protocol CRCard <NSObject,NSSecureCoding,NSCopying,CRContent>
@property (nonatomic,readonly) NSArray * cardSections; 
@property (nonatomic,readonly) NSSet * interactions; 
@property (nonatomic,readonly) NSArray * dismissalCommands; 
@property (nonatomic,copy,readonly) NSString * cardIdentifier; 
@property (nonatomic,readonly) unsigned long long cardFormat; 
@property (nonatomic,readonly) BOOL asynchronous; 
@property (nonatomic,readonly) BOOL flexibleSectionOrder; 
@property (nonatomic,readonly) SFCard * backingCard; 
@optional
-(BOOL)asynchronous;
-(BOOL)flexibleSectionOrder;
-(SFCard *)backingCard;
-(void)loadCardWithCompletion:(/*^block*/id)arg1;

@required
-(NSSet *)interactions;
-(NSArray *)dismissalCommands;
-(NSArray *)cardSections;
-(NSString *)cardIdentifier;
-(unsigned long long)cardFormat;

@end
