/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SAMPReleaseInfo : AceObject <SAAceSerializable>

@property (nonatomic,retain) SACalendar * releaseDate; 
@property (assign,nonatomic) long long releaseYear; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_af_releaseInfoWithReleaseDate:(id)arg1 ;
+(id)releaseInfoWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)releaseInfo;
-(SACalendar *)releaseDate;
-(void)setReleaseDate:(SACalendar *)arg1 ;
-(void)setReleaseYear:(long long)arg1 ;
-(long long)releaseYear;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

