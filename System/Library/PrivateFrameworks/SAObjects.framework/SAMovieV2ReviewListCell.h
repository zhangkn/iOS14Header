/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate;

@interface SAMovieV2ReviewListCell : SADomainObject

@property (nonatomic,copy) NSString * reviewAuthor; 
@property (nonatomic,copy) NSDate * reviewDate; 
@property (nonatomic,copy) NSString * reviewText; 
+(id)reviewListCell;
+(id)reviewListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)reviewAuthor;
-(void)setReviewAuthor:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setReviewText:(NSString *)arg1 ;
-(NSString *)reviewText;
-(NSDate *)reviewDate;
-(void)setReviewDate:(NSDate *)arg1 ;
@end
