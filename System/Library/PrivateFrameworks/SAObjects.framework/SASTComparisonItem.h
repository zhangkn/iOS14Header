/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SASTComparisonEntity, SAUIDecoratedText, NSString;

@interface SASTComparisonItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SASTComparisonEntity * firstItem; 
@property (nonatomic,retain) SAUIDecoratedText * footnote; 
@property (nonatomic,retain) SASTComparisonEntity * secondItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)comparisonItem;
+(id)comparisonItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(SASTComparisonEntity *)secondItem;
-(void)setFootnote:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)footnote;
-(SASTComparisonEntity *)firstItem;
-(void)setFirstItem:(SASTComparisonEntity *)arg1 ;
-(void)setSecondItem:(SASTComparisonEntity *)arg1 ;
@end

