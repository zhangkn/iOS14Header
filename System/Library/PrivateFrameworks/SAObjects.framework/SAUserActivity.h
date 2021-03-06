/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAUserActivity : SADomainObject

@property (nonatomic,copy) NSArray * eligibileFunctions; 
@property (nonatomic,copy) NSString * internalGUID; 
@property (assign,nonatomic) BOOL isEligibleForAppPunchout; 
@property (assign,nonatomic) BOOL isEligibleForDirections; 
@property (assign,nonatomic) BOOL isEligibleForHandoff; 
@property (assign,nonatomic) BOOL isEligibleForPublicIndexing; 
@property (assign,nonatomic) BOOL isEligibleForReminders; 
@property (assign,nonatomic) BOOL isEligibleForSearch; 
+(id)userActivity;
+(id)userActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
-(BOOL)isEligibleForPublicIndexing;
-(NSArray *)eligibileFunctions;
-(void)setEligibileFunctions:(NSArray *)arg1 ;
-(BOOL)isEligibleForAppPunchout;
-(void)setIsEligibleForAppPunchout:(BOOL)arg1 ;
-(BOOL)isEligibleForDirections;
-(void)setIsEligibleForDirections:(BOOL)arg1 ;
-(void)setIsEligibleForHandoff:(BOOL)arg1 ;
-(void)setIsEligibleForPublicIndexing:(BOOL)arg1 ;
-(void)setIsEligibleForReminders:(BOOL)arg1 ;
-(void)setIsEligibleForSearch:(BOOL)arg1 ;
-(BOOL)isEligibleForHandoff;
-(BOOL)isEligibleForReminders;
-(BOOL)isEligibleForSearch;
@end

