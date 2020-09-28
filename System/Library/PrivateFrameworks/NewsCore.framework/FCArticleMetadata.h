/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCHeadlineMetadata.h>

@class NSDate, NSString, NSDictionary;

@interface FCArticleMetadata : NSObject <FCHeadlineMetadata> {

	NSDictionary* _dictionary;
	NSDate* _displayDate;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSDate * displayDate;                   //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,readonly) NSString * articleID; 
@property (nonatomic,readonly) BOOL isTreatedAsNew; 
@property (nonatomic,readonly) NSString * storyType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * shortExcerpt; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)articleID;
-(NSString *)title;
-(BOOL)isTreatedAsNew;
-(NSString *)storyType;
-(NSString *)shortExcerpt;
-(void)setDisplayDate:(NSDate *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(NSDate *)displayDate;
@end
