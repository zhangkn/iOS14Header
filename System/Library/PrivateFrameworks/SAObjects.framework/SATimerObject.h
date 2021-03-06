/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SADataSourceInfo, NSNumber, NSString;

@interface SATimerObject : SADomainObject

@property (nonatomic,retain) SADataSourceInfo * dataSourceInfo; 
@property (nonatomic,copy) NSNumber * isFiring; 
@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSNumber * timerValue; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * type; 
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)object;
-(id)encodedClassName;
-(NSNumber *)timerValue;
-(id)groupIdentifier;
-(NSString *)title;
-(NSNumber *)isFiring;
-(void)setState:(NSString *)arg1 ;
-(void)setTimerValue:(NSNumber *)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setIsFiring:(NSNumber *)arg1 ;
-(SADataSourceInfo *)dataSourceInfo;
-(void)setDataSourceInfo:(SADataSourceInfo *)arg1 ;
-(NSString *)state;
-(void)setTitle:(NSString *)arg1 ;
@end

