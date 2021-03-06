/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SAUIDecoratedText, NSArray, SAUINanoImageResource;

@interface SASTPropertyListItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedTitle; 
@property (nonatomic,copy) NSArray * decoratedValues; 
@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSArray * values; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyListItem;
+(id)propertyListItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)values;
-(SAUIDecoratedText *)decoratedTitle;
-(void)setDecoratedTitle:(SAUIDecoratedText *)arg1 ;
-(NSArray *)decoratedValues;
-(void)setDecoratedValues:(NSArray *)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)title;
-(NSString *)alignment;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAlignment:(NSString *)arg1 ;
@end

