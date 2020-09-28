/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SADPDeviceSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * deviceSearchQueries; 
+(id)deviceSearch;
+(id)deviceSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSArray *)deviceSearchQueries;
-(void)setDeviceSearchQueries:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
@end
