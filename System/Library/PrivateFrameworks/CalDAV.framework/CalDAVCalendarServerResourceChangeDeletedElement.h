/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class NSString, ICSDateValue;

@interface CalDAVCalendarServerResourceChangeDeletedElement : CalDAVCalendarServerResourceChangeElement {

	BOOL _hadMoreInstances;
	NSString* _componentType;
	NSString* _summary;
	NSString* _displayName;
	ICSDateValue* _nextInstance;

}

@property (nonatomic,retain) NSString * componentType;                 //@synthesize componentType=_componentType - In the implementation block
@property (nonatomic,retain) NSString * summary;                       //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) ICSDateValue * nextInstance;              //@synthesize nextInstance=_nextInstance - In the implementation block
@property (assign,nonatomic) BOOL hadMoreInstances;                    //@synthesize hadMoreInstances=_hadMoreInstances - In the implementation block
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)summary;
-(void)setComponentType:(NSString *)arg1 ;
-(id)init;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)componentType;
-(id)copyParseRules;
-(void)setNextInstance:(ICSDateValue *)arg1 ;
-(void)setHadMoreInstances:(BOOL)arg1 ;
-(ICSDateValue *)nextInstance;
-(BOOL)hadMoreInstances;
-(void)setDeletedDetails:(id)arg1 ;
@end
