/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSDate;

@interface SANoteSearch : SADomainCommand

@property (nonatomic,copy) NSString * contentQuery; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSDate * toDate; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)toDate;
-(id)encodedClassName;
-(NSDate *)fromDate;
-(id)groupIdentifier;
-(NSString *)contentQuery;
-(void)setContentQuery:(NSString *)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
-(void)setFromDate:(NSDate *)arg1 ;
-(BOOL)requiresResponse;
@end
