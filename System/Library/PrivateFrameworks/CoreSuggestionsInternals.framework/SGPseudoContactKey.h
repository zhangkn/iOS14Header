/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/SGEntityKey.h>

@class SGIdentityKey, NSString;

@interface SGPseudoContactKey : NSObject <SGEntityKey> {

	SGIdentityKey* _identityKey;

}

@property (nonatomic,readonly) SGIdentityKey * identityKey;              //@synthesize identityKey=_identityKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupportedEntityType:(long long)arg1 ;
-(id)serialize;
-(id)initWithSerialized:(id)arg1 ;
-(SGIdentityKey *)identityKey;
-(id)initWithEmail:(id)arg1 ;
-(id)initWithIdentityKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToPseudoContactKey:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithNormalizedEmail:(id)arg1 ;
-(NSString *)description;
@end

