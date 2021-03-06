/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NSSQLAttributeExtension <NSObject>
@property (nonatomic,readonly) NSArray * insertSQLStrings; 
@property (nonatomic,readonly) NSArray * dropSQLStrings; 
@property (nonatomic,readonly) NSArray * bulkUpdateSQLStrings; 
@required
-(NSArray *)dropSQLStrings;
-(BOOL)isEqualToExtension:(id)arg1;
-(BOOL)validate:(id*)arg1;
-(id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;
-(NSArray *)bulkUpdateSQLStrings;
-(NSArray *)insertSQLStrings;

@end

