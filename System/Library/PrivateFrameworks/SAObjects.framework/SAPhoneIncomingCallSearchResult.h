/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAPersonAttribute, NSString;

@interface SAPhoneIncomingCallSearchResult : SADomainObject

@property (nonatomic,retain) SAPersonAttribute * caller; 
@property (nonatomic,copy) NSString * incomingCallType; 
+(id)incomingCallSearchResult;
+(id)incomingCallSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCaller:(SAPersonAttribute *)arg1 ;
-(SAPersonAttribute *)caller;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)incomingCallType;
-(void)setIncomingCallType:(NSString *)arg1 ;
@end

