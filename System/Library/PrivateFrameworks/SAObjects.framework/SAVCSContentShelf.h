/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, NSURL;

@interface SAVCSContentShelf : SAAceView

@property (nonatomic,copy) NSArray * contentHead; 
@property (nonatomic,copy) NSArray * fetchMoreResultsCommands; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSURL * url; 
+(id)contentShelf;
+(id)contentShelfWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSArray *)contentHead;
-(void)setContentHead:(NSArray *)arg1 ;
-(NSArray *)fetchMoreResultsCommands;
-(void)setFetchMoreResultsCommands:(NSArray *)arg1 ;
-(NSString *)title;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)setTitle:(NSString *)arg1 ;
@end

