/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface SSPurchaseHistoryItem : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _properties;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)valueForProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end
