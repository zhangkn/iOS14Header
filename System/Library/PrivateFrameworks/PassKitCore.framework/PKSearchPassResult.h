/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class NSString;

@interface PKSearchPassResult : NSObject <PKSearchAutocompleteToken> {

	NSString* _passUniqueIdentifier;

}

@property (nonatomic,retain) NSString * passUniqueIdentifier;              //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(unsigned long long)tokenType;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end
